///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include "gui/widgets/vehicle_insert_data_panel/implementation/vehicle_insert_data_panel.hpp"
#include <wx/panel.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class IVehicleEditDialog
///////////////////////////////////////////////////////////////////////////////
class IVehicleEditDialog : public wxDialog
{
	private:

	protected:
		CVehicleInsertDataPanel* m_panel_vehicleInsertData;
		wxButton* edit_button;
		wxButton* close_button;

		// Virtual event handlers, overide them in your derived class
		virtual void OnEditButtonClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCloseButtonClicked( wxCommandEvent& event ) { event.Skip(); }


	public:

		IVehicleEditDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Edycja pojazdu"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_DIALOG_STYLE );
		~IVehicleEditDialog();

};

