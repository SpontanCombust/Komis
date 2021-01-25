#include "vehicle_data_insertion_panel.hpp"

CVehicleDataInsertionPanel::CVehicleDataInsertionPanel(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name)
: IVehicleDataInsertionPanel( parent, id, pos, size, style, name )
{

}

CVehicleDataInsertionPanel::~CVehicleDataInsertionPanel() 
{

}

void CVehicleDataInsertionPanel::setVehicleTypeInTheChoice( EVehicleType vehicleType ) 
{
    m_choice_vehicleType->setVehicleType( vehicleType );
}

EVehicleType CVehicleDataInsertionPanel::getVehicleTypeFromTheChoice() 
{
    return m_choice_vehicleType->getVehicleType();
}

void CVehicleDataInsertionPanel::setVehicleBrandInTheTextCtrl( std::string vehicleBrand ) 
{
    m_textCtrl_brand->SetValue( vehicleBrand );
}

std::string CVehicleDataInsertionPanel::getVehicleBrandFromTheTextCtrl() 
{
    return m_textCtrl_brand->GetValue().ToStdString();
}

void CVehicleDataInsertionPanel::setVehicleModelInTheTextCtrl( std::string vehicleModel ) 
{
    m_textCtrl_model->SetValue( vehicleModel );
}

std::string CVehicleDataInsertionPanel::getVehicleModelFromTheTextCtrl() 
{
    return m_textCtrl_model->GetValue().ToStdString();
}

void CVehicleDataInsertionPanel::setVehicleFuelInTheChoice( EVehicleFuel vehicleFuel ) 
{
    m_choice_fuelType->setVehicleFuel( vehicleFuel );
}

EVehicleFuel CVehicleDataInsertionPanel::getVehicleFuelFromTheChoice() 
{
    return m_choice_fuelType->getVehicleFuel();
}

void CVehicleDataInsertionPanel::setVehicleTransmissionInTheChoice( EVehicleTransmission vehicleTransmission ) 
{
    m_choice_transmission->setVehicleTransmission( vehicleTransmission );
}

EVehicleTransmission CVehicleDataInsertionPanel::getVehicleTransmissionFromTheChoice() 
{   
    return m_choice_transmission->getVehicleTransmission();
}

void CVehicleDataInsertionPanel::setVehicleWheelDriveInTheChoice( EVehicleWheelDrive vehicleWheelDrive ) 
{
    m_choice_wheelDrive->setVehicleWheelDrive( vehicleWheelDrive );
}

EVehicleWheelDrive CVehicleDataInsertionPanel::getVehicleWheelDriveFromTheChoice() 
{
    return m_choice_wheelDrive->getVehicleWheelDrive();
}

void CVehicleDataInsertionPanel::setVehicleEngineCapacityInTheTextCtrl( unsigned int engineCapacity ) 
{
    m_textCtrl_engineCapacity->SetValue( std::to_string( engineCapacity ) );
}

unsigned int CVehicleDataInsertionPanel::getVehicleEngineCapacityFromTheTextCtrl() 
{
    long tmp;
    m_textCtrl_engineCapacity->GetValue().ToLong( &tmp );
	return tmp;
}

void CVehicleDataInsertionPanel::setVehicleEngineHorsepowerInTheTextCtrl( unsigned int engineHorsepower ) 
{
    m_textCtrl_engineHorsepower->SetValue( std::to_string( engineHorsepower ) );
}

unsigned int CVehicleDataInsertionPanel::getVehicleEngineHorsepowerFromTheTextCtrl() 
{
    long tmp;
    m_textCtrl_engineHorsepower->GetValue().ToLong( &tmp );
	return tmp;
}

void CVehicleDataInsertionPanel::setVehicleDoorQuantityInTheChoice( EVehicleDoorQuantity doorQuantity ) 
{
    m_choice_doorQuantity->setVehicleDoorQuantity( doorQuantity );
}

EVehicleDoorQuantity CVehicleDataInsertionPanel::getVehicleDoorQuantityFromTheChoice() 
{
    return m_choice_doorQuantity->getVehicleDoorQuantity();
}

void CVehicleDataInsertionPanel::setVehiclePriceInTheTextCtrl( float price ) 
{
    m_textCtrl_price->SetValue( std::to_string( price ) );
}

float CVehicleDataInsertionPanel::getVehiclePriceFromTheTextCtrl() 
{
    double tmp;
    m_textCtrl_price->GetValue().ToDouble( &tmp );
    return (float)tmp;
}

void CVehicleDataInsertionPanel::setVehicleMileageInTheTextCtrl( unsigned int mileage ) 
{
    m_textCtrl_mileage->SetValue( std::to_string( mileage ) );
}

unsigned int CVehicleDataInsertionPanel::getVehicleMileageFromTheTextCtrl() 
{
    long tmp;
    m_textCtrl_mileage->GetValue().ToLong( &tmp );
	return tmp;
}

void CVehicleDataInsertionPanel::setVehicleColorInTheTextCtrl( std::string color ) 
{
    m_textCtrl_color->SetValue( color );
}

std::string CVehicleDataInsertionPanel::getVehicleColorFromTheTextCtrl() 
{
    return m_textCtrl_color->GetValue().ToStdString();
}

void CVehicleDataInsertionPanel::setVehicleStateInTheTextCtrl( std::string state ) 
{
    m_textCtrl_state->SetValue( state );
}

std::string CVehicleDataInsertionPanel::getVehicleStateFromTheTextCtrl() 
{
    return m_textCtrl_state->GetValue().ToStdString();
}

void CVehicleDataInsertionPanel::setVehicleAdditionalInfoInTheTextCtrl( std::string additInfo ) 
{
    m_textCtrl_additInfo->SetValue( additInfo );
}

std::string CVehicleDataInsertionPanel::getVehicleAdditionalInfoFromTheTextCtrl() 
{
    return m_textCtrl_additInfo->GetValue().ToStdString();
}
