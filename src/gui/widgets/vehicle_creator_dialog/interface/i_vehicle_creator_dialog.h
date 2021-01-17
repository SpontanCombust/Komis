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
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/choice.h>
#include <wx/textctrl.h>
#include <wx/valtext.h>
#include <wx/sizer.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/button.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class IVehicleCreatorDialog
///////////////////////////////////////////////////////////////////////////////
class IVehicleCreatorDialog : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText_vehicleType;
		wxChoice* m_choice_vehicleType;
		wxStaticText* m_staticText_brand;
		wxTextCtrl* m_textCtrl_brand;
		wxStaticText* m_staticText_model;
		wxTextCtrl* m_textCtrl_model;
		wxStaticText* m_staticText_fuelType;
		wxChoice* m_choice_fuelType;
		wxStaticText* m_staticText_transmission;
		wxChoice* m_choice_transmission;
		wxStaticText* m_staticText_wheelDrive;
		wxChoice* m_choice_wheelDrive;
		wxStaticText* m_staticText_engineCapacity;
		wxTextCtrl* m_textCtrl_engineCapacity;
		wxStaticText* m_staticText_engineHorsepower;
		wxTextCtrl* m_textCtrl_engineHorsepower;
		wxStaticText* m_staticText_doorQuantity;
		wxChoice* m_choice_doorQuantity;
		wxStaticText* m_staticText_price;
		wxTextCtrl* m_textCtrl_price;
		wxStaticText* m_staticText_mileage;
		wxTextCtrl* m_textCtrl_mileage;
		wxStaticText* m_staticText_color;
		wxTextCtrl* m_textCtrl_color;
		wxStaticText* m_staticText_state;
		wxTextCtrl* m_textCtrl_state;
		wxStaticText* m_staticText_additInfo;
		wxTextCtrl* m_textCtrl_additInfo;
		wxButton* m_button_submitVehicle;
		wxButton* m_button_cancel;

		// Virtual event handlers, overide them in your derived class
		virtual void OnSubmitVehicleButtonClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCancel( wxCommandEvent& event ) { event.Skip(); }


	public:

		IVehicleCreatorDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Kreator pojazdu"), const wxPoint& pos = wxPoint( -1,-1 ), const wxSize& size = wxSize( 550,800 ), long style = wxDEFAULT_DIALOG_STYLE );
		~IVehicleCreatorDialog();

};

