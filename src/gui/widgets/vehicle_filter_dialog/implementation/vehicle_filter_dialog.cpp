#include "vehicle_filter_dialog.h"

CVehicleFilterDialog::CVehicleFilterDialog(wxWindow* parent, SVehicleComparatorDataBundle *vehicleComparatorDataBundle, int *vehicleComparatorFlagsPtr) : IVehicleFilterDialog(parent)
{
	m_comparatorDataBundle = vehicleComparatorDataBundle;
	m_vehicleComparatorFlags = vehicleComparatorFlagsPtr;

	if( *m_vehicleComparatorFlags & VehicleComparatorFlags::EQUAL_TYPE )
    {
		m_checkBox_vehicleType->SetValue( true );
        m_choice_vehicleType->setVehicleType( m_comparatorDataBundle->vehicleType );
    }
	else
	{
		m_choice_vehicleType->Disable();
	}

    if( *m_vehicleComparatorFlags & VehicleComparatorFlags::EQUAL_BRAND )
    {
		m_checkBox_brand->SetValue( true );
        m_textCtrl_brand->SetValue( m_comparatorDataBundle->brand );
    }
	else
	{
		m_textCtrl_brand->Disable();
	}
	
    if( *m_vehicleComparatorFlags & VehicleComparatorFlags::EQUAL_MODEL )
    {
		m_checkBox_model->SetValue( true );
        m_textCtrl_model->SetValue( m_comparatorDataBundle->model );
    }
	else
	{
		m_textCtrl_model->Disable();
	}
	
    if( *m_vehicleComparatorFlags & VehicleComparatorFlags::EQUAL_FUEL )
    {
        m_checkBox_fuelType->SetValue( true );
		m_choice_fuelType->setVehicleFuel( m_comparatorDataBundle->fuel );
    }
	else
	{
		m_choice_fuelType->Disable();
	}
	
    if( *m_vehicleComparatorFlags & VehicleComparatorFlags::EQUAL_TRANSMISSION )
    {
        m_checkBox_transmission->SetValue( true );
		m_choice_transmission->setVehicleTransmission( m_comparatorDataBundle->transmission );
    }
	else
	{
		m_choice_transmission->Disable();
	}
	
    if( *m_vehicleComparatorFlags & VehicleComparatorFlags::MIN_ENGINEHORSEPOWER )
    {
        m_checkBox_engineHorsepowerMin->SetValue( true );
		m_textCtrl_engineHorsepowerMin->SetValue( std::to_string( m_comparatorDataBundle->engineHorsepowerMin ) );
    }
	else
	{
		m_textCtrl_engineHorsepowerMin->Disable();	
	}
	
    if( *m_vehicleComparatorFlags & VehicleComparatorFlags::MAX_ENGINEHORSEPOWER )
    {
        m_checkBox_engineHorsepowerMax->SetValue( true );
		m_textCtrl_engineHorsepowerMax->SetValue( std::to_string( m_comparatorDataBundle->engineHorsepowerMax ) );
    }
	else
	{
		m_textCtrl_engineHorsepowerMax->Disable();	
	}

    if( *m_vehicleComparatorFlags & VehicleComparatorFlags::MIN_ENGINECAPACITY )
    {
        m_checkBox_engineCapacityMin->SetValue( true );
		m_textCtrl_engineCapacityMin->SetValue( std::to_string( m_comparatorDataBundle->engineCapacityMin ) );
    }
	else
	{
		m_textCtrl_engineCapacityMin->Disable();
	}
	
    if( *m_vehicleComparatorFlags & VehicleComparatorFlags::MAX_ENGINECAPACITY )
    {
        m_checkBox_engineCapacityMax->SetValue( true );
		m_textCtrl_engineCapacityMax->SetValue( std::to_string( m_comparatorDataBundle->engineCapacityMax ) );
    }
	else
	{
		m_textCtrl_engineCapacityMax->Disable();
	}
	
    if( *m_vehicleComparatorFlags & VehicleComparatorFlags::EQUAL_WHEELDRIVE )
    {
		m_checkBox_wheelDrive->SetValue( true );
		m_choice_wheelDrive->setVehicleWheelDrive( m_comparatorDataBundle->wheelDrive );
    }
	else
	{
		m_choice_wheelDrive->Disable();
	}
	
    if( *m_vehicleComparatorFlags & VehicleComparatorFlags::EQUAL_DOORQUANTITY )
    {
        m_checkBox_doorQuantity->SetValue( true );
		m_choice_doorQuantity->setVehicleDoorQuantity( m_comparatorDataBundle->doorQuantity );
    }
	else
	{
		m_choice_doorQuantity->Disable();
	}
	
    if( *m_vehicleComparatorFlags & VehicleComparatorFlags::MIN_PRICE )
    {
        m_checkBox_priceMin->SetValue( true );
		m_textCtrl_priceMin->SetValue( std::to_string( m_comparatorDataBundle->priceMin ) );
    }
	else
	{
		m_textCtrl_priceMin->Disable();
	}
	
    if( *m_vehicleComparatorFlags & VehicleComparatorFlags::MAX_PRICE )
    {
        m_checkBox_priceMax->SetValue( true );
		m_textCtrl_priceMax->SetValue( std::to_string( m_comparatorDataBundle->priceMax ) );
    }
	else
	{
		m_textCtrl_priceMax->Disable();
	}
	
    if( *m_vehicleComparatorFlags & VehicleComparatorFlags::MIN_MILEAGE )
    {
        m_checkBox_mileageMin->SetValue( true );
		m_textCtrl_mileageMin->SetValue( std::to_string( m_comparatorDataBundle->mileageMin ) );
    }
	else
	{
		m_textCtrl_mileageMin->Disable();
	}
	
    if( *m_vehicleComparatorFlags & VehicleComparatorFlags::MAX_MILEAGE )
    {
        m_checkBox_mileageMax->SetValue( true );
		m_textCtrl_mileageMax->SetValue( std::to_string( m_comparatorDataBundle->mileageMax ) );
    }
	else
	{
		m_textCtrl_mileageMax->Disable();
	}
	
    if( *m_vehicleComparatorFlags & VehicleComparatorFlags::CONTAIN_COLOR )
    {
        m_checkBox_color->SetValue( true );
		m_textCtrl_color->SetValue( m_comparatorDataBundle->color );
    }
	else
	{
		m_textCtrl_color->Disable();
	}
	
    if( *m_vehicleComparatorFlags & VehicleComparatorFlags::CONTAIN_STATE )
    {
        checkBox_state->SetValue( true );
		m_textCtrl_state->SetValue( m_comparatorDataBundle->state );
    }
	else
	{
		m_textCtrl_state->Disable();
	}
		 
}

CVehicleFilterDialog::~CVehicleFilterDialog() 
{

}



void CVehicleFilterDialog::checkBox_vehicleTypeChecked(wxCommandEvent& event)
{
	if (m_checkBox_vehicleType->IsChecked()) {
		m_choice_vehicleType->Enable();
	}
	else {
		m_choice_vehicleType->Disable();
	}
}

void CVehicleFilterDialog::checkBox_brandChecked(wxCommandEvent& event)
{
	if (m_checkBox_brand->IsChecked()) {
		m_textCtrl_brand->Enable();
	}
	else {
		m_textCtrl_brand->Disable();
	}
}

void CVehicleFilterDialog::checkBox_modelChecked(wxCommandEvent& event)
{
	if (m_checkBox_model->IsChecked()) {
		m_textCtrl_model->Enable();
	}
	else {
		m_textCtrl_model->Disable();
	}
}

void CVehicleFilterDialog::checkBox_fuelTypeChecked(wxCommandEvent& event)
{
	if (m_checkBox_fuelType->IsChecked()) {
		m_choice_fuelType->Enable();
	}
	else {
		m_choice_fuelType->Disable();
	}
}

void CVehicleFilterDialog::checkBox_transmissionChecked(wxCommandEvent& event)
{
	if (m_checkBox_transmission->IsChecked()) {
		m_choice_transmission->Enable();
	}
	else {
		m_choice_transmission->Disable();
	}
}

void CVehicleFilterDialog::checkBox_wheelDriveChecked(wxCommandEvent& event)
{
	if (m_checkBox_wheelDrive->IsChecked()) {
		m_choice_wheelDrive->Enable();
	}
	else {
		m_choice_wheelDrive->Disable();
	}
}
void CVehicleFilterDialog::checkBox_engineCapacityMinChecked(wxCommandEvent& event)
{
	if (m_checkBox_engineCapacityMin->IsChecked()) {
		m_textCtrl_engineCapacityMin->Enable();
	}
	else {
		m_textCtrl_engineCapacityMin->Disable();
	}
}

void CVehicleFilterDialog::checkBox_engineCapacityMaxChecked(wxCommandEvent& event)
{
	if (m_checkBox_engineCapacityMax->IsChecked()) {
		m_textCtrl_engineCapacityMax->Enable();
	}
	else {
		m_textCtrl_engineCapacityMax->Disable();
	}
}

void CVehicleFilterDialog::checkBox_engineHorsepowerMinChecked(wxCommandEvent& event)
{
	if (m_checkBox_engineHorsepowerMin->IsChecked()) {
		m_textCtrl_engineHorsepowerMin->Enable();
	}
	else {
		m_textCtrl_engineHorsepowerMin->Disable();
	}
}

void CVehicleFilterDialog::checkBox_engineHorsepowerMaxChecked(wxCommandEvent& event)
{
	if (m_checkBox_engineHorsepowerMax->IsChecked()) {
		m_textCtrl_engineHorsepowerMax->Enable();
	}
	else {
		m_textCtrl_engineHorsepowerMax->Disable();
	}
}

void CVehicleFilterDialog::checkBox_doorQuantityChecked(wxCommandEvent& event)
{
	if (m_checkBox_doorQuantity->IsChecked()) {
		m_choice_doorQuantity->Enable();
	}
	else {
		m_choice_doorQuantity->Disable();
	}
}

void CVehicleFilterDialog::checkBox_priceMinChecked(wxCommandEvent& event)
{
	if (m_checkBox_priceMin->IsChecked()) {
		m_textCtrl_priceMin->Enable();
	}
	else {
		m_textCtrl_priceMin->Disable();
	}
}

void CVehicleFilterDialog::checkBox_priceMaxChecked(wxCommandEvent& event)
{
	if (m_checkBox_priceMax->IsChecked()) {
		m_textCtrl_priceMax->Enable();
	}
	else {
		m_textCtrl_priceMax->Disable();
	}
}

void CVehicleFilterDialog::checkBox_mileageMinChecked(wxCommandEvent& event)
{
	if (m_checkBox_mileageMin->IsChecked()) {
		m_textCtrl_mileageMin->Enable();
	}
	else {
		m_textCtrl_mileageMin->Disable();
	}
}

void CVehicleFilterDialog::checkBox_mileageMaxChecked(wxCommandEvent& event)
{
	if (m_checkBox_mileageMax->IsChecked()) {
		m_textCtrl_mileageMax->Enable();
	}
	else {
		m_textCtrl_mileageMax->Disable();
	}
}

void CVehicleFilterDialog::checkBox_colorChecked(wxCommandEvent& event)
{
	if (m_checkBox_color->IsChecked()) {
		m_textCtrl_color->Enable();
	}
	else {
		m_textCtrl_color->Disable();
	}
}

void CVehicleFilterDialog::checkBox_stateChecked(wxCommandEvent& event)
{
	if (checkBox_state->IsChecked()) {
		m_textCtrl_state->Enable();
	}
	else {
		m_textCtrl_state->Disable();
	}
}



void CVehicleFilterDialog::OnSearchSubmitVehicleButtonClicked(wxCommandEvent& event)
{
	long extractedLong;
	double extractedDouble;

	if (m_checkBox_vehicleType->IsChecked()) {
		*m_vehicleComparatorFlags |= VehicleComparatorFlags::EQUAL_TYPE;
		m_comparatorDataBundle->vehicleType = m_choice_vehicleType->getVehicleType();
	}
	else
	{
		*m_vehicleComparatorFlags &= ~VehicleComparatorFlags::EQUAL_TYPE;
	}
	

	if (m_checkBox_brand->IsChecked()) {
		*m_vehicleComparatorFlags |= VehicleComparatorFlags::EQUAL_BRAND;
		m_comparatorDataBundle->brand = m_textCtrl_brand->GetValue().ToStdString();
	}
	else
	{
		*m_vehicleComparatorFlags &= ~VehicleComparatorFlags::EQUAL_BRAND;
	}
	

	if (m_checkBox_model->IsChecked()) {
		*m_vehicleComparatorFlags |= VehicleComparatorFlags::EQUAL_MODEL;		
		m_comparatorDataBundle->model = m_textCtrl_model->GetValue().ToStdString();
	}
	else
	{
		*m_vehicleComparatorFlags &= ~VehicleComparatorFlags::EQUAL_MODEL;
	}


	if (m_checkBox_fuelType->IsChecked()) {
		*m_vehicleComparatorFlags |= VehicleComparatorFlags::EQUAL_FUEL;
		m_comparatorDataBundle->fuel = m_choice_fuelType->getVehicleFuel();
	}
	else
	{
		*m_vehicleComparatorFlags &= ~VehicleComparatorFlags::EQUAL_FUEL;
	}
	

	if (m_checkBox_transmission->IsChecked()) {
		*m_vehicleComparatorFlags |= VehicleComparatorFlags::EQUAL_TRANSMISSION;
		m_comparatorDataBundle->transmission = m_choice_transmission->getVehicleTransmission();
	}
	else
	{
		*m_vehicleComparatorFlags &= ~VehicleComparatorFlags::EQUAL_TRANSMISSION;
	}
	

	if (m_checkBox_wheelDrive->IsChecked()) {
		*m_vehicleComparatorFlags |= VehicleComparatorFlags::EQUAL_WHEELDRIVE;
		m_comparatorDataBundle->wheelDrive = m_choice_wheelDrive->getVehicleWheelDrive();
	}


	m_textCtrl_engineHorsepowerMin->GetValue().ToLong(&extractedLong);
	if (m_checkBox_engineHorsepowerMin->IsChecked()) {
		*m_vehicleComparatorFlags |= VehicleComparatorFlags::MIN_ENGINEHORSEPOWER;
		m_comparatorDataBundle->engineHorsepowerMin = ( unsigned int )extractedLong;
	}
	else
	{
		*m_vehicleComparatorFlags &= ~VehicleComparatorFlags::MIN_ENGINEHORSEPOWER;
	}
	
	m_textCtrl_engineHorsepowerMax->GetValue().ToLong(&extractedLong);
	if (m_checkBox_engineHorsepowerMax->IsChecked()) {
		*m_vehicleComparatorFlags |= VehicleComparatorFlags::MAX_ENGINEHORSEPOWER;
		m_comparatorDataBundle->engineHorsepowerMax = ( unsigned int )extractedLong;
	}
	else
	{
		*m_vehicleComparatorFlags &= ~VehicleComparatorFlags::MAX_ENGINEHORSEPOWER;
	}


	m_textCtrl_engineCapacityMin->GetValue().ToLong(&extractedLong);
	if (m_checkBox_engineCapacityMin->IsChecked()) {
		*m_vehicleComparatorFlags |= VehicleComparatorFlags::MIN_ENGINECAPACITY;
		m_comparatorDataBundle->engineCapacityMin = ( unsigned int )extractedLong;
	}
	else
	{
		*m_vehicleComparatorFlags &= ~VehicleComparatorFlags::MIN_ENGINECAPACITY;
	}
	
	m_textCtrl_engineCapacityMax->GetValue().ToLong(&extractedLong);
	if (m_checkBox_engineCapacityMax->IsChecked()) {
		*m_vehicleComparatorFlags |= VehicleComparatorFlags::MAX_ENGINECAPACITY;
		m_comparatorDataBundle->engineCapacityMax = ( unsigned int )extractedLong;
	}
	else
	{
		*m_vehicleComparatorFlags &= ~VehicleComparatorFlags::MAX_ENGINECAPACITY;
	}


	if (m_checkBox_doorQuantity->IsChecked()) {
		*m_vehicleComparatorFlags |= VehicleComparatorFlags::EQUAL_DOORQUANTITY;
		m_comparatorDataBundle->doorQuantity = m_choice_doorQuantity->getVehicleDoorQuantity();
	}
	else
	{
		*m_vehicleComparatorFlags &= ~VehicleComparatorFlags::EQUAL_DOORQUANTITY;
	}
	

	m_textCtrl_priceMin->GetValue().ToDouble(&extractedDouble);
	if (m_checkBox_priceMin->IsChecked()) {
		*m_vehicleComparatorFlags |= VehicleComparatorFlags::MIN_PRICE;
		m_comparatorDataBundle->priceMin = ( float )extractedDouble;
	}
	else
	{
		*m_vehicleComparatorFlags &= ~VehicleComparatorFlags::MIN_PRICE;
	}
	
	m_textCtrl_priceMax->GetValue().ToDouble(&extractedDouble);
	if (m_checkBox_priceMax->IsChecked()) {
		*m_vehicleComparatorFlags |= VehicleComparatorFlags::MAX_PRICE;
		m_comparatorDataBundle->priceMax = ( float )extractedDouble;
	}
	else
	{
		*m_vehicleComparatorFlags &= ~VehicleComparatorFlags::MAX_PRICE;
	}


	m_textCtrl_mileageMin->GetValue().ToLong(&extractedLong);
	if (m_checkBox_mileageMin->IsChecked()) {
		*m_vehicleComparatorFlags |= VehicleComparatorFlags::MIN_MILEAGE;
		m_comparatorDataBundle->mileageMin = ( unsigned int )extractedLong;
	}
	else
	{
		*m_vehicleComparatorFlags &= ~VehicleComparatorFlags::MIN_MILEAGE;
	}
	
	m_textCtrl_mileageMax->GetValue().ToLong(&extractedLong);
	if (m_checkBox_mileageMax->IsChecked()) {
		*m_vehicleComparatorFlags |= VehicleComparatorFlags::MAX_MILEAGE;
		m_comparatorDataBundle->mileageMax = ( unsigned int )extractedLong;
	}
	else
	{
		*m_vehicleComparatorFlags &= ~VehicleComparatorFlags::MAX_MILEAGE;
	}

	if (m_checkBox_color->IsChecked()) {
		m_comparatorDataBundle->color = m_textCtrl_color->GetValue().ToStdString();
	}

	if (checkBox_state->IsChecked()) {
		m_comparatorDataBundle->state = m_textCtrl_state->GetValue().ToStdString();
	}

	Close();
	Destroy();
}

void CVehicleFilterDialog::OnCancel(wxCommandEvent& event)
{
	Close();
	Destroy();
}
