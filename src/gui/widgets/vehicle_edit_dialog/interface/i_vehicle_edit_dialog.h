///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/choice.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/button.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class VehicleEditDialog
///////////////////////////////////////////////////////////////////////////////
class VehicleEditDialog : public wxDialog
{
	private:

	protected:
		wxStaticText* staticText_VehicleType;
		wxStaticText* m_staticText_VehicleType;
		wxChoice* m_choice_vehicleType;
		wxStaticText* staticText_brand;
		wxStaticText* m_staticText_brand;
		wxTextCtrl* m_textCtrl_brand;
		wxStaticText* staticText_model;
		wxStaticText* m_staticText_model;
		wxTextCtrl* m_textCtrl_model;
		wxStaticText* staticText_fuelType;
		wxStaticText* m_staticText_fuelType;
		wxChoice* m_choice_fuelType;
		wxStaticText* staticText_wheelDriveType;
		wxStaticText* m_staticText_transmissionType;
		wxChoice* m_choice_transmission;
		wxStaticText* staticText_transmissionType;
		wxStaticText* m_staticText_wheelDriveType;
		wxChoice* m_choice_wheelDrive;
		wxStaticText* staticText_engineCapacity;
		wxStaticText* m_staticText_engineCapacity;
		wxTextCtrl* m_textCtrl_engineCapacity;
		wxStaticText* staticText_engineHorsepower;
		wxStaticText* m_staticText_engineHorsepower;
		wxTextCtrl* m_textCtrl_engineHorsepower;
		wxStaticText* staticText_doorQuantity;
		wxStaticText* m_staticText_doorQuantity;
		wxChoice* m_choice_doorQuantity;
		wxStaticText* staticText_price;
		wxStaticText* m_staticText_price;
		wxTextCtrl* m_textCtrl_price;
		wxStaticText* staticText_milleage;
		wxStaticText* m_staticText_milleage;
		wxTextCtrl* m_textCtrl_milleage;
		wxStaticText* staticText_color;
		wxStaticText* m_staticText_color;
		wxTextCtrl* m_textCtrl_color;
		wxStaticText* staticText_state;
		wxStaticText* m_staticText_state;
		wxTextCtrl* m_textCtrl_state;
		wxStaticText* staticText_additionalInformation;
		wxStaticText* m_staticText_additionalInformation;
		wxTextCtrl* m_textCtrl_additionalInformation;
		wxButton* edit_button;
		wxButton* close_button;

		// Virtual event handlers, overide them in your derived class
		virtual void OnEditButtonClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCloseButtonClicked( wxCommandEvent& event ) { event.Skip(); }


	public:

		VehicleEditDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Edycja pojazdu"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 491,586 ), long style = wxDEFAULT_DIALOG_STYLE );
		~VehicleEditDialog();

};

