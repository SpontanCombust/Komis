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
	basicData.brandName = m_textCtrl_brand->GetValue();
	basicData.modelName = m_textCtrl_model->GetValue();
	basicData.vehicleType = EVehicleType{ m_choice_vehicleType->GetSelection() };

	SVehicleTechnicalData technicalData;
	technicalData.fuelType = EVehicleFuel{ m_choice_fuelType->GetSelection() };;
	technicalData.transmissionType = EVehicleTransmission{ m_choice_transmission->GetSelection() };
	technicalData.wheelDriveType = EWheelDrive{ m_choice_wheelDrive->GetSelection() };
	long engineHorsepower, engineCapacity;
	technicalData.engineHorsepower = m_textCtrl_engineHorsepower->GetValue().ToLong(&engineHorsepower);
	technicalData.engineCapacityL = m_textCtrl_engineCapacity->GetValue().ToLong(&engineCapacity);
	technicalData.doorQuantity = m_textCtrl_engineCapacity->GetValue();

	SVehicleSpecimenData specimenData;
	double price;
	specimenData.price = m_textCtrl_price->GetValue().ToDouble(&price);
	long mileage;
	specimenData.mileageKm = m_textCtrl_mileage->GetValue().ToLong(&mileage);
	specimenData.color = m_textCtrl_color->GetValue();
	specimenData.state = m_textCtrl_state->GetValue();
	specimenData.additionalInformation = m_textCtrl_additInfo->GetValue();

	m_databaseHandle->addVehicle(basicData, technicalData, specimenData);
}
