#ifndef __VEHICLE_QUERYING_H__
#define __VEHICLE_QUERYING_H__

#include "../vehicle.hpp"

#include <functional>

using VehicleComparator = std::function< bool( const SVehicle& ) >;

VehicleComparator getVehicleTypeEqualComparator( EVehicleType vehicleType );
VehicleComparator getVehicleBrandNameEqualComparator( std::string brandName );
VehicleComparator getVehicleModelNameEqualComparator( std::string modelName );

VehicleComparator getVehicleFuelTypeEqualComparator( EVehicleFuel fuelType );
VehicleComparator getVehicleTransmissionTypeEqualComparator( EVehicleTransmission transmissionType );
VehicleComparator getVehicleEngineHorsePowerRangeComparator( unsigned int engineHorsepowerMin, unsigned int engineHorsepowerMax );
VehicleComparator getVehicleEngineCapacityRangeComparator( unsigned int engineCapacityMin, unsigned int engineCapacityMax );
VehicleComparator getVehicleDoorQuantityEqualComparator( EVehicleDoorQuantity doorQuantity );
VehicleComparator getVehicleWheelDriveTypeEqualComparator( EVehicleWheelDrive wheelDriveType );

VehicleComparator getVehiclePriceRangeComparator( float priceMin, float priceMax );
VehicleComparator getVehicleMileageRangeComparator( unsigned int mileageMin, unsigned int mileageMax );
VehicleComparator getVehicleColorEqualComparator( std::string color );
VehicleComparator getVehicleStateEqualComparator( std::string state );

#endif // __VEHICLE_QUERYING_H__