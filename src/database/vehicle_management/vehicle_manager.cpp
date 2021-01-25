#include "vehicle_manager.hpp"

#include <iostream>

CVehicleManager::CVehicleManager() 
{
    m_idAccumulator = 0;
}

CVehicleManager::CVehicleManager( uint32_t idAccumulatorInitializer ) 
{
    m_idAccumulator = idAccumulatorInitializer;
}




uint32_t CVehicleManager::addVehicle( SVehicleBasicData basicData, SVehicleTechnicalData technicalData, SVehicleSpecimenData specimenData ) 
{
    m_idAccumulator++;

    SVehicle vehicle( m_idAccumulator );

    vehicle.basicData = basicData;
    vehicle.technicalData = technicalData;
    vehicle.specimenData = specimenData;

    m_vehicleMap[ m_idAccumulator ] = vehicle;

    return m_idAccumulator;
}

SVehicle& CVehicleManager::getVehicleByID( uint32_t id ) 
{
    if(  m_vehicleMap.find( id ) != m_vehicleMap.end() )
        return m_vehicleMap[ id ];
    else
        throw "No vehicle with that ID found!";        
}

SVehicle* CVehicleManager::getVehicleHandleByID( uint32_t id ) 
{
    if(  m_vehicleMap.find( id ) != m_vehicleMap.end() )
        return &m_vehicleMap[ id ];
    else
        return nullptr;
}

void CVehicleManager::removeVehicleByID(uint32_t id) 
{
    if(  m_vehicleMap.find( id ) != m_vehicleMap.end() )
        m_vehicleMap.erase( id );
    else
        throw "No vehicle with that ID found!";
}

void CVehicleManager::removeAllVehicles() 
{
    m_vehicleMap.clear();
}



std::vector< uint32_t > CVehicleManager::getAllVehicleIDs() 
{
    std::vector< uint32_t > ids;

    // if there are no vehicles return an empty vector
    if( m_vehicleMap.empty() )
        return ids;

    for( const auto& [ id, vehicle ] : m_vehicleMap )
    {
        ids.push_back( id );
    }

    return ids;
}



std::vector< uint32_t > CVehicleManager::queryVehicleIDs( const std::vector< VehicleComparator >& vehicleComparators ) 
{
    // if comparator vector is empty there is nothing to check, thus all vehicles are valid
    if( vehicleComparators.empty() )
        return getAllVehicleIDs();

    // vector for storing IDs of valid vehicles
    std::vector< uint32_t > vehicleIDs;
    // variable to store the information, whether given vehicle meets all the requirements
    bool isValidCandidate;

    // iterate over every ( id : vehicle ) pair in vehicle form map
    for( const auto& [ id, vehicle ] : m_vehicleMap )
    {
        // assume vehicle is valid before passing it to comparators
        isValidCandidate = true;

        // check every comparator in the vector
        for( const auto& comparatorFunctor : vehicleComparators )
        {
            // check if a vehicle fulfils comparator's requirements
            if( !comparatorFunctor( vehicle ) )
            {
                // if it doesn't, it means it should be filtered out
                isValidCandidate = false;
                break;
            }
        }

        // if a vehicle met all the requirements, add it to ID vector to be later returned by the function
        if( isValidCandidate )
        {
            vehicleIDs.push_back( id );
        }
    }

    // return the ID vector of all valid candidates
    return vehicleIDs;
}




uint32_t CVehicleManager::addVehicleTemplate( std::string templateName, SVehicleBasicData basicData, SVehicleTechnicalData technicalData ) 
{
    m_idAccumulator++;

    SVehicleTemplate vehicleTemplate( m_idAccumulator );

    vehicleTemplate.templateName = templateName;
    vehicleTemplate.basicData = basicData;
    vehicleTemplate.technicalData = technicalData;

    m_vehicleTemplateMap[ m_idAccumulator ] = vehicleTemplate;

    return m_idAccumulator;
}

SVehicleTemplate& CVehicleManager::getVehicleTemplateByID( uint32_t id ) 
{
    if(  m_vehicleTemplateMap.find( id ) != m_vehicleTemplateMap.end() )
        return m_vehicleTemplateMap[ id ];
    else
        throw "No vehicle template with that ID found!";   
}

void CVehicleManager::removeVehicleTemplateByID( uint32_t id ) 
{
    if(  m_vehicleTemplateMap.find( id ) != m_vehicleTemplateMap.end() )
        m_vehicleTemplateMap.erase( id );
    else
        throw "No vehicle copy with that ID found!";
}




std::vector< uint32_t > CVehicleManager::getAllVehicleTemplateIDs() 
{
    std::vector< uint32_t > ids;

    // if there are no vehicle templates return an empty vector
    if( m_vehicleTemplateMap.empty() )
        return ids;

    for( const auto& [ id, vehicleTemplate ] : m_vehicleTemplateMap )
    {
        ids.push_back( id );
    }

    return ids;
}
