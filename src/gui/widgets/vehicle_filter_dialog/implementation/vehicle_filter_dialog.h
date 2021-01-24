#ifndef __vehicle_filter_dialog__
#define __vehicle_filter_dialog__

#include "../interface/i_vehicle_filter_dialog.h"
#include "database/vehicle_management/vehicle_querying.hpp"

class CVehicleFilterDialog : public IVehicleFilterDialog
{
private:
	SVehicleComparatorDataBundle *m_vehicleComparatorDataBundle;
	int *m_vehicleComparatorFlags;

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
	CVehicleFilterDialog(wxWindow* parent, SVehicleComparatorDataBundle *vehicleComparatorDataBundle, int *vehicleComparatorFlagsPtr);
};

#endif // __vehicle_filter_dialog__
