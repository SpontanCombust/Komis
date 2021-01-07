#ifndef __VEHICLE_MODEL_H__
#define __VEHICLE_MODEL_H__

#include <string>
#include <cstdint>

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

enum class EVehicleTransmission
{
    MANUAL,
    AUTOMATIC
};

enum class EWheelDrive
{
    FRONT,
    REAR,
    ALL
};

struct SVehicleModel
{
    // ID number of the model
    uint32_t id;

    // main data
    EVehicleType vehicleType;
    std::string brandName;
    std::string modelName;

    // details
    EVehicleFuel fuelType;
    EVehicleTransmission transmissionType;
    unsigned int engineHorsepower;
    unsigned int engineCapacityL;
    unsigned int doorQuantity;
    EWheelDrive wheelDriveType;
};

#endif // __VEHICLE_MODEL_H__