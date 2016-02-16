//
// Created by KEVIN on 11/27/2015.
//

#include "FlightScenarioIO.h"
#include "FlightScenario.h"
#include "../../util/inc/FlightScenario.h"
#include "Velocity.h"

using namespace std;


Json::Value FlightScenarioIO::OpenFile(std::string file_name) {
    Json::Value root;   // will contain the root value after parsing.
    Json::Reader reader;
    std:string file_dir = "../../lib/jsonio/src/";
    std::string file = file_dir + file_name;
    std::ifstream test(file, std::ifstream::binary);
    bool parsing_successful = reader.parse(test, root, false);

    if (!parsing_successful) {
        // report to the user the failure and their locations in the document.
        std::cout << reader.getFormattedErrorMessages()
        << "\n";
        return Json::nullValue;
    }
    else {
        return root;
    }

}

Aircraft FlightScenarioIO::ReadOwnshipData(std::string file_name) {
    Json::Value ownship = GetAbsoluteOwnshipData(file_name);

    GeographicCoordinate ownship_position(
            ownship["startPosition"]["latitude"].asDouble(),
            ownship["startPosition"]["longitude"].asDouble(),
            ownship["startPosition"]["altitude"].asDouble());
    TailNumber ownship_tail ("000000");
    std::vector<FlightLeg> ownship_flight_legs;

    for(int idx = 0; idx < ownship["flightLegs"].size(); idx++) {
        Velocity velocity(
                ownship["flightLegs"][idx]["newRelativeVelocity"]["x"].asDouble(),
                ownship["flightLegs"][idx]["newRelativeVelocity"]["y"].asDouble(),
                ownship["flightLegs"][idx]["newRelativeVelocity"]["z"].asDouble());
        ownship_flight_legs.push_back
                (FlightLeg(ownship["flightLegs"][idx]["durationOfManeuver"].asDouble(),
                           ownship["flightLegs"][idx]["durationAfterManeuver"].asDouble(),
                           velocity));
    }

    FlightPlan ownship_flight_plan (ownship_position, ownship_flight_legs);
    Aircraft ownship_aircraft (ownship_tail.Get(), ownship_flight_plan, false, false);

    return ownship_aircraft;
}

std::vector<Aircraft> FlightScenarioIO::ReadAircraftData(std::string file_name) {
    Json::Value aircraft_flight_plans = GetFlightPlans(file_name);
    std::vector<Aircraft> all_aircraft;

    for(int idx = 0; idx < aircraft_flight_plans.size(); idx++) {
        GeographicCoordinate aircraft_pos(
                aircraft_flight_plans[idx]["startPosition"]["latitude"].asDouble(),
                aircraft_flight_plans[idx]["startPosition"]["longitude"].asDouble(),
                aircraft_flight_plans[idx]["startPosition"]["altitude"].asDouble());

        TailNumber aircraft_tail_number (aircraft_flight_plans[idx]["tailNo"].asString());

        bool aircraft_has_adsb = aircraft_flight_plans[idx]["hasADSB"].asBool();
        bool aircraft_has_tcas = aircraft_flight_plans[idx]["hasTCAS"].asBool();

        std::vector<FlightLeg> aircraft_flight_legs;

        for(int leg_idx = 0; leg_idx < aircraft_flight_plans[idx]["flightLegs"].size(); leg_idx++) {
            Velocity velocity(
                    aircraft_flight_plans[idx]["flightLegs"][leg_idx]["newRelativeVelocity"]["x"].asDouble(),
                    aircraft_flight_plans[idx]["flightLegs"][leg_idx]["newRelativeVelocity"]["y"].asDouble(),
                    aircraft_flight_plans[idx]["flightLegs"][leg_idx]["newRelativeVelocity"]["z"].asDouble());
            aircraft_flight_legs.push_back
                    (FlightLeg(aircraft_flight_plans[idx]["flightLegs"][leg_idx]["durationOfManeuver"].asDouble(),
                               aircraft_flight_plans[idx]["flightLegs"][leg_idx]["durationAfterManeuver"].asDouble(),
                               velocity));
        }

        FlightPlan aircraft_flight_plan (aircraft_pos, aircraft_flight_legs);
        Aircraft aircraft (aircraft_tail_number, aircraft_flight_plan, aircraft_has_adsb, aircraft_has_tcas);

        all_aircraft.push_back(aircraft);
    }

    return all_aircraft;
}

FlightScenario FlightScenarioIO::ReadFile(std::string file_name) {
    Aircraft ownship_aircraft = ReadOwnshipData(file_name);
    std::vector<Aircraft> all_aircraft = ReadAircraftData(file_name);
    FlightScenario flight_scenario (ownship_aircraft,all_aircraft);

    return flight_scenario;
}


Json::Value FlightScenarioIO::GetAbsoluteOwnshipData(std::string file_name) {
    Json::Value root = OpenFile(file_name);

    return root["absoluteOwnship"];
}


Json::Value FlightScenarioIO::GetFlightPlans(std::string file_name) {
    Json::Value root = OpenFile(file_name);

    return root["flightPlans"];
}
/*
std::vector<std::vector<int>> FlightScenarioIO::GetStartPositions() {
    Json::Value flight_plans = GetFlightPlans();
    std::vector<int> position;
    std::vector<std::vector<int>> positions;

    for (int index = 0; index < flight_plans.size(); index++ ) {
        position.push_back(flight_plans[index]["startPosition"]["x"].asInt());
        position.push_back(flight_plans[index]["startPosition"]["y"].asInt());
        position.push_back(flight_plans[index]["startPosition"]["z"].asInt());
        positions.push_back(position);
        position.empty();
    }

    return positions;
}

std::vector<Json::Value> FlightScenarioIO::GetFlightLegs() {
    Json::Value flight_plans = GetFlightPlans();
    std::vector<Json::Value> flight_legs;

    for ( int index = 0; index < flight_plans.size(); index++ ) {
        flight_legs.push_back(flight_plans[index]["flightLegs"]);
    }

    return flight_legs;
}

void FlightScenarioIO::WriteFile(Json::Value value) {
    std::ofstream file_id;

    file_id.open("FlightScenarioOutput", fstream::out);
    Json::StyledWriter styled_writer;
    file_id << styled_writer.write(value);

    file_id.close();
}

*/