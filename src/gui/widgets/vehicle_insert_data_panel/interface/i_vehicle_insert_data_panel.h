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
#include "gui/widgets/vehicle_data_choices/implementation/vehicle_data_choices.hpp"
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
#include <wx/panel.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class IVehicleInsertDataPanel
///////////////////////////////////////////////////////////////////////////////
class IVehicleInsertDataPanel : public wxPanel
{
	private:

	protected:
		wxStaticText* m_staticText_vehicleType;
		CVehicleTypeChoice* m_choice_vehicleType;
		wxStaticText* m_staticText_brand;
		wxTextCtrl* m_textCtrl_brand;
		wxStaticText* m_staticText_model;
		wxTextCtrl* m_textCtrl_model;
		wxStaticText* m_staticText_fuelType;
		CVehicleFuelChoice* m_choice_fuelType;
		wxStaticText* m_staticText_transmission;
		CVehicleTransmissionChoice* m_choice_transmission;
		wxStaticText* m_staticText_wheelDrive;
		CVehicleWheelDriveChoice* m_choice_wheelDrive;
		wxStaticText* m_staticText_engineCapacity;
		wxTextCtrl* m_textCtrl_engineCapacity;
		wxStaticText* m_staticText_engineHorsepower;
		wxTextCtrl* m_textCtrl_engineHorsepower;
		wxStaticText* m_staticText_doorQuantity;
		CVehicleDoorQuantityChoice* m_choice_doorQuantity;
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

	public:

		IVehicleInsertDataPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~IVehicleInsertDataPanel();

};

