#include "vehicle_querying.hpp"

VehicleModelComparator getVehicleModelTypeComparator( EVehicleType vehicleType )
{
    return [=]( const SVehicleModel& vehicle ) -> bool { return vehicle.vehicleType == vehicleType; };
}

VehicleModelComparator getVehicleModelBrandNameComparator( std::string brandName ) 
{
    return [=]( const SVehicleModel& vehicle ) -> bool { return vehicle.brandName == brandName; };
}

VehicleModelComparator getVehicleModelModelNameComparator( std::string modelName ) 
{
    return [=]( const SVehicleModel& vehicle ) -> bool { return vehicle.modelName == modelName; };
}

VehicleModelComparator getVehicleModelFuelTypeComparator( EVehicleFuel fuelType ) 
{
    return [=]( const SVehicleModel& vehicle ) -> bool { return vehicle.fuelType == fuelType; };
}

VehicleModelComparator getVehicleModelTransmissionTypeComparator( EVehicleTransmission transmissionType ) 
{
    return [=]( const SVehicleModel& vehicle ) -> bool { return vehicle.transmissionType == transmissionType; };
}

VehicleModelComparator getVehicleModelEngineHorsePowerRangeComparator( unsigned int engineHorsepowerMin, unsigned int engineHorsepowerMax ) 
{
    return [=]( const SVehicleModel& vehicle ) -> bool { return vehicle.engineHorsepower >= engineHorsepowerMin && vehicle.engineHorsepower <= engineHorsepowerMax; };
}

VehicleModelComparator getVehicleModelEngineCapacityRangeComparator( unsigned int engineCapacityMin, unsigned int engineCapacityMax ) 
{
    return [=]( const SVehicleModel& vehicle ) -> bool { return vehicle.engineCapacityL >= engineCapacityMin && vehicle.engineCapacityL <= engineCapacityMax; };
}

VehicleModelComparator getVehicleModelDoorQuantityComparator( unsigned int doorQuantity ) 
{
    return [=]( const SVehicleModel& vehicle ) -> bool { return vehicle.doorQuantity == doorQuantity; };
}

VehicleModelComparator getVehicleModelWheelDriveTypeComparator( EWheelDrive wheelDriveType ) 
{
    return [=]( const SVehicleModel& vehicle ) -> bool { return vehicle.wheelDriveType == wheelDriveType; };
}




VehicleCopyComparator getVehicleCopyPriceRangeComparator( float priceMin, float priceMax ) 
{
    return [=]( const SVehicleCopy& vehicle ) -> bool { return vehicle.price >= priceMin && vehicle.price <= priceMax; };
}

VehicleCopyComparator getVehicleCopyMileageRangeComparator( unsigned int mileageMin, unsigned int mileageMax ) 
{
    return [=]( const SVehicleCopy& vehicle ) -> bool { return vehicle.mileageKm >= mileageMin && vehicle.mileageKm <= mileageMax; };
}

VehicleCopyComparator getVehicleCopyColorComparator( std::string color ) 
{
    return [=]( const SVehicleCopy& vehicle ) -> bool { return vehicle.color == color; };
}

VehicleCopyComparator getVehicleCopyStateComparator( std::string state ) 
{
    return [=]( const SVehicleCopy& vehicle ) -> bool { return vehicle.state == state; };
}
