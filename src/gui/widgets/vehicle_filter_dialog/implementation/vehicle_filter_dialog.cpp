#include "vehicle_filter_dialog.h"

CVehicleFilterDialog::CVehicleFilterDialog(wxWindow* parent, SVehicleComparatorDataBundle *vehicleComparatorDataBundle, int *vehicleComparatorFlagsPtr) : IVehicleFilterDialog(parent)
{
	m_vehicleComparatorDataBundle = vehicleComparatorDataBundle;
	m_vehicleComparatorFlags = vehicleComparatorFlagsPtr;

	m_choice_vehicleType->Disable();
	m_textCtrl_brand->Disable();
	m_textCtrl_model->Disable();
	m_choice_fuelType->Disable();
	m_choice_transmission->Disable();
	m_choice_wheelDrive->Disable();
	m_textCtrl_engineCapacityMin->Disable();
	m_textCtrl_engineCapacityMax->Disable();
	m_textCtrl_engineHorsepowerMin->Disable();
	m_textCtrl_engineHorsepowerMax->Disable();
	m_choice_doorQuantity->Disable();
	m_textCtrl_priceMin->Disable();
	m_textCtrl_priceMax->Disable();
	m_textCtrl_mileageMin->Disable();
	m_textCtrl_mileageMax->Disable();
	m_textCtrl_color->Disable();
	m_textCtrl_state->Disable();

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
		m_vehicleComparatorDataBundle->vehicleType = m_choice_vehicleType->getVehicleType();
	}
	else
	{
		*m_vehicleComparatorFlags &= ~VehicleComparatorFlags::EQUAL_TYPE;
	}
	

	if (m_checkBox_brand->IsChecked()) {
		*m_vehicleComparatorFlags |= VehicleComparatorFlags::EQUAL_BRAND;
		m_vehicleComparatorDataBundle->brand = m_textCtrl_brand->GetValue().ToStdString();
	}
	else
	{
		*m_vehicleComparatorFlags &= ~VehicleComparatorFlags::EQUAL_BRAND;
	}
	

	if (m_checkBox_model->IsChecked()) {
		*m_vehicleComparatorFlags |= VehicleComparatorFlags::EQUAL_MODEL;		
		m_vehicleComparatorDataBundle->model = m_textCtrl_model->GetValue().ToStdString();
	}
	else
	{
		*m_vehicleComparatorFlags &= ~VehicleComparatorFlags::EQUAL_MODEL;
	}


	if (m_checkBox_fuelType->IsChecked()) {
		*m_vehicleComparatorFlags |= VehicleComparatorFlags::EQUAL_FUEL;
		m_vehicleComparatorDataBundle->fuel = m_choice_fuelType->getVehicleFuel();
	}
	else
	{
		*m_vehicleComparatorFlags &= ~VehicleComparatorFlags::EQUAL_FUEL;
	}
	

	if (m_checkBox_transmission->IsChecked()) {
		*m_vehicleComparatorFlags |= VehicleComparatorFlags::EQUAL_TRANSMISSION;
		m_vehicleComparatorDataBundle->transmission = m_choice_transmission->getVehicleTransmission();
	}
	else
	{
		*m_vehicleComparatorFlags &= ~VehicleComparatorFlags::EQUAL_TRANSMISSION;
	}
	

	if (m_checkBox_wheelDrive->IsChecked()) {
		*m_vehicleComparatorFlags |= VehicleComparatorFlags::EQUAL_WHEELDRIVE;
		m_vehicleComparatorDataBundle->wheelDrive = m_choice_wheelDrive->getVehicleWheelDrive();
	}


	m_textCtrl_engineHorsepowerMin->GetValue().ToLong(&extractedLong);
	if (m_checkBox_engineHorsepowerMin->IsChecked()) {
		*m_vehicleComparatorFlags |= VehicleComparatorFlags::MIN_ENGINEHORSEPOWER;
		m_vehicleComparatorDataBundle->engineHorsepowerMin = ( unsigned int )extractedLong;
	}
	else
	{
		*m_vehicleComparatorFlags &= ~VehicleComparatorFlags::MIN_ENGINEHORSEPOWER;
	}
	
	m_textCtrl_engineHorsepowerMax->GetValue().ToLong(&extractedLong);
	if (m_checkBox_engineHorsepowerMax->IsChecked()) {
		*m_vehicleComparatorFlags |= VehicleComparatorFlags::MAX_ENGINEHORSEPOWER;
		m_vehicleComparatorDataBundle->engineHorsepowerMax = ( unsigned int )extractedLong;
	}
	else
	{
		*m_vehicleComparatorFlags &= ~VehicleComparatorFlags::MAX_ENGINEHORSEPOWER;
	}


	m_textCtrl_engineCapacityMin->GetValue().ToLong(&extractedLong);
	if (m_checkBox_engineCapacityMin->IsChecked()) {
		*m_vehicleComparatorFlags |= VehicleComparatorFlags::MIN_ENGINECAPACITY;
		m_vehicleComparatorDataBundle->engineCapacityMin = ( unsigned int )extractedLong;
	}
	else
	{
		*m_vehicleComparatorFlags &= ~VehicleComparatorFlags::MIN_ENGINECAPACITY;
	}
	
	m_textCtrl_engineCapacityMax->GetValue().ToLong(&extractedLong);
	if (m_checkBox_engineCapacityMax->IsChecked()) {
		*m_vehicleComparatorFlags |= VehicleComparatorFlags::MAX_ENGINECAPACITY;
		m_vehicleComparatorDataBundle->engineCapacityMax = ( unsigned int )extractedLong;
	}
	else
	{
		*m_vehicleComparatorFlags &= ~VehicleComparatorFlags::MAX_ENGINECAPACITY;
	}


	if (m_checkBox_doorQuantity->IsChecked()) {
		*m_vehicleComparatorFlags |= VehicleComparatorFlags::EQUAL_DOORQUANTITY;
		m_vehicleComparatorDataBundle->doorQuantity = m_choice_doorQuantity->getVehicleDoorQuantity();
	}
	else
	{
		*m_vehicleComparatorFlags &= ~VehicleComparatorFlags::EQUAL_DOORQUANTITY;
	}
	

	m_textCtrl_priceMin->GetValue().ToDouble(&extractedDouble);
	if (m_checkBox_priceMin->IsChecked()) {
		*m_vehicleComparatorFlags |= VehicleComparatorFlags::MIN_PRICE;
		m_vehicleComparatorDataBundle->priceMin = ( float )extractedDouble;
	}
	else
	{
		*m_vehicleComparatorFlags &= ~VehicleComparatorFlags::MIN_PRICE;
	}
	
	m_textCtrl_priceMax->GetValue().ToDouble(&extractedDouble);
	if (m_checkBox_priceMax->IsChecked()) {
		*m_vehicleComparatorFlags |= VehicleComparatorFlags::MAX_PRICE;
		m_vehicleComparatorDataBundle->priceMax = ( float )extractedDouble;
	}
	else
	{
		*m_vehicleComparatorFlags &= ~VehicleComparatorFlags::MAX_PRICE;
	}


	m_textCtrl_mileageMin->GetValue().ToLong(&extractedLong);
	if (m_checkBox_mileageMin->IsChecked()) {
		*m_vehicleComparatorFlags |= VehicleComparatorFlags::MIN_MILEAGE;
		m_vehicleComparatorDataBundle->mileageMin = ( unsigned int )extractedLong;
	}
	else
	{
		*m_vehicleComparatorFlags &= ~VehicleComparatorFlags::MIN_MILEAGE;
	}
	
	m_textCtrl_mileageMax->GetValue().ToLong(&extractedLong);
	if (m_checkBox_mileageMax->IsChecked()) {
		*m_vehicleComparatorFlags |= VehicleComparatorFlags::MAX_MILEAGE;
		m_vehicleComparatorDataBundle->mileageMax = ( unsigned int )extractedLong;
	}
	else
	{
		*m_vehicleComparatorFlags &= ~VehicleComparatorFlags::MAX_MILEAGE;
	}

	if (m_checkBox_color->IsChecked()) {
		m_vehicleComparatorDataBundle->color = m_textCtrl_color->GetValue().ToStdString();
	}

	if (checkBox_state->IsChecked()) {
		m_vehicleComparatorDataBundle->state = m_textCtrl_state->GetValue().ToStdString();
	}

	Close();
}

void CVehicleFilterDialog::OnCancel(wxCommandEvent& event)
{
	Close();
}
