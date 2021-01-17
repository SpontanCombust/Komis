#include "vehicle_creator_dialog.hpp"

CVehicleCreatorDialog::CVehicleCreatorDialog( CVehicleManager *database, wxWindow *parent ) : IVehicleCreatorDialog( parent )
{
    m_databaseHandle = database;

	populateVehicleTypeChoice();
    populateFuelChoice();
    populateTransmissionChoice();
    populateWheelDriveChoice();
    populateDoorQuantityChoice();
}

CVehicleCreatorDialog::~CVehicleCreatorDialog()
{
        
}

void CVehicleCreatorDialog::populateVehicleTypeChoice() 
{
	std::vector< EVehicleType > vehicleTypes;

	vehicleTypes = getPossibleVehicleTypes();
	m_choice_vehicleType->Clear();

	for( const auto& vehicleType : vehicleTypes )
	{
		m_choice_vehicleType->Append( vehicleTypeToStringPolish( vehicleType ) );
	}

	m_choice_vehicleType->SetSelection(0);
}

void CVehicleCreatorDialog::populateFuelChoice() 
{
	std::vector< EVehicleFuel > vehicleFuels;

	vehicleFuels = getPossibleVehicleFuels();
	m_choice_fuelType->Clear();

	for( const auto& fuel: vehicleFuels )
	{
		m_choice_fuelType->Append( vehicleFuelToStringPolish( fuel ) );
	}

	m_choice_fuelType->SetSelection(0);
}

void CVehicleCreatorDialog::populateTransmissionChoice() 
{
	std::vector< EVehicleTransmission > vehicleTransmissions;

	vehicleTransmissions = getPossibleVehicleTransmissions();
	m_choice_transmission->Clear();

	for( const auto& transmission : vehicleTransmissions )
	{
		m_choice_transmission->Append( vehicleTransmissionToStringPolish( transmission ) );
	}

	m_choice_transmission->SetSelection(0);
}

void CVehicleCreatorDialog::populateWheelDriveChoice() 
{
	std::vector< EVehicleWheelDrive > vehicleWheelDrives;

	vehicleWheelDrives = getPossibleVehicleWheelDrives();
	m_choice_wheelDrive->Clear();

	for ( const auto& wheelDrive : vehicleWheelDrives )
	{
		m_choice_wheelDrive->Append( vehicleWheelDriveToStringPolish( wheelDrive ) );
	}

	m_choice_wheelDrive->SetSelection(0);
}

void CVehicleCreatorDialog::populateDoorQuantityChoice() 
{
	std::vector< EVehicleDoorQuantity > vehicleDoorQuantities;

	vehicleDoorQuantities = getPossibleVehicleDoorQuantities();
	m_choice_doorQuantity->Clear();

	for( const auto& doorQuantity : vehicleDoorQuantities )
	{
		m_choice_doorQuantity->Append( vehicleDoorQuantityToStringPolish( doorQuantity ) );
	}

	m_choice_doorQuantity->SetSelection(1);
}
	

void CVehicleCreatorDialog::OnSubmitVehicleButtonClicked( wxCommandEvent& event ) 
{
	int selection;
	long extractedLong;
	double extractedDouble;



    SVehicleBasicData basicData;
	std::vector< EVehicleType > vehicleTypes;

	basicData.brandName = m_textCtrl_brand->GetValue();

	basicData.modelName = m_textCtrl_model->GetValue();

	vehicleTypes = getPossibleVehicleTypes();
	selection = m_choice_vehicleType->GetSelection();
	basicData.vehicleType = vehicleTypes[ selection ];



	SVehicleTechnicalData technicalData;
	std::vector< EVehicleFuel > vehicleFuels;
	std::vector< EVehicleTransmission > vehicleTransmissions;
	std::vector< EVehicleWheelDrive > vehicleWheelDrives;
	std::vector< EVehicleDoorQuantity > vehicleDoorQuantities;

	vehicleFuels = getPossibleVehicleFuels();
	selection = m_choice_fuelType->GetSelection();
	technicalData.fuelType = vehicleFuels[ selection ];

	vehicleTransmissions = getPossibleVehicleTransmissions();
	selection = m_choice_transmission->GetSelection();
	technicalData.transmissionType = vehicleTransmissions[ selection ];

	vehicleWheelDrives = getPossibleVehicleWheelDrives();
	selection = m_choice_wheelDrive->GetSelection();
	technicalData.wheelDriveType = vehicleWheelDrives[ selection ];

	m_textCtrl_engineHorsepower->GetValue().ToLong( &extractedLong );
	technicalData.engineHorsepower = extractedLong;

	m_textCtrl_engineCapacity->GetValue().ToLong( &extractedLong );
	technicalData.engineCapacityL = extractedLong;

	vehicleDoorQuantities = getPossibleVehicleDoorQuantities();
	selection = m_choice_doorQuantity->GetSelection();
	technicalData.doorQuantity = vehicleDoorQuantities[ selection ];



	SVehicleSpecimenData specimenData;
	
	m_textCtrl_price->GetValue().ToDouble( &extractedDouble );
	specimenData.price = extractedDouble;

	m_textCtrl_mileage->GetValue().ToLong( &extractedLong );
	specimenData.mileageKm = extractedLong;

	specimenData.color = m_textCtrl_color->GetValue();

	specimenData.state = m_textCtrl_state->GetValue();

	specimenData.additionalInformation = m_textCtrl_additInfo->GetValue();



	m_databaseHandle->addVehicle( basicData, technicalData, specimenData );

	Close();
}

void CVehicleCreatorDialog::OnCancel(wxCommandEvent& event) 
{
	Close();
}
