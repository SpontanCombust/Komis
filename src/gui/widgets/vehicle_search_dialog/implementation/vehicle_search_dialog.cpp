#include "vehicle_search_dialog.h"

SVehicleSearchDialog::SVehicleSearchDialog(CVehicleManager* database, wxWindow* parent)
:
IVehicleSearchDialog( parent )
{

}

void SVehicleSearchDialog::OnSearchSubmitVehicleButtonClicked( wxCommandEvent& event )
{
	Close();
}

void SVehicleSearchDialog::OnCancel( wxCommandEvent& event )
{
	Close();
}

