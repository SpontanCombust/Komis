#include "vehicle_view_dialog.h"

CVehicleViewDialog::CVehicleViewDialog(SVehicle Vehicle, wxWindow* parent) : IVehicleViewDialog( parent )
{
	std::string tmp;
	wxString number;
	tmp	= vehicleTypeToStringPolish(Vehicle.basicData.vehicleType);
	m_staticText_VehicleType->SetLabelText(tmp);

	m_staticText_brand->SetLabelText(Vehicle.basicData.brandName);

	m_staticText_model->SetLabelText(Vehicle.basicData.modelName);

	tmp = vehicleFuelToStringPolish(Vehicle.technicalData.fuelType);
	m_staticText_fuelType->SetLabelText(tmp);

	tmp = vehicleTransmissionToStringPolish(Vehicle.technicalData.transmissionType);
	m_staticText_transmissionType->SetLabelText(tmp);

	number << Vehicle.technicalData.engineHorsepower;
	m_staticText_engineHorsepower ->SetLabelText(number);
	number.Clear();

	number << Vehicle.technicalData.engineCapacityL;
	m_staticText_engineCapacity->SetLabelText(number);
	number.Clear();

	tmp = vehicleWheelDriveToStringPolish(Vehicle.technicalData.wheelDriveType);
	m_staticText_wheelDriveType->SetLabelText(tmp);

	tmp = vehicleDoorQuantityToStringPolish(Vehicle.technicalData.doorQuantity);
	m_staticText_doorQuantity->SetLabelText(tmp);

	number << Vehicle.specimenData.price;
	m_staticText_price->SetLabelText(number);
	number.Clear();

	number << Vehicle.specimenData.mileageKm;
	m_staticText_milleage->SetLabelText(number);
	number.Clear();

	m_staticText_color->SetLabel(Vehicle.specimenData.color);

	m_staticText_state->SetLabel(Vehicle.specimenData.state);
	
	m_staticText_additionalInformation->SetLabel(Vehicle.specimenData.additionalInformation);
}

void CVehicleViewDialog::OkButtonClicked( wxCommandEvent& event )
{
	Close();
}
