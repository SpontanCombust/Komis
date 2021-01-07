#ifndef __VEHICLE_QUERYING_H__
#define __VEHICLE_QUERYING_H__

#include "vehicle_model.hpp"
#include "vehicle_copy.hpp"

#include <functional>

using VehicleModelComparator = std::function< bool( const SVehicleModel& ) >;

VehicleModelComparator getVehicleModelVehicleTypeComparator( EVehicleType vehicleType );
VehicleModelComparator getVehicleModelBrandNameComparator( std::string brandName );
VehicleModelComparator getVehicleModelModelNameComparator( std::string modelName );
VehicleModelComparator getVehicleModelFuelTypeComparator( EVehicleFuel fuelType );
VehicleModelComparator getVehicleModelTransmissionTypeComparator( EVehicleTransmission transmissionType );
VehicleModelComparator getVehicleModelEngineHorsePowerRangeComparator( unsigned int engineHorsepowerMin, unsigned int engineHorsepowerMax );
VehicleModelComparator getVehicleModelEngineCapacityRangeComparator( unsigned int engineCapacityMin, unsigned int engineCapacityMax );
VehicleModelComparator getVehicleModelDoorQuantityComparator( unsigned int doorQuantity );
VehicleModelComparator getVehicleModelWheelDriveTypeComparator( EWheelDrive wheelDriveType );


using VehicleCopyComparator = std::function< bool( const SVehicleCopy& ) >;

VehicleCopyComparator getVehicleCopyPriceRangeComparator( float priceMin, float priceMax );
VehicleCopyComparator getVehicleCopyMileageRangeComparator( unsigned int mileageMin, unsigned int mileageMax );
VehicleCopyComparator getVehicleCopyColorComparator( std::string color );
VehicleCopyComparator getVehicleCopyStateComparator( std::string state );

#endif // __VEHICLE_QUERYING_H__