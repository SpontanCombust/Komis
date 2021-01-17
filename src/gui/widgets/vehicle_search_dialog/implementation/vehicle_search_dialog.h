#ifndef __vehicle_search_dialog__
#define __vehicle_search_dialog__


#include "../interface/i_vehicle_search_dialog.h"
#include "database/vehicle_management/vehicle_manager.hpp"

class SVehicleSearchDialog : public IVehicleSearchDialog
{
	protected:
		void OnSearchSubmitVehicleButtonClicked( wxCommandEvent& event );
		void OnCancel( wxCommandEvent& event );
	public:
		SVehicleSearchDialog(CVehicleManager* database, wxWindow* parent);
};

#endif 
