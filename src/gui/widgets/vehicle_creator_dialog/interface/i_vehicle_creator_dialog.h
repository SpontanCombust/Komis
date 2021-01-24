///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
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
/// Class IVehicleCreatorDialog
///////////////////////////////////////////////////////////////////////////////
class IVehicleCreatorDialog : public wxDialog
{
	private:

	protected:
		CVehicleInsertDataPanel* m_panel_vehicleInsertData;
		wxButton* m_button_submitVehicle;
		wxButton* m_button_cancel;

		// Virtual event handlers, overide them in your derived class
		virtual void OnSubmitVehicleButtonClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCancel( wxCommandEvent& event ) { event.Skip(); }


	public:

		IVehicleCreatorDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Kreator pojazdu"), const wxPoint& pos = wxPoint( -1,-1 ), const wxSize& size = wxSize( 550,800 ), long style = wxDEFAULT_DIALOG_STYLE );
		~IVehicleCreatorDialog();

};

