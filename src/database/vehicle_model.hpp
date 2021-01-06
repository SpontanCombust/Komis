#ifndef __VEHICLE_MODEL_H__
#define __VEHICLE_MODEL_H__

#include <string>

enum class EVehicleType
{
    MOTORCYCLE,
    CAR,
    SUV,
    VAN,
    TRUCK
};

enum class EVehicleFuel
{
    GASOLINE,
    DIESEL,
    LPG,
    ELECTRICITY
};

enum class EWheelDrive
{
    FRONT,
    REAR,
    ALL
};

struct SVehicleModel
{
    EVehicleType vehicleType;
    std::string brandName;
    std::string modelName;
    EVehicleFuel fuelType;
    bool isManualTransmission;
    unsigned int engineHorsepower;
    unsigned int engineCapacityL;
    unsigned int doorQuantity;
    EWheelDrive wheelDriveType;
};

#endif // __VEHICLE_MODEL_H__