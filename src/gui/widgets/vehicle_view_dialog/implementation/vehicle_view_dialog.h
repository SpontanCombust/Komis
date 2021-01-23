#ifndef __vehicle_view_dialog__
#define __vehicle_view_dialog__


#include "../interface/i_vehicle_view_dialog.h"
#include "database/vehicle.hpp"


class SVehicleViewDialog : public VehicleViewDialog
{
private:
	SVehicle m_representedVehicle;
protected:
	// Handlers for VehicleViewDialog events.
	void OkButtonClicked(wxCommandEvent& event);
public:
	/** Constructor */
	SVehicleViewDialog(SVehicle Vehicle, wxWindow* parent);
	//// end generated class members

};

#endif // __vehicle_view_dialog__
