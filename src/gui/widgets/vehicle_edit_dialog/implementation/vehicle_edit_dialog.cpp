#include "vehicle_edit_dialog.h"

CVehicleEditDialog::CVehicleEditDialog(SVehicle* vehicle, wxWindow* parent) : IVehicleEditDialog( parent )
{
	m_representedVehicle = vehicle;

	m_panel_vehicleInsertData->setVehicleTypeInTheChoice( vehicle->basicData.vehicleType );
	m_panel_vehicleInsertData->setVehicleBrandInTheTextCtrl( vehicle->basicData.brandName );
	m_panel_vehicleInsertData->setVehicleModelInTheTextCtrl( vehicle->basicData.modelName );

	m_panel_vehicleInsertData->setVehicleFuelInTheChoice( vehicle->technicalData.fuelType );
	m_panel_vehicleInsertData->setVehicleTransmissionInTheChoice( vehicle->technicalData.transmissionType );
	m_panel_vehicleInsertData->setVehicleEngineHorsepowerInTheTextCtrl( vehicle->technicalData.engineHorsepower );
	m_panel_vehicleInsertData->setVehicleEngineCapacityInTheTextCtrl( vehicle->technicalData.engineCapacityL );
	m_panel_vehicleInsertData->setVehicleWheelDriveInTheChoice( vehicle->technicalData.wheelDriveType );
	m_panel_vehicleInsertData->setVehicleDoorQuantityInTheChoice( vehicle->technicalData.doorQuantity );

	m_panel_vehicleInsertData->setVehiclePriceInTheTextCtrl( vehicle->specimenData.price );
	m_panel_vehicleInsertData->setVehicleMileageInTheTextCtrl( vehicle->specimenData.mileageKm );
	m_panel_vehicleInsertData->setVehicleColorInTheTextCtrl( vehicle->specimenData.color );
	m_panel_vehicleInsertData->setVehicleStateInTheTextCtrl( vehicle->specimenData.state );
	m_panel_vehicleInsertData->setVehicleAdditionalInfoInTheTextCtrl( vehicle->specimenData.additionalInformation );
}

void CVehicleEditDialog::OnCloseButtonClicked(wxCommandEvent& event)
{
	Close();
	Destroy();
}

void CVehicleEditDialog::OnEditButtonClicked( wxCommandEvent& event )
{
	m_representedVehicle->basicData.vehicleType = m_panel_vehicleInsertData->getVehicleTypeFromTheChoice();
	m_representedVehicle->basicData.brandName = m_panel_vehicleInsertData->getVehicleBrandFromTheTextCtrl();
	m_representedVehicle->basicData.modelName = m_panel_vehicleInsertData->getVehicleModelFromTheTextCtrl();

	m_representedVehicle->technicalData.fuelType = m_panel_vehicleInsertData->getVehicleFuelFromTheChoice();
	m_representedVehicle->technicalData.transmissionType = m_panel_vehicleInsertData->getVehicleTransmissionFromTheChoice();
	m_representedVehicle->technicalData.wheelDriveType = m_panel_vehicleInsertData->getVehicleWheelDriveFromTheChoice();
	m_representedVehicle->technicalData.engineHorsepower = m_panel_vehicleInsertData->getVehicleEngineHorsepowerFromTheTextCtrl();
	m_representedVehicle->technicalData.engineCapacityL = m_panel_vehicleInsertData->getVehicleEngineCapacityFromTheTextCtrl();
	m_representedVehicle->technicalData.doorQuantity = m_panel_vehicleInsertData->getVehicleDoorQuantityFromTheChoice();

	m_representedVehicle->specimenData.price = m_panel_vehicleInsertData->getVehiclePriceFromTheTextCtrl();
	m_representedVehicle->specimenData.mileageKm = m_panel_vehicleInsertData->getVehicleMileageFromTheTextCtrl();
	m_representedVehicle->specimenData.color = m_panel_vehicleInsertData->getVehicleColorFromTheTextCtrl();
	m_representedVehicle->specimenData.state = m_panel_vehicleInsertData->getVehicleStateFromTheTextCtrl();
	m_representedVehicle->specimenData.additionalInformation = m_panel_vehicleInsertData->getVehicleAdditionalInfoFromTheTextCtrl();

	Close();
	Destroy();
}
