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

VehicleComparator getVehicleEngineHorsePowerMinComparator( unsigned int engineHorsepowerMin ) 
{
    return [=]( const SVehicle& vehicle ) -> bool { return vehicle.technicalData.engineHorsepower >= engineHorsepowerMin; };
}

VehicleComparator getVehicleEngineHorsePowerMaxComparator( unsigned int engineHorsepowerMax) 
{
    return [=]( const SVehicle& vehicle ) -> bool { return vehicle.technicalData.engineHorsepower <= engineHorsepowerMax; };
}

VehicleComparator getVehicleEngineCapacityMinComparator( unsigned int engineCapacityMin ) 
{
    return [=]( const SVehicle& vehicle ) -> bool { return vehicle.technicalData.engineCapacityL >= engineCapacityMin; };
}

VehicleComparator getVehicleEngineCapacityMaxComparator( unsigned int engineCapacityMax ) 
{
    return [=]( const SVehicle& vehicle ) -> bool { return vehicle.technicalData.engineCapacityL <= engineCapacityMax; };
}

VehicleComparator getVehicleDoorQuantityEqualComparator( EVehicleDoorQuantity doorQuantity ) 
{   
    return [=]( const SVehicle& vehicle ) -> bool { return vehicle.technicalData.doorQuantity == doorQuantity; };
}

VehicleComparator getVehicleWheelDriveTypeEqualComparator( EVehicleWheelDrive wheelDriveType ) 
{
    return [=]( const SVehicle& vehicle ) -> bool { return vehicle.technicalData.wheelDriveType == wheelDriveType; };
}




VehicleComparator getVehiclePriceMinComparator( float priceMin ) 
{
    return [=]( const SVehicle& vehicle ) -> bool { return vehicle.specimenData.price >= priceMin; };
}

VehicleComparator getVehiclePriceMaxComparator( float priceMax ) 
{
    return [=]( const SVehicle& vehicle ) -> bool { return vehicle.specimenData.price <= priceMax; };
}

VehicleComparator getVehicleMileageMinComparator( unsigned int mileageMin ) 
{
    return [=]( const SVehicle& vehicle ) -> bool { return vehicle.specimenData.mileageKm >= mileageMin; };
}

VehicleComparator getVehicleMileageMaxComparator( unsigned int mileageMax ) 
{
    return [=]( const SVehicle& vehicle ) -> bool { return vehicle.specimenData.mileageKm <= mileageMax; };
}

VehicleComparator getVehicleColorContainComparator( std::string color ) 
{
    return [=]( const SVehicle& vehicle ) -> bool 
    { 
        size_t found = vehicle.specimenData.color.find( color );
        return found != std::string::npos; 
    };
}

VehicleComparator getVehicleStateContainComparator( std::string state ) 
{
    return [=]( const SVehicle& vehicle ) -> bool 
    { 
        size_t found = vehicle.specimenData.state.find( state );
        return found != std::string::npos; 
    };
}




std::vector< VehicleComparator > getVehicleComparatorsVectorFromDataBundle( const SVehicleComparatorDataBundle& dataBundle, const int& vehicleComparatorFlags )
{
    std::vector< VehicleComparator > comparators;

    if( vehicleComparatorFlags & VehicleComparatorFlags::EQUAL_TYPE )
    {
        comparators.push_back( getVehicleTypeEqualComparator( dataBundle.vehicleType ) );
    }
    if( vehicleComparatorFlags & VehicleComparatorFlags::EQUAL_BRAND )
    {
        comparators.push_back( getVehicleBrandNameEqualComparator( dataBundle.brand ) );
    }
    if( vehicleComparatorFlags & VehicleComparatorFlags::EQUAL_MODEL )
    {
        comparators.push_back( getVehicleModelNameEqualComparator( dataBundle.model) );
    }
    if( vehicleComparatorFlags & VehicleComparatorFlags::EQUAL_FUEL )
    {
        comparators.push_back( getVehicleFuelTypeEqualComparator( dataBundle.fuel ) );
    }
    if( vehicleComparatorFlags & VehicleComparatorFlags::EQUAL_TRANSMISSION )
    {
        comparators.push_back( getVehicleTransmissionTypeEqualComparator( dataBundle.transmission ) );
    }
    if( vehicleComparatorFlags & VehicleComparatorFlags::MIN_ENGINEHORSEPOWER )
    {
        comparators.push_back( getVehicleEngineHorsePowerMinComparator( dataBundle.engineHorsepowerMin ) );
    }
    if( vehicleComparatorFlags & VehicleComparatorFlags::MAX_ENGINEHORSEPOWER )
    {
        comparators.push_back( getVehicleEngineHorsePowerMaxComparator( dataBundle.engineHorsepowerMax ) );
    }
    if( vehicleComparatorFlags & VehicleComparatorFlags::MIN_ENGINECAPACITY )
    {
        comparators.push_back( getVehicleEngineCapacityMinComparator( dataBundle.engineCapacityMin ) );
    }
    if( vehicleComparatorFlags & VehicleComparatorFlags::MAX_ENGINECAPACITY )
    {
        comparators.push_back( getVehicleEngineCapacityMaxComparator( dataBundle.engineCapacityMax ) );
    }
    if( vehicleComparatorFlags & VehicleComparatorFlags::EQUAL_WHEELDRIVE )
    {
        comparators.push_back( getVehicleWheelDriveTypeEqualComparator( dataBundle.wheelDrive ) );
    }
    if( vehicleComparatorFlags & VehicleComparatorFlags::EQUAL_DOORQUANTITY )
    {
        comparators.push_back( getVehicleDoorQuantityEqualComparator( dataBundle.doorQuantity) );
    }
    if( vehicleComparatorFlags & VehicleComparatorFlags::MIN_PRICE )
    {
        comparators.push_back( getVehiclePriceMinComparator( dataBundle.priceMin ) );
    }
    if( vehicleComparatorFlags & VehicleComparatorFlags::MAX_PRICE )
    {
        comparators.push_back( getVehiclePriceMaxComparator( dataBundle.priceMax ) );
    }
    if( vehicleComparatorFlags & VehicleComparatorFlags::MIN_MILEAGE )
    {
        comparators.push_back( getVehicleMileageMinComparator( dataBundle.mileageMin ) );
    }
    if( vehicleComparatorFlags & VehicleComparatorFlags::MAX_MILEAGE )
    {
        comparators.push_back( getVehicleMileageMaxComparator( dataBundle.mileageMax ) );
    }
    if( vehicleComparatorFlags & VehicleComparatorFlags::CONTAIN_COLOR )
    {
        comparators.push_back( getVehicleColorContainComparator( dataBundle.color) );
    }
    if( vehicleComparatorFlags & VehicleComparatorFlags::CONTAIN_STATE )
    {
        comparators.push_back( getVehicleStateContainComparator( dataBundle.state ) );
    }    

    return comparators;
}
