#include "vehicle_querying.hpp"


VehicleComparator getVehicleTypeEqualComparator( EVehicleType vehicleType ) 
{
    return [=]( const SVehicle& vehicle ) -> bool { return vehicle.basicData.vehicleType == vehicleType; };
}

VehicleComparator getVehicleBrandNameEqualComparator( std::string brandName ) 
{
    return [=]( const SVehicle& vehicle ) -> bool { return vehicle.basicData.brandName == brandName; };
}

VehicleComparator getVehicleModelNameEqualComparator( std::string modelName ) 
{
    return [=]( const SVehicle& vehicle ) -> bool { return vehicle.basicData.modelName == modelName; };
}




VehicleComparator getVehicleFuelTypeEqualComparator( EVehicleFuel fuelType ) 
{
    return [=]( const SVehicle& vehicle ) -> bool { return vehicle.technicalData.fuelType == fuelType; };
}

VehicleComparator getVehicleTransmissionTypeEqualComparator( EVehicleTransmission transmissionType)  
{
    return [=]( const SVehicle& vehicle ) -> bool { return vehicle.technicalData.transmissionType == transmissionType; };
}

VehicleComparator getVehicleEngineHorsePowerRangeComparator( unsigned int engineHorsepowerMin, unsigned int engineHorsepowerMax) 
{
    return [=]( const SVehicle& vehicle ) -> bool { return vehicle.technicalData.engineHorsepower >= engineHorsepowerMin && vehicle.technicalData.engineHorsepower <= engineHorsepowerMax; };
}

VehicleComparator getVehicleEngineCapacityRangeComparator( unsigned int engineCapacityMin, unsigned int engineCapacityMax ) 
{
    return [=]( const SVehicle& vehicle ) -> bool { return vehicle.technicalData.engineCapacityL >= engineCapacityMin && vehicle.technicalData.engineCapacityL <= engineCapacityMax; };
}

VehicleComparator getVehicleDoorQuantityEqualComparator( unsigned int doorQuantity ) 
{   
    return [=]( const SVehicle& vehicle ) -> bool { return vehicle.technicalData.doorQuantity == doorQuantity; };
}

VehicleComparator getVehicleWheelDriveTypeEqualComparator( EWheelDrive wheelDriveType ) 
{
    return [=]( const SVehicle& vehicle ) -> bool { return vehicle.technicalData.wheelDriveType == wheelDriveType; };
}




VehicleComparator getVehiclePriceRangeComparator( float priceMin, float priceMax ) 
{
    return [=]( const SVehicle& vehicle ) -> bool { return vehicle.specimenData.price >= priceMin && vehicle.specimenData.price <= priceMax; };
}

VehicleComparator getVehicleMileageRangeComparator( unsigned int mileageMin, unsigned int mileageMax ) 
{
    return [=]( const SVehicle& vehicle ) -> bool { return vehicle.specimenData.mileageKm >= mileageMin && vehicle.specimenData.mileageKm <= mileageMax; };
}

VehicleComparator getVehicleColorEqualComparator( std::string color ) 
{
    return [=]( const SVehicle& vehicle ) -> bool { return vehicle.specimenData.color == color; };
}

VehicleComparator getVehicleStateEqualComparator( std::string state ) 
{
    return [=]( const SVehicle& vehicle ) -> bool { return vehicle.specimenData.state == state; };
}
