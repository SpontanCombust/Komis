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
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/gdicmn.h>
#include <wx/button.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/panel.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class IScrolledVehicleListItemPanel
///////////////////////////////////////////////////////////////////////////////
class IScrolledVehicleListItemPanel : public wxPanel
{
	private:

	protected:
		wxButton* m_button_viewVehicle;
		wxButton* m_button_editVehicle;
		wxButton* m_button_sellVehicle;
		wxStaticText* m_staticText_brandAndModel;
		wxStaticText* m_staticText_stateLabel;
		wxStaticText* m_staticText_state;
		wxStaticText* m_staticText_mileageLabel;
		wxStaticText* m_staticText_mileage;
		wxStaticText* m_staticText_engineHorsepowerLabel;
		wxStaticText* m_staticText_engineHorsepower;
		wxStaticText* m_staticText_engineCapacityLabel;
		wxStaticText* m_staticText_engineCapacity;
		wxStaticText* m_staticText_price;

		// Virtual event handlers, overide them in your derived class
		virtual void OnViewVehicleButtonClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnEditVehicleButtonClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSellVehicleButtonClicked( wxCommandEvent& event ) { event.Skip(); }


	public:

		IScrolledVehicleListItemPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~IScrolledVehicleListItemPanel();

};

