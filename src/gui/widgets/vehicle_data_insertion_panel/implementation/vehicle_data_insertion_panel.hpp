#ifndef __VEHICLE_DATA_INSERTION_PANEL_H__
#define __VEHICLE_DATA_INSERTION_PANEL_H__

#include "../interface/i_vehicle_data_insertion_panel.h"
#include "database/vehicle.hpp"


class CVehicleDataInsertionPanel : public IVehicleDataInsertionPanel
{
public:
    CVehicleDataInsertionPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
    ~CVehicleDataInsertionPanel();

    void setVehicleTypeInTheChoice( EVehicleType vehicleType );
    EVehicleType getVehicleTypeFromTheChoice();

    void setVehicleBrandInTheTextCtrl( std::string vehicleBrand );
    std::string getVehicleBrandFromTheTextCtrl();

    void setVehicleModelInTheTextCtrl( std::string vehicleModel );
    std::string getVehicleModelFromTheTextCtrl();

    void setVehicleFuelInTheChoice( EVehicleFuel vehicleFuel );
    EVehicleFuel getVehicleFuelFromTheChoice();

    void setVehicleTransmissionInTheChoice( EVehicleTransmission vehicleTransmission );
    EVehicleTransmission getVehicleTransmissionFromTheChoice();

    void setVehicleWheelDriveInTheChoice( EVehicleWheelDrive vehicleWheelDrive );
    EVehicleWheelDrive getVehicleWheelDriveFromTheChoice();

    void setVehicleEngineCapacityInTheTextCtrl( unsigned int engineCapacity );
    unsigned int getVehicleEngineCapacityFromTheTextCtrl();

    void setVehicleEngineHorsepowerInTheTextCtrl( unsigned int engineHorsepower );
    unsigned int getVehicleEngineHorsepowerFromTheTextCtrl();

    void setVehicleDoorQuantityInTheChoice( EVehicleDoorQuantity doorQuantity );
    EVehicleDoorQuantity getVehicleDoorQuantityFromTheChoice();

    void setVehiclePriceInTheTextCtrl( float price );
    float getVehiclePriceFromTheTextCtrl();

    void setVehicleMileageInTheTextCtrl( unsigned int mileage );
    unsigned int getVehicleMileageFromTheTextCtrl();

    void setVehicleColorInTheTextCtrl( std::string color );
    std::string getVehicleColorFromTheTextCtrl();
    
    void setVehicleStateInTheTextCtrl( std::string state );
    std::string getVehicleStateFromTheTextCtrl();
    
    void setVehicleAdditionalInfoInTheTextCtrl( std::string additInfo );
    std::string getVehicleAdditionalInfoFromTheTextCtrl();
};

#endif // __VEHICLE_DATA_INSERTION_PANEL_H__