#include "vehicle_filter_dialog.h"

FVehicleFilterDialog::FVehicleFilterDialog(CVehicleManager* database, wxWindow* parent) : IVehicleFilterDialog(parent)
{
	m_databaseHandle = database;

	populateVehicleTypeChoice();
	populateFuelChoice();
	populateTransmissionChoice();
	populateWheelDriveChoice();
	populateDoorQuantityChoice();

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

void FVehicleFilterDialog::populateVehicleTypeChoice()
{
	std::vector< EVehicleType > vehicleTypes;
	vehicleTypes = getPossibleVehicleTypes();
	m_choice_vehicleType->Clear();

	for (const auto& vehicleType : vehicleTypes)
	{
		m_choice_vehicleType->Append(vehicleTypeToStringPolish(vehicleType));
	}

	m_choice_vehicleType->SetSelection(0);
}

void FVehicleFilterDialog::populateFuelChoice()
{
	std::vector< EVehicleFuel > vehicleFuels;

	vehicleFuels = getPossibleVehicleFuels();
	m_choice_fuelType->Clear();

	for (const auto& fuel : vehicleFuels)
	{
		m_choice_fuelType->Append(vehicleFuelToStringPolish(fuel));
	}

	m_choice_fuelType->SetSelection(0);
}

void FVehicleFilterDialog::populateTransmissionChoice()
{
	std::vector< EVehicleTransmission > vehicleTransmissions;

	vehicleTransmissions = getPossibleVehicleTransmissions();
	m_choice_transmission->Clear();

	for (const auto& transmission : vehicleTransmissions)
	{
		m_choice_transmission->Append(vehicleTransmissionToStringPolish(transmission));
	}

	m_choice_transmission->SetSelection(0);
}

void FVehicleFilterDialog::populateWheelDriveChoice()
{
	std::vector< EVehicleWheelDrive > vehicleWheelDrives;

	vehicleWheelDrives = getPossibleVehicleWheelDrives();
	m_choice_wheelDrive->Clear();

	for (const auto& wheelDrive : vehicleWheelDrives)
	{
		m_choice_wheelDrive->Append(vehicleWheelDriveToStringPolish(wheelDrive));
	}

	m_choice_wheelDrive->SetSelection(0);
}

void FVehicleFilterDialog::populateDoorQuantityChoice()
{
	std::vector< EVehicleDoorQuantity > vehicleDoorQuantities;

	vehicleDoorQuantities = getPossibleVehicleDoorQuantities();
	m_choice_doorQuantity->Clear();

	for (const auto& doorQuantity : vehicleDoorQuantities)
	{
		m_choice_doorQuantity->Append(vehicleDoorQuantityToStringPolish(doorQuantity));
	}

	m_choice_doorQuantity->SetSelection(1);
}

void FVehicleFilterDialog::checkBox_vehicleTypeChecked(wxCommandEvent& event)
{
	if (m_checkBox_vehicleType->IsChecked()) {
		m_choice_vehicleType->Enable();
	}
	else {
		m_choice_vehicleType->Disable();
	}
}

void FVehicleFilterDialog::checkBox_brandChecked(wxCommandEvent& event)
{
	if (m_checkBox_brand->IsChecked()) {
		m_textCtrl_brand->Enable();
	}
	else {
		m_textCtrl_brand->Disable();
	}
}

void FVehicleFilterDialog::checkBox_modelChecked(wxCommandEvent& event)
{
	if (m_checkBox_model->IsChecked()) {
		m_textCtrl_model->Enable();
	}
	else {
		m_textCtrl_model->Disable();
	}
}

void FVehicleFilterDialog::checkBox_fuelTypeChecked(wxCommandEvent& event)
{
	if (m_checkBox_fuelType->IsChecked()) {
		m_choice_fuelType->Enable();
	}
	else {
		m_choice_fuelType->Disable();
	}
}

void FVehicleFilterDialog::checkBox_transmissionChecked(wxCommandEvent& event)
{
	if (m_checkBox_transmission->IsChecked()) {
		m_choice_transmission->Enable();
	}
	else {
		m_choice_transmission->Disable();
	}
}

void FVehicleFilterDialog::checkBox_wheelDriveChecked(wxCommandEvent& event)
{
	if (m_checkBox_wheelDrive->IsChecked()) {
		m_choice_wheelDrive->Enable();
	}
	else {
		m_choice_wheelDrive->Disable();
	}
}
void FVehicleFilterDialog::checkBox_engineCapacityMinChecked(wxCommandEvent& event)
{
	if (m_checkBox_engineCapacityMin->IsChecked()) {
		m_textCtrl_engineCapacityMin->Enable();
	}
	else {
		m_textCtrl_engineCapacityMin->Disable();
	}
}

void FVehicleFilterDialog::checkBox_engineCapacityMaxChecked(wxCommandEvent& event)
{
	if (m_checkBox_engineCapacityMax->IsChecked()) {
		m_textCtrl_engineCapacityMax->Enable();
	}
	else {
		m_textCtrl_engineCapacityMax->Disable();
	}
}

void FVehicleFilterDialog::checkBox_engineHorsepowerMinChecked(wxCommandEvent& event)
{
	if (m_checkBox_engineHorsepowerMin->IsChecked()) {
		m_textCtrl_engineHorsepowerMin->Enable();
	}
	else {
		m_textCtrl_engineHorsepowerMin->Disable();
	}
}

void FVehicleFilterDialog::checkBox_engineHorsepowerMaxChecked(wxCommandEvent& event)
{
	if (m_checkBox_engineHorsepowerMax->IsChecked()) {
		m_textCtrl_engineHorsepowerMax->Enable();
	}
	else {
		m_textCtrl_engineHorsepowerMax->Disable();
	}
}

void FVehicleFilterDialog::checkBox_doorQuantityChecked(wxCommandEvent& event)
{
	if (m_checkBox_doorQuantity->IsChecked()) {
		m_choice_doorQuantity->Enable();
	}
	else {
		m_choice_doorQuantity->Disable();
	}
}

void FVehicleFilterDialog::checkBox_priceMinChecked(wxCommandEvent& event)
{
	if (m_checkBox_priceMin->IsChecked()) {
		m_textCtrl_priceMin->Enable();
	}
	else {
		m_textCtrl_priceMin->Disable();
	}
}

void FVehicleFilterDialog::checkBox_priceMaxChecked(wxCommandEvent& event)
{
	if (m_checkBox_priceMax->IsChecked()) {
		m_textCtrl_priceMax->Enable();
	}
	else {
		m_textCtrl_priceMax->Disable();
	}
}

void FVehicleFilterDialog::checkBox_mileageMinChecked(wxCommandEvent& event)
{
	if (m_checkBox_mileageMin->IsChecked()) {
		m_textCtrl_mileageMin->Enable();
	}
	else {
		m_textCtrl_mileageMin->Disable();
	}
}

void FVehicleFilterDialog::checkBox_mileageMaxChecked(wxCommandEvent& event)
{
	if (m_checkBox_mileageMax->IsChecked()) {
		m_textCtrl_mileageMax->Enable();
	}
	else {
		m_textCtrl_mileageMax->Disable();
	}
}

void FVehicleFilterDialog::checkBox_colorChecked(wxCommandEvent& event)
{
	if (m_checkBox_color->IsChecked()) {
		m_textCtrl_color->Enable();
	}
	else {
		m_textCtrl_color->Disable();
	}
}

void FVehicleFilterDialog::checkBox_stateChecked(wxCommandEvent& event)
{
	if (checkBox_state->IsChecked()) {
		m_textCtrl_state->Enable();
	}
	else {
		m_textCtrl_state->Disable();
	}
}



void FVehicleFilterDialog::OnSearchSubmitVehicleButtonClicked(wxCommandEvent& event)
{
	int selection;
	long extractedLong;
	double extractedDouble;

	m_vehicleFilter.brandName = m_textCtrl_brand->GetValue();

	m_vehicleFilter.modelName = m_textCtrl_model->GetValue();

	std::vector< EVehicleType > vehicleTypes;
	vehicleTypes = getPossibleVehicleTypes();
	selection = m_choice_vehicleType->GetSelection();
	m_vehicleFilter.vehicleType = vehicleTypes[selection];

	std::vector< EVehicleFuel > vehicleFuels;
	std::vector< EVehicleTransmission > vehicleTransmissions;
	std::vector< EVehicleWheelDrive > vehicleWheelDrives;
	std::vector< EVehicleDoorQuantity > vehicleDoorQuantities;

	vehicleFuels = getPossibleVehicleFuels();
	selection = m_choice_fuelType->GetSelection();
	m_vehicleFilter.fuelType = vehicleFuels[selection];

	vehicleTransmissions = getPossibleVehicleTransmissions();
	selection = m_choice_transmission->GetSelection();
	m_vehicleFilter.transmissionType = vehicleTransmissions[selection];

	m_textCtrl_engineHorsepowerMin->GetValue().ToLong(&extractedLong);
	m_vehicleFilter.engineHorsepowerMin = extractedLong;

	m_textCtrl_engineHorsepowerMax->GetValue().ToLong(&extractedLong);
	m_vehicleFilter.engineHorsepowerMax = extractedLong;

	m_textCtrl_engineCapacityMin->GetValue().ToLong(&extractedLong);
	m_vehicleFilter.engineCapacityMin = extractedLong;

	m_textCtrl_engineCapacityMax->GetValue().ToLong(&extractedLong);
	m_vehicleFilter.engineCapacityMax = extractedLong;

	vehicleDoorQuantities = getPossibleVehicleDoorQuantities();
	selection = m_choice_doorQuantity->GetSelection();
	m_vehicleFilter.doorQuantity = vehicleDoorQuantities[selection];

	m_textCtrl_priceMin->GetValue().ToDouble(&extractedDouble);
	m_vehicleFilter.priceMin = extractedDouble;

	m_textCtrl_priceMax->GetValue().ToDouble(&extractedDouble);
	m_vehicleFilter.priceMax = extractedDouble;

	m_textCtrl_mileageMin->GetValue().ToLong(&extractedLong);
	m_vehicleFilter.mileageMin = extractedLong;

	m_textCtrl_mileageMax->GetValue().ToLong(&extractedLong);
	m_vehicleFilter.mileageMax = extractedLong;

	m_vehicleFilter.color = m_textCtrl_color->GetValue();

	m_vehicleFilter.state = m_textCtrl_state->GetValue();

	Close();
}

void FVehicleFilterDialog::OnCancel(wxCommandEvent& event)
{
	Close();
}
