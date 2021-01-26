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
#include <wx/sizer.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/button.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class IVehicleViewDialog
///////////////////////////////////////////////////////////////////////////////
class IVehicleViewDialog : public wxDialog
{
	private:

	protected:
		wxStaticText* staticText_VehicleType;
		wxStaticText* m_staticText_VehicleType;
		wxStaticText* staticText_brand;
		wxStaticText* m_staticText_brand;
		wxStaticText* staticText_model;
		wxStaticText* m_staticText_model;
		wxStaticText* staticText_fuelType;
		wxStaticText* m_staticText_fuelType;
		wxStaticText* staticText_wheelDriveType;
		wxStaticText* m_staticText_transmissionType;
		wxStaticText* staticText_transmissionType;
		wxStaticText* m_staticText_wheelDriveType;
		wxStaticText* staticText_engineCapacity;
		wxStaticText* m_staticText_engineCapacity;
		wxStaticText* staticText_engineHorsepower;
		wxStaticText* m_staticText_engineHorsepower;
		wxStaticText* staticText_doorQuantity;
		wxStaticText* m_staticText_doorQuantity;
		wxStaticText* staticText_price;
		wxStaticText* m_staticText_price;
		wxStaticText* staticText_milleage;
		wxStaticText* m_staticText_milleage;
		wxStaticText* staticText_color;
		wxStaticText* m_staticText_color;
		wxStaticText* staticText_state;
		wxStaticText* m_staticText_state;
		wxStaticText* staticText_additionalInformation;
		wxStaticText* m_staticText_additionalInformation;
		wxButton* ok_button;

		// Virtual event handlers, overide them in your derived class
		virtual void OkButtonClicked( wxCommandEvent& event ) { event.Skip(); }


	public:

		IVehicleViewDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Pojazd"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_DIALOG_STYLE );
		~IVehicleViewDialog();

};

