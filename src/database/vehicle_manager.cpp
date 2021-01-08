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

std::vector< uint32_t > CVehicleManager::getAllVehicleModelIDs() 
{
    std::vector< uint32_t > ids;

    if( m_vehicleModelMap.empty() )
        return ids;

    for( const auto& [ id, vehModel ] : m_vehicleModelMap )
    {
        ids.push_back( id );
    }

    return ids;
}

std::vector< uint32_t > CVehicleManager::queryVehicleModelIDs( const std::vector< VehicleModelComparator >& vehicleModelComparators ) 
{
    // if comparator list is empty there is nothing to check, thus all vehicle models are valid
    if( vehicleModelComparators.empty() )
        return getAllVehicleModelIDs();

    // vector for storing IDs of valid vehicle models
    std::vector< uint32_t > vehModelIDs;
    // variable to store the information, whether given vehicle model meets all the requirements
    bool isValidCandidate;

    // iterate over every ( id : vehicleModel ) pair in vehicle model map
    for( const auto& [ id, vehModel ] : m_vehicleModelMap )
    {
        // assume model is valid before passing it to comparators
        isValidCandidate = true;

        // check every comparator in the vector
        for( const auto& comparatorFunctor : vehicleModelComparators )
        {
            // check if a vehicle model fulfils comparator's requirements
            if( !comparatorFunctor( vehModel ) )
            {
                // if it doesn't, it means it should be filtered out
                isValidCandidate = false;
                break;
            }
        }

        // if a vehicle model met all the requirements, add it to ID vector to be later returned by the function
        if( isValidCandidate )
        {
            vehModelIDs.push_back( id );
        }
    }

    // return the ID vector of all valid candidates
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

std::vector< uint32_t > CVehicleManager::getAllVehicleCopyIDs() 
{
    std::vector< uint32_t > ids;

    if( m_vehicleCopyMap.empty() )
        return ids;

    for( const auto& [ id, vehCopy ] : m_vehicleCopyMap )
    {
        ids.push_back( id );
    }

    return ids;
}

std::vector< uint32_t > CVehicleManager::queryVehicleCopyIDs( const std::vector< VehicleCopyComparator >& vehicleCopyComparators )
{
    // if comparator list is empty there is nothing to check, thus all vehicle copies are valid
    if( vehicleCopyComparators.empty() )
        return getAllVehicleCopyIDs();

    // vector for storing IDs of valid vehicle copies
    std::vector< uint32_t > vehCopyIDs;
    // variable to store the information, whether given vehicle copy meets all the requirements
    bool isValidCandidate;

    // iterate over every ( id : vehicleCopy ) pair in vehicle copy map
    for( const auto& [ id, vehCopy ] : m_vehicleCopyMap )
    {
        // assume copy is valid before passing it to comparators
        isValidCandidate = true;

        // check every comparator in the vector
        for( const auto& comparatorFunctor : vehicleCopyComparators )
        {
            // check if a vehicle copy fulfils comparator's requirements
            if( !comparatorFunctor( vehCopy ) )
            {
                // if it doesn't, it means it should be filtered out
                isValidCandidate = false;
                break;
            }
        }

        // if a vehicle copy met all the requirements, add it to ID vector to be later returned by the function
        if( isValidCandidate )
        {
            vehCopyIDs.push_back( id );
        }
    }

    // return the ID vector of all valid candidates
    return vehCopyIDs;
}

std::vector< uint32_t > CVehicleManager::queryVehicleCopyIDs( const std::vector< VehicleModelComparator >& vehicleModelComparators, const std::vector< VehicleCopyComparator >& vehicleCopyComparators )
{
    // if there are no vehicle model comparators, return the result obtained only through vehicle copy query
    if( vehicleModelComparators.empty() )
        return queryVehicleCopyIDs( vehicleCopyComparators );

    // vector for storing IDs of valid vehicle models
    std::vector< uint32_t > vehModelIDs;
    // vector for storing IDs of filtered out valid vehicle copies
    std::vector< uint32_t > vehCopyIDs;
    // variable to store the information, whether given vehicle copy meets all the requirements
    bool isValidCandidate;

    // get the vector of vehicle model IDs from querying
    vehModelIDs = queryVehicleModelIDs( vehicleModelComparators );

    // iterate over every ( id : vehicleCopy ) pair in vehicle copy map
    for( const auto& [ copyID, vehCopy ] : m_vehicleCopyMap )
    {
        // assume copy is valid before any of the checks
        isValidCandidate = true;

        // find if the model ID of current vehicle copy is inside the vector of queried vehicle model IDs
        auto it = std::find( vehModelIDs.begin(), vehModelIDs.end(), vehCopy.vehicleModelID );
        // if it is then check the rest of vehicle copy requirements from vehicleCopyComparators
        if( it != vehModelIDs.end() )
        {
            // if there are no vehicle copy comparators, then this vehicle copy is already eligible, otherwise it has to be further checked
            if( !vehicleCopyComparators.empty() )
            {
                // iterate over every vehicle copy comparator
                for( const auto& comparatorFunctor : vehicleCopyComparators )
                {
                    // check if a vehicle copy fulfils comparator's requirements
                    if( !comparatorFunctor( vehCopy ) )
                    {
                        // if it doesn't, it means it should be filtered out
                        isValidCandidate = false;
                        break;
                    }
                }
            }
        }
        // otherwise this vehicle copy is not eligible
        else
        {
            isValidCandidate = false;
        }
        
        // if a vehicle copy met all the requirements, add it to ID vector to be later returned by the function
        if( isValidCandidate )
        {
            vehCopyIDs.push_back( copyID );
        }
    }

    // return the ID vector of all valid candidates
    return vehCopyIDs;
}
