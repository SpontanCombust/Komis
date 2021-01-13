#ifndef __VEHICLE_BASIC_DATA_H__
#define __VEHICLE_BASIC_DATA_H__

#include <string>

enum class EVehicleType
{
    MOTORCYCLE,
    CAR,
    SUV,
    VAN,
    TRUCK
};

struct SVehicleBasicData
{
    EVehicleType vehicleType;
    std::string brandName;
    std::string modelName;
};

#endif // __VEHICLE_BASIC_DATA_H__