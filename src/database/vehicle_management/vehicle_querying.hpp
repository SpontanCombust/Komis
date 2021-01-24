#ifndef __VEHICLE_QUERYING_H__
#define __VEHICLE_QUERYING_H__

#include "../vehicle.hpp"

#include <functional>
#include <vector>

using VehicleComparator = std::function< bool( const SVehicle& ) >;

VehicleComparator getVehicleTypeEqualComparator( EVehicleType vehicleType );
VehicleComparator getVehicleBrandNameEqualComparator( std::string brandName );
VehicleComparator getVehicleModelNameEqualComparator( std::string modelName );

VehicleComparator getVehicleFuelTypeEqualComparator( EVehicleFuel fuelType );
VehicleComparator getVehicleTransmissionTypeEqualComparator( EVehicleTransmission transmissionType );
VehicleComparator getVehicleEngineHorsePowerMinComparator( unsigned int engineHorsepowerMin );
VehicleComparator getVehicleEngineHorsePowerMaxComparator( unsigned int engineHorsepowerMax );
VehicleComparator getVehicleEngineCapacityMinComparator( unsigned int engineCapacityMin );
VehicleComparator getVehicleEngineCapacityMaxComparator( unsigned int engineCapacityMax );
VehicleComparator getVehicleDoorQuantityEqualComparator( EVehicleDoorQuantity doorQuantity );
VehicleComparator getVehicleWheelDriveTypeEqualComparator( EVehicleWheelDrive wheelDriveType );

VehicleComparator getVehiclePriceMinComparator( float priceMin );
VehicleComparator getVehiclePriceMaxComparator( float priceMax );
VehicleComparator getVehicleMileageMinComparator( unsigned int mileageMin );
VehicleComparator getVehicleMileageMaxComparator( unsigned int mileageMax );
VehicleComparator getVehicleColorContainComparator( std::string color );
VehicleComparator getVehicleStateContainComparator( std::string state );

namespace VehicleComparatorFlags
{
    const int EQUAL_TYPE                = 1 << 0;
    const int EQUAL_BRAND               = 1 << 1;
    const int EQUAL_MODEL               = 1 << 2;
    const int EQUAL_FUEL                = 1 << 3;
    const int EQUAL_TRANSMISSION        = 1 << 4;
    const int MIN_ENGINEHORSEPOWER      = 1 << 5;
    const int MAX_ENGINEHORSEPOWER      = 1 << 6;
    const int MIN_ENGINECAPACITY        = 1 << 7;
    const int MAX_ENGINECAPACITY        = 1 << 8;
    const int EQUAL_DOORQUANTITY        = 1 << 9;
    const int EQUAL_WHEELDRIVE          = 1 << 10;
    const int MIN_PRICE                 = 1 << 11;
    const int MAX_PRICE                 = 1 << 12;
    const int MIN_MILEAGE               = 1 << 13;
    const int MAX_MILEAGE               = 1 << 14;
    const int CONTAIN_COLOR             = 1 << 15;
    const int CONTAIN_STATE             = 1 << 16;
}

struct SVehicleComparatorDataBundle
{
    EVehicleType            vehicleType;
    std::string             brand;
    std::string             model;
    EVehicleFuel            fuel;
    EVehicleTransmission    transmission;
    unsigned int            engineHorsepowerMin;
    unsigned int            engineHorsepowerMax;
    unsigned int            engineCapacityMin;
    unsigned int            engineCapacityMax;
    EVehicleDoorQuantity    doorQuantity;
    EVehicleWheelDrive      wheelDrive;
    float                   priceMin;
    float                   priceMax;
    unsigned int            mileageMin;
    unsigned int            mileageMax;
    std::string             color;
    std::string             state;
};

std::vector< VehicleComparator > getVehicleComparatorsVectorFromDataBundle( const SVehicleComparatorDataBundle& dataBundle, const int& vehicleComparatorFlags );

#endif // __VEHICLE_QUERYING_H__