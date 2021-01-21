#ifndef __vehicle_filter_dialog__
#define __vehicle_filter_dialog__


#include "../interface/i_vehicle_filter_dialog.h"
#include "database/vehicle_management/vehicle_manager.hpp"
#include "database/vehicle_data/vehicle_filters_data.hpp"

class FVehicleFilterDialog : public IVehicleFilterDialog
{
private:
	CVehicleManager* m_databaseHandle;
	VehicleFilters m_vehicleFilter;
protected:
	// Handlers for IVehicleFilterDialog events.
	void checkBox_vehicleTypeChecked(wxCommandEvent& event);
	void checkBox_brandChecked(wxCommandEvent& event);
	void checkBox_modelChecked(wxCommandEvent& event);
	void checkBox_fuelTypeChecked(wxCommandEvent& event);
	void checkBox_transmissionChecked(wxCommandEvent& event);
	void checkBox_wheelDriveChecked(wxCommandEvent& event);
	void checkBox_engineCapacityMinChecked(wxCommandEvent& event);
	void checkBox_engineCapacityMaxChecked(wxCommandEvent& event);
	void checkBox_engineHorsepowerMinChecked(wxCommandEvent& event);
	void checkBox_engineHorsepowerMaxChecked(wxCommandEvent& event);
	void checkBox_doorQuantityChecked(wxCommandEvent& event);
	void checkBox_priceMinChecked(wxCommandEvent& event);
	void checkBox_priceMaxChecked(wxCommandEvent& event);
	void checkBox_mileageMinChecked(wxCommandEvent& event);
	void checkBox_mileageMaxChecked(wxCommandEvent& event);
	void checkBox_colorChecked(wxCommandEvent& event);
	void checkBox_stateChecked(wxCommandEvent& event);
	virtual void OnSearchSubmitVehicleButtonClicked(wxCommandEvent& event) override;
	void OnCancel(wxCommandEvent& event);
public:
	FVehicleFilterDialog(CVehicleManager* database, wxWindow* parent);
	VehicleFilters GetVehicleFilters() {
		return m_vehicleFilter;
	};
private:
	void populateVehicleTypeChoice();
	void populateFuelChoice();
	void populateTransmissionChoice();
	void populateWheelDriveChoice();
	void populateDoorQuantityChoice();
};

#endif // __vehicle_filter_dialog__
