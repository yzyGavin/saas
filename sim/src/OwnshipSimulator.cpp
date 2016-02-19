/**
 * @file OwnshipSimulator.cpp
 * @author Specific Atomics
 * @authors Frank Poole
 * @date 2-18-16
 * @brief TODO: Description
 */

#include "OwnshipSimulator.h"

void OwnshipSimulator::SendReports(ServerSocket client_socket) {
    std::vector<Flight> flights = _flight_simulation->GetFlights();
    Flight ownship_flight = flights[0];

    while (ownship_flight.HasNextFlightReport()) {
        FlightReport ownship_report = ownship_flight.NextFlightReport();
        this->SendReport(client_socket, &ownship_report);
        sleep(1);
    }
}

void OwnshipSimulator::SendReport(ServerSocket client_socket,
                                  FlightReport *flightReport) {
    OwnshipReport ownship_report = flightReport->CreateOwnshipReport();
    client_socket << ownship_report;
}