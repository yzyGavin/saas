/*
 * @file ReportReceiver.h
 * @author Specific Atomics
 * @author Alanna Buss, Dat Tran (style)
 * @date 2-18-16
 * @brief TODO make description
 */

#ifndef SAAS_REPORTRECEIVER_H
#define SAAS_REPORTRECEIVER_H

#include <ownship.pb.h>
#include <adsb.pb.h>
#include <radar.pb.h>
#include <tcas.pb.h>
#include <cdti.pb.h>
#include "SurveillanceReport.h"
#include "FlightReport.h"

class ReportReceiver {
private:



    class HeldReports {
    private:
        std::vector<SurveillanceReport *> _tcas_reports;
        std::vector<SurveillanceReport *> _adsb_reports;
        std::vector<SurveillanceReport *> _radar_reports;
        FlightReport _ownship;

        /*
         * Clears the _tcas_reports so it doesn't have overlapping reports.
         */
        void clearTcas();
        /*
        * Clears the _adsb_reports so it doesn't have overlapping reports.
        */
        void clearAdsb();
        /*
        * Clears the _radar_reports so it doesn't have overlapping reports.
        */
        void clearRadar();
        /*
         * Creates a copy of the specified vector. This copy uses the ownship
         * FlightReport to make the Surveillance report relative. This should
         * only be called on a copy of the held report.
         */
        std::vector<SurveillanceReport *>* makeCopyOfVector
                (std::vector<SurveillanceReport *>);


    public:
        //HeldReports(CorrelationEngine corEngine);

        std::vector<SurveillanceReport *>* getTcas();
        std::vector<SurveillanceReport *>* getAdsb();
        std::vector<SurveillanceReport *>* getRadar();

        /*
         * Adds a SurveillanceReport pointer to the Tcas Reports
         */
        void addTcasReport(SurveillanceReport * report);
        /*
         * Adds a SurveillanceReport pointer to the Adsb Reports
         */
        void addAdsBReport(SurveillanceReport * report);
        /*
         * Adds a SurveillanceReport pointer to the Radar Reports
         */
        void addRadarReport(SurveillanceReport * report);
        /*
         * Changes the current ownship FlightReport
         */
        void changeOwnship(FlightReport report);
        /*
         * This should only be called on a copy of Held Reports and
         */
        void callCorrelate();
        HeldReports makeCopy();
    };

    bool _is_copying;
    pthread_cond_t _held_report_cv;
    pthread_mutex_t _radar_mutex;
    pthread_mutex_t _tcas_mutex;
    pthread_mutex_t _adsb_mutex;
    pthread_mutex_t _ownship_mutex;
    HeldReports _held_reports;

    /*
     * Takes the OwnshipReport and translates it to a Surveillance report.
     * @param report A report received from the ReceiveOwnship.
     * @return the created Surveillance Report
     */
    FlightReport CreateOwnshipFlightReport(OwnshipReport report);

    /*
     * Takes the TcasReport and translates it into a Surveillance Report.
     * @param report a Report received from ReceiveTcas.
     * @return The created Surveillance Report
     */
    SurveillanceReport* CreateTcasSurveillanceReport(TcasReport report);
    /*
     * Takes the RadarReport and translates it to a Surveillance report.
     * @param report A report received from the ReceiveRadar.
     * @return the created Surveillance Report
     */
    SurveillanceReport* CreateRadarSurveillanceReport(RadarReport report);
    /*
     * Takes the AdsBReport and translates it to a Surveillance report.
     * @param report A report received from the ReceiveAdsB.
     * @return the created Surveillance Report
     */
    SurveillanceReport* CreateAdsbSurveillanceReport(AdsBReport report);
public:

    /*
     * Initializes the thread for countdown, creates all the locks and
     * creates the correct correlation engine.
     */
    ReportReceiver();

    /*
     * Takes in an OwnshipReport from the Simulation Server and sends it to
     * Create Ownship to create a SurveillanceReport. Then changes out the
     * ownship Surveillance report with the new one generated.
     * @param report A report received from the Simulation Server
     */
    void ReceiveOwnship(OwnshipReport report);
    /*
     * Takes in a TcasReport from the Simulation Server and sends it to
     * CreateTcasSurveillanceReport to get the Surveillance report to add to
     * the tcasReports.
     */
    void ReceiveTcas(TcasReport report);
    /*
     * Takes in a AdsBReport from the Simulation Server and sends it to
     * CreateAdsBSurveillanceReport to get the Surveillance report to add to
     * the AdsBReports.
     */
    void ReceiveAdsb(AdsBReport report);
    /*
    * Takes in a RadarReport from the Simulation Server and sends it to
    * CreateRadarSurveillanceReport to get the Surveillance report to add to
    * the RadarReports.
    */
    void ReceiveRadar(RadarReport report);

};


#endif //SAAS_REPORTRECEIVER_H