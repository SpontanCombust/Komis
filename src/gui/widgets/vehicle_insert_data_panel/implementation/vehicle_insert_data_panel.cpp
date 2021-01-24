#include "vehicle_insert_data_panel.hpp"

CVehicleInsertDataPanel::CVehicleInsertDataPanel(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name)
: IVehicleInsertDataPanel( parent, id, pos, size, style, name )
{

}

CVehicleInsertDataPanel::~CVehicleInsertDataPanel() 
{

}

void CVehicleInsertDataPanel::setVehicleTypeInTheChoice( EVehicleType vehicleType ) 
{
    m_choice_vehicleType->setVehicleType( vehicleType );
}

EVehicleType CVehicleInsertDataPanel::getVehicleTypeFromTheChoice() 
{
    return m_choice_vehicleType->getVehicleType();
}

void CVehicleInsertDataPanel::setVehicleBrandInTheTextCtrl( std::string vehicleBrand ) 
{
    m_textCtrl_brand->SetValue( vehicleBrand );
}

std::string CVehicleInsertDataPanel::getVehicleBrandFromTheTextCtrl() 
{
    return m_textCtrl_brand->GetValue().ToStdString();
}

void CVehicleInsertDataPanel::setVehicleModelInTheTextCtrl( std::string vehicleModel ) 
{
    m_textCtrl_model->SetValue( vehicleModel );
}

std::string CVehicleInsertDataPanel::getVehicleModelFromTheTextCtrl() 
{
    return m_textCtrl_model->GetValue().ToStdString();
}

void CVehicleInsertDataPanel::setVehicleFuelInTheChoice( EVehicleFuel vehicleFuel ) 
{
    m_choice_fuelType->setVehicleFuel( vehicleFuel );
}

EVehicleFuel CVehicleInsertDataPanel::getVehicleFuelFromTheChoice() 
{
    return m_choice_fuelType->getVehicleFuel();
}

void CVehicleInsertDataPanel::setVehicleTransmissionInTheChoice( EVehicleTransmission vehicleTransmission ) 
{
    m_choice_transmission->setVehicleTransmission( vehicleTransmission );
}

EVehicleTransmission CVehicleInsertDataPanel::getVehicleTransmissionFromTheChoice() 
{   
    return m_choice_transmission->getVehicleTransmission();
}

void CVehicleInsertDataPanel::setVehicleWheelDriveInTheChoice( EVehicleWheelDrive vehicleWheelDrive ) 
{
    m_choice_wheelDrive->setVehicleWheelDrive( vehicleWheelDrive );
}

EVehicleWheelDrive CVehicleInsertDataPanel::getVehicleWheelDriveFromTheChoice() 
{
    return m_choice_wheelDrive->getVehicleWheelDrive();
}

void CVehicleInsertDataPanel::setVehicleEngineCapacityInTheTextCtrl( unsigned int engineCapacity ) 
{
    m_textCtrl_engineCapacity->SetValue( std::to_string( engineCapacity ) );
}

unsigned int CVehicleInsertDataPanel::getVehicleEngineCapacityFromTheTextCtrl() 
{
    long tmp;
    m_textCtrl_engineCapacity->GetValue().ToLong( &tmp );
	return tmp;
}

void CVehicleInsertDataPanel::setVehicleEngineHorsepowerInTheTextCtrl( unsigned int engineHorsepower ) 
{
    m_textCtrl_engineHorsepower->SetValue( std::to_string( engineHorsepower ) );
}

unsigned int CVehicleInsertDataPanel::getVehicleEngineHorsepowerFromTheTextCtrl() 
{
    long tmp;
    m_textCtrl_engineHorsepower->GetValue().ToLong( &tmp );
	return tmp;
}

void CVehicleInsertDataPanel::setVehicleDoorQuantityInTheChoice( EVehicleDoorQuantity doorQuantity ) 
{
    m_choice_doorQuantity->setVehicleDoorQuantity( doorQuantity );
}

EVehicleDoorQuantity CVehicleInsertDataPanel::getVehicleDoorQuantityFromTheChoice() 
{
    return m_choice_doorQuantity->getVehicleDoorQuantity();
}

void CVehicleInsertDataPanel::setVehiclePriceInTheTextCtrl( float price ) 
{
    m_textCtrl_price->SetValue( std::to_string( price ) );
}

float CVehicleInsertDataPanel::getVehiclePriceFromTheTextCtrl() 
{
    double tmp;
    m_textCtrl_price->GetValue().ToDouble( &tmp );
    return (float)tmp;
}

void CVehicleInsertDataPanel::setVehicleMileageInTheTextCtrl( unsigned int mileage ) 
{
    m_textCtrl_mileage->SetValue( std::to_string( mileage ) );
}

unsigned int CVehicleInsertDataPanel::getVehicleMileageFromTheTextCtrl() 
{
    long tmp;
    m_textCtrl_mileage->GetValue().ToLong( &tmp );
	return tmp;
}

void CVehicleInsertDataPanel::setVehicleColorInTheTextCtrl( std::string color ) 
{
    m_textCtrl_color->SetValue( color );
}

std::string CVehicleInsertDataPanel::getVehicleColorFromTheTextCtrl() 
{
    return m_textCtrl_color->GetValue().ToStdString();
}

void CVehicleInsertDataPanel::setVehicleStateInTheTextCtrl( std::string state ) 
{
    m_textCtrl_state->SetValue( state );
}

std::string CVehicleInsertDataPanel::getVehicleStateFromTheTextCtrl() 
{
    return m_textCtrl_state->GetValue().ToStdString();
}

void CVehicleInsertDataPanel::setVehicleAdditionalInfoInTheTextCtrl( std::string additInfo ) 
{
    m_textCtrl_additInfo->SetValue( additInfo );
}

std::string CVehicleInsertDataPanel::getVehicleAdditionalInfoFromTheTextCtrl() 
{
    return m_textCtrl_additInfo->GetValue().ToStdString();
}
