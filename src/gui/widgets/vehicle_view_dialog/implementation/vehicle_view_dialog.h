#ifndef __vehicle_view_dialog__
#define __vehicle_view_dialog__


#include "../interface/i_vehicle_view_dialog.h"
#include "database/vehicle.hpp"


class CVehicleViewDialog : public IVehicleViewDialog
{
private:
	SVehicle m_representedVehicle;
protected:
	// Handlers for IVehicleViewDialog events.
	void OkButtonClicked(wxCommandEvent& event);
public:
	/** Constructor */
	CVehicleViewDialog(SVehicle Vehicle, wxWindow* parent);
	//// end generated class members

};

#endif // __vehicle_view_dialog__
