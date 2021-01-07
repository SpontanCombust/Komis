#ifndef __VEHICLE_COPY_H__
#define __VEHICLE_COPY_H__

#include <string>
#include <cstdint>

struct SVehicleCopy
{
    // ID number of an individual vehicle
    uint32_t id;
    // ID number of the vehicle model of this vehicle
    uint32_t vehicleModelID;

    float price;
    unsigned int mileageKm;
    std::string color;
    std::string state;
    std::string additionalInformation;
};

#endif // __VEHICLE_COPY_H__