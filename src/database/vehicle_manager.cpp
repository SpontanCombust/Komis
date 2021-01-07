#include "vehicle_manager.hpp"

#include <iostream>

CVehicleManager::CVehicleManager() 
{
    m_idAccumulator = 1;
}



void CVehicleManager::addVehicleModel( SVehicleModel vehicleModel ) 
{
    vehicleModel.id = m_idAccumulator;
    m_vehicleModelMap[ m_idAccumulator ] = vehicleModel;
    m_idAccumulator++;
}

SVehicleModel& CVehicleManager::getVehicleModelByID( uint32_t id ) 
{
    if(  m_vehicleModelMap.find( id ) != m_vehicleModelMap.end() )
        return m_vehicleModelMap[ id ];
    else
        throw "No vehicle model with that ID found!";        
}



std::vector< uint32_t > CVehicleManager::queryVehicleModelIDs( std::vector< VehicleModelComparator > vehicleModelComparators ) 
{
    std::vector< uint32_t > vehModelIDs;

    for( const auto& [ id, vehModel ] : m_vehicleModelMap )
    {
        for( const auto& comparatorFunctor : vehicleModelComparators )
        {
            if( comparatorFunctor( vehModel ) )
            {
                vehModelIDs.push_back( id );
            }
        }
    }

    return vehModelIDs;
}



void CVehicleManager::addVehicleCopy( SVehicleCopy vehicle ) 
{
    vehicle.id = m_idAccumulator;
    m_vehicleCopyMap[ m_idAccumulator ] = vehicle;
    m_idAccumulator++;
}

SVehicleCopy& CVehicleManager::getVehicleCopyByID( uint32_t id ) 
{
    if(  m_vehicleCopyMap.find( id ) != m_vehicleCopyMap.end() )
        return m_vehicleCopyMap[ id ];
    else
        throw "No vehicle copy with that ID found!";
}

void CVehicleManager::removeVehicleCopyByID( uint32_t id ) 
{
    if(  m_vehicleCopyMap.find( id ) != m_vehicleCopyMap.end() )
        m_vehicleCopyMap.erase( id );
    else
        throw "No vehicle copy with that ID found!";
}



std::vector< uint32_t > CVehicleManager::queryVehicleCopyIDs( std::vector< VehicleCopyComparator > vehicleCopyComparators )
{
    std::vector< uint32_t > vehCopyIDs;

    for( const auto& [ id, vehCopy ] : m_vehicleCopyMap )
    {
        for( const auto& comparatorFunctor : vehicleCopyComparators )
        {
            if( comparatorFunctor( vehCopy ) )
            {
                vehCopyIDs.push_back( id );
            }
        }
    }

    return vehCopyIDs;
}
