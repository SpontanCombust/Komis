#include "vehicle_serializer.hpp"

bool writeVehiclesToFile( const char *path, std::vector< SVehicle* > vehicleHandles, bool shouldWhipeFile ) 
{
    std::ofstream output;

    if( shouldWhipeFile )
    {
        output.open( path, std::ios::out | std::ios::trunc );
        output << KOMIS_WATERMARK_VEHICLE << '\n';
    }
    else
    {
        output.open( path, std::ios::out | std::ios::app );
    }

    if( !output )
    {
        return false;
    }

    for( SVehicle *handle : vehicleHandles )
    {
        output << handle->basicData;
        output << handle->technicalData;
        output << handle->specimenData;
    }

    output.close();
    return true;
}

bool readVehiclesFromFile( const char *path, std::vector< SVehicle > *vehicleVecPtr ) 
{
    std::ifstream input;
    std::string fileWatermark;
    SVehicle readVehicle;

    input.open( path, std::ios::in );
    if( !input )
    {
        return false;
    }

    vehicleVecPtr->clear();

    input >> fileWatermark;
    if( fileWatermark != KOMIS_WATERMARK_VEHICLE )
    {
        input.close();
        return false;
    }

    while( !input.eof() )
    {
        input >> readVehicle.basicData;
        input >> readVehicle.technicalData;
        input >> readVehicle.specimenData;

        vehicleVecPtr->push_back( readVehicle );
    }

    input.close();
    return true;
}
