#include "vehicle_creator_dialog.hpp"

CVehicleCreatorDialog::CVehicleCreatorDialog( CVehicleManager *database, wxWindow *parent ) : IVehicleCreatorDialog( parent )
{
    m_databaseHandle = database;
}

CVehicleCreatorDialog::~CVehicleCreatorDialog()
{
        
}


void CVehicleCreatorDialog::OnSubmitVehicleButtonClicked( wxCommandEvent& event ) 
{
    SVehicleBasicData basicData;
	SVehicleTechnicalData technicalData;
	SVehicleSpecimenData specimenData;

	basicData.vehicleType = m_panel_vehicleInsertData->getVehicleTypeFromTheChoice();
	basicData.brandName = m_panel_vehicleInsertData->getVehicleBrandFromTheTextCtrl();
	basicData.modelName = m_panel_vehicleInsertData->getVehicleModelFromTheTextCtrl();

	technicalData.fuelType = m_panel_vehicleInsertData->getVehicleFuelFromTheChoice();
	technicalData.transmissionType = m_panel_vehicleInsertData->getVehicleTransmissionFromTheChoice();
	technicalData.wheelDriveType = m_panel_vehicleInsertData->getVehicleWheelDriveFromTheChoice();
	technicalData.engineHorsepower = m_panel_vehicleInsertData->getVehicleEngineHorsepowerFromTheTextCtrl();
	technicalData.engineCapacityL = m_panel_vehicleInsertData->getVehicleEngineCapacityFromTheTextCtrl();
	technicalData.doorQuantity = m_panel_vehicleInsertData->getVehicleDoorQuantityFromTheChoice();

	specimenData.price = m_panel_vehicleInsertData->getVehiclePriceFromTheTextCtrl();
	specimenData.mileageKm = m_panel_vehicleInsertData->getVehicleMileageFromTheTextCtrl();
	specimenData.color = m_panel_vehicleInsertData->getVehicleColorFromTheTextCtrl();
	specimenData.state = m_panel_vehicleInsertData->getVehicleStateFromTheTextCtrl();
	specimenData.additionalInformation = m_panel_vehicleInsertData->getVehicleAdditionalInfoFromTheTextCtrl();

	m_databaseHandle->addVehicle( basicData, technicalData, specimenData );

	Close();
	Destroy();
}

void CVehicleCreatorDialog::OnCancel(wxCommandEvent& event) 
{
	Close();
	Destroy();
}
