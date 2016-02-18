/*
 * FlightReport.cpp
 * Specific Atomics
 * Frank Poole
 * 2-4-16
 * TODO: Description
 */

#include "FlightReport.h"

//This is causing an error, something with implicit construction...
FlightReport::FlightReport(std::time_t time, TailNumber tail_number, TcasID tcas_id,
RadarID radar_id, GeographicCoordinate geographic_coordinate,
SphericalCoordinate spherical_coordinate, Velocity velocity, Device type) {
    _time = time;
    _tail_number = tail_number;
    _tcas_id = tcas_id;
    _radar_id = radar_id;
    _geographic_coordinate = geographic_coordinate;
    _spherical_coordinate = spherical_coordinate;
    _velocity = velocity;
    _type = type;
}


FlightReport::FlightReport() {

}

OwnshipReport FlightReport::createOwnshipReport() {
    OwnshipReport ownshipReport;
    ownshipReport.set_timestamp(_time);
    ownshipReport.set_ownship_latitude(_geographic_coordinate.GetLatitude());
    ownshipReport.set_ownship_longitude(_geographic_coordinate.GetLongitude());
    ownshipReport.set_ownship_altitude(_geographic_coordinate.GetAltitude());
    ownshipReport.set_north(_velocity.north);
    ownshipReport.set_east(_velocity.east);
    ownshipReport.set_down(_velocity.down);

    return ownshipReport;
}

AdsBReport FlightReport::createAdsBReport() {
    AdsBReport adsBReport;
    adsBReport.set_timestamp(_time);
    adsBReport.set_latitude(_geographic_coordinate.GetLatitude());
    adsBReport.set_longitude(_geographic_coordinate.GetLongitude());
    adsBReport.set_altitude(_geographic_coordinate.GetAltitude());
    adsBReport.set_tail_number(_tail_number.Get());
    adsBReport.set_north(_velocity.north);
    adsBReport.set_east(_velocity.east);
    adsBReport.set_down(_velocity.down);

    return adsBReport;
}

RadarReport FlightReport::createRadarReport() {
    RadarReport radarReport;

    radarReport.set_timestamp(_time);
    radarReport.set_range(_spherical_coordinate.GetRange());
    radarReport.set_azimuth(_spherical_coordinate.GetAzimuth());
    radarReport.set_elevation(_spherical_coordinate.GetElevation());
    radarReport.set_id(_radar_id.Get());
    radarReport.set_north(_velocity.north);
    radarReport.set_east(_velocity.east);
    radarReport.set_down(_velocity.down);
    radarReport.set_latitude(_geographic_coordinate.GetLatitude());
    radarReport.set_longitude(_geographic_coordinate.GetLongitude());
    radarReport.set_altitude(_geographic_coordinate.GetAltitude());

    return radarReport;
}

TcasReport FlightReport::createTcasReport() {
    TcasReport tcasReport;

    tcasReport.set_id(_tcas_id.Get());
    tcasReport.set_range(_spherical_coordinate.GetRange());
    tcasReport.set_altitude(_geographic_coordinate.GetAltitude());
    tcasReport.set_bearing(_spherical_coordinate.GetBearing());

    return tcasReport;
}
