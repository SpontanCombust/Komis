#ifndef __VEHICLE_MANAGER_H__
#define __VEHICLE_MANAGER_H__

#include "../vehicle.hpp"
#include "../vehicle_template.hpp"
#include "vehicle_querying.hpp"

#include <unordered_map>
#include <vector>

class CVehicleManager
{
private:
    // accumulator of ID numbers that are given to vehicles and vehicle templates
    uint32_t m_idAccumulator;

    // map of IDs to vehicle templates
    std::unordered_map< uint32_t, SVehicleTemplate > m_vehicleTemplateMap;
    // map of IDs to vehicles
    std::unordered_map< uint32_t, SVehicle > m_vehicleMap;

public:
    CVehicleManager();
    CVehicleManager( uint32_t idAccumulatorInitializer );

    // creates a vehicle based on given data and assigns it an ID, returns that ID
    uint32_t addVehicle( SVehicleBasicData basicData, SVehicleTechnicalData technicalData, SVehicleSpecimenData specimenData );
    // returns a vehicle with that id, throws an exception when doesn't find one
    SVehicle& getVehicleByID( uint32_t id );
    // returns a vehicle handle (pointer) with that id, returns null
    SVehicle* getVehicleHandleByID( uint32_t id );
    // removes a vehicle with that id, throws an exception when doesn't find one
    void removeVehicleByID( uint32_t id );

    // returns a vector of IDs of all available vehicles
    std::vector< uint32_t > getAllVehicleIDs();

    /* Filters through vehicles and returns a vector of IDs of those, which meet the requirements
     * Requirements are the comparators stored in vehicleComparators vector
     * Vehicles are picked based on logical product of all those comparators results
    */
    std::vector< uint32_t > queryVehicleIDs( const std::vector< VehicleComparator >& vehicleComparators );


    // creates a vehicle template based on given data and assigns it an ID
    uint32_t addVehicleTemplate( std::string templateName, SVehicleBasicData basicData, SVehicleTechnicalData technicalData );
    // returns a vehicle template with that id, throws an exception when doesn't find one
    SVehicleTemplate& getVehicleTemplateByID( uint32_t id );
    // removes a vehicle template with that id, throws an exception when doesn't find one
    void removeVehicleTemplateByID( uint32_t id );

    // returns a vector of IDs of all availabel vehicle templates
    std::vector< uint32_t > getAllVehicleTemplateIDs();
};



#endif // __VEHICLE_MANAGER_H__