#ifndef __VEHICLE_MANAGER_H__
#define __VEHICLE_MANAGER_H__

#include "vehicle_model.hpp"
#include "vehicle_copy.hpp"
#include "vehicle_querying.hpp"

#include <unordered_map>
#include <vector>

class CVehicleManager
{
private:
    // accumulator of ID numbers that are given to vehicle models and copies
    uint32_t m_idAccumulator;

    // map of IDs to vehicle models
    std::unordered_map< uint32_t, SVehicleModel > m_vehicleModelMap;
    // map of IDs to vehicle copies
    std::unordered_map< uint32_t, SVehicleCopy > m_vehicleCopyMap;

public:
    CVehicleManager();

    // gives vehicle model an ID and adds it to the vehicle map
    void addVehicleModel( SVehicleModel vehicleModel );
    // returns a vehicle model with that id, throws an exception when doesn't find one
    SVehicleModel& getVehicleModelByID( uint32_t id );

    /* Filters through vehicle models and returns a vector of IDs of those, which meet the requirements
     * Requirements are the comparators stored in vehicleModelComparators vector
     * Vehicle models are picked based on logical product of all those comparators results
    */
    std::vector< uint32_t > queryVehicleModelIDs( std::vector< VehicleModelComparator > vehicleModelComparators );

    // gives vehicle copy an ID and adds it to the vehicle map
    void addVehicleCopy( SVehicleCopy vehicle );
    // returns a vehicle model with that id, throws an exception when doesn't find one
    SVehicleCopy& getVehicleCopyByID( uint32_t id );
    // removes a vehicle model with that id, throws an exception when doesn't find one
    void removeVehicleCopyByID( uint32_t id );

    /* Filters through vehicle copies and returns a vector of IDs of those, which meet the requirements
     * Requirements are the comparators stored in vehicleCopyComparators vector
     * Vehicle models are picked based on logical product of all those comparators results
    */
    std::vector< uint32_t > queryVehicleCopyIDs( std::vector< VehicleCopyComparator > vehicleCopyComparators );
};



#endif // __VEHICLE_MANAGER_H__