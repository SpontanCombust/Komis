#include "vehicle_edit_dialog.h"

EVehicleEditDialog::EVehicleEditDialog(SVehicle* Vehicle, wxWindow* parent) : VehicleEditDialog( parent )
{
	m_representedVehicle = Vehicle;

	populateVehicleTypeChoice();
	populateFuelChoice();
	populateTransmissionChoice();
	populateWheelDriveChoice();
	populateDoorQuantityChoice();

	std::string tmp;
	wxString number;
	tmp = vehicleTypeToStringPolish(Vehicle->basicData.vehicleType);
	m_staticText_VehicleType->SetLabelText(tmp);

	m_staticText_brand->SetLabelText(Vehicle->basicData.brandName);

	m_staticText_model->SetLabelText(Vehicle->basicData.modelName);

	tmp = vehicleFuelToStringPolish(Vehicle->technicalData.fuelType);
	m_staticText_fuelType->SetLabelText(tmp);

	tmp = vehicleTransmissionToStringPolish(Vehicle->technicalData.transmissionType);
	m_staticText_transmissionType->SetLabelText(tmp);

	number << Vehicle->technicalData.engineHorsepower;
	m_staticText_engineHorsepower->SetLabelText(number);
	number.Clear();

	number << Vehicle->technicalData.engineCapacityL;
	m_staticText_engineCapacity->SetLabelText(number);
	number.Clear();

	tmp = vehicleWheelDriveToStringPolish(Vehicle->technicalData.wheelDriveType);
	m_staticText_wheelDriveType->SetLabelText(tmp);

	tmp = vehicleDoorQuantityToStringPolish(Vehicle->technicalData.doorQuantity);
	m_staticText_doorQuantity->SetLabelText(tmp);

	number << Vehicle->specimenData.price;
	m_staticText_price->SetLabelText(number);
	number.Clear();

	number << Vehicle->specimenData.mileageKm;
	m_staticText_milleage->SetLabelText(number);
	number.Clear();

	m_staticText_color->SetLabel(Vehicle->specimenData.color);

	m_staticText_state->SetLabel(Vehicle->specimenData.state);

	m_staticText_additionalInformation->SetLabel(Vehicle->specimenData.additionalInformation);
}

void EVehicleEditDialog::populateVehicleTypeChoice()
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

void EVehicleEditDialog::populateFuelChoice()
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

void EVehicleEditDialog::populateTransmissionChoice()
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

void EVehicleEditDialog::populateWheelDriveChoice()
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

void EVehicleEditDialog::populateDoorQuantityChoice()
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

void EVehicleEditDialog::OnCloseButtonClicked(wxCommandEvent& event)
{
	Close();
}

void EVehicleEditDialog::OnEditButtonClicked( wxCommandEvent& event )
{
	long extractedLong;
	double extractedDouble;
	int selection;

	if (!m_textCtrl_brand->IsEmpty()) {
		m_representedVehicle->basicData.brandName = m_textCtrl_brand->GetValue();
	}

	if (!m_textCtrl_model->IsEmpty()) {
		m_representedVehicle->basicData.modelName = m_textCtrl_model->GetValue();
	}

	if (!m_textCtrl_engineCapacity->IsEmpty()) {
		m_textCtrl_engineCapacity->GetValue().ToLong(&extractedLong);
		m_representedVehicle->technicalData.engineCapacityL = extractedLong;
	}

	if (!m_textCtrl_engineHorsepower->IsEmpty()) {
		m_textCtrl_engineHorsepower->GetValue().ToLong(&extractedLong);
		m_representedVehicle->technicalData.engineHorsepower = extractedLong;
	}

	if (!m_textCtrl_price->IsEmpty()) {
		m_textCtrl_price->GetValue().ToDouble(&extractedDouble);
		m_representedVehicle->specimenData.price = extractedDouble;
	}

	if (!m_textCtrl_milleage->IsEmpty()) {
		m_textCtrl_milleage->GetValue().ToLong(&extractedLong);
		m_representedVehicle->specimenData.mileageKm = extractedLong;
	}

	if (!m_textCtrl_color->IsEmpty()) {
		m_representedVehicle->specimenData.color = m_textCtrl_color->GetValue();
	}

	if (!m_textCtrl_state->IsEmpty()) {
		m_representedVehicle->specimenData.state = m_textCtrl_state->GetValue();
	}

	if (!m_textCtrl_additionalInformation->IsEmpty()) {
		m_representedVehicle->specimenData.additionalInformation = m_textCtrl_additionalInformation->GetValue();
	}

	std::vector< EVehicleType > vehicleTypes;

	vehicleTypes = getPossibleVehicleTypes();
	selection = m_choice_vehicleType->GetSelection();
	m_representedVehicle->basicData.vehicleType = vehicleTypes[selection];

	std::vector< EVehicleFuel > vehicleFuels;
	std::vector< EVehicleTransmission > vehicleTransmissions;
	std::vector< EVehicleWheelDrive > vehicleWheelDrives;
	std::vector< EVehicleDoorQuantity > vehicleDoorQuantities;

	vehicleFuels = getPossibleVehicleFuels();
	selection = m_choice_fuelType->GetSelection();

	m_representedVehicle->technicalData.fuelType = vehicleFuels[selection];

	vehicleTransmissions = getPossibleVehicleTransmissions();
	selection = m_choice_transmission->GetSelection();

	m_representedVehicle->technicalData.transmissionType = vehicleTransmissions[selection];

	vehicleWheelDrives = getPossibleVehicleWheelDrives();
	selection = m_choice_wheelDrive->GetSelection();

	m_representedVehicle->technicalData.wheelDriveType = vehicleWheelDrives[selection];

	vehicleDoorQuantities = getPossibleVehicleDoorQuantities();
	selection = m_choice_doorQuantity->GetSelection();

	m_representedVehicle->technicalData.doorQuantity = vehicleDoorQuantities[selection];

	Close();
}
