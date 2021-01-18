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
#include "gui/widgets/scrolled_vehicle_list_item_panel/implementation/scrolled_vehicle_list_item_panel.hpp"
#include <wx/panel.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/sizer.h>
#include <wx/scrolwin.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/button.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class IScrolledVehicleListPanel
///////////////////////////////////////////////////////////////////////////////
class IScrolledVehicleListPanel : public wxPanel
{
	private:

	protected:
		wxScrolledWindow* m_scrolledWindow;
		CScrolledVehicleListItemPanel* m_panel_vehicleItem01;
		CScrolledVehicleListItemPanel* m_panel_vehicleItem02;
		CScrolledVehicleListItemPanel* m_panel_vehicleItem03;
		CScrolledVehicleListItemPanel* m_panel_vehicleItem04;
		CScrolledVehicleListItemPanel* m_panel_vehicleItem05;
		CScrolledVehicleListItemPanel* m_panel_vehicleItem06;
		CScrolledVehicleListItemPanel* m_panel_vehicleItem07;
		CScrolledVehicleListItemPanel* m_panel_vehicleItem08;
		CScrolledVehicleListItemPanel* m_panel_vehicleItem09;
		CScrolledVehicleListItemPanel* m_panel_vehicleItem10;
		wxButton* m_button_prevPage;
		wxButton* m_button_nextPage;

		// Virtual event handlers, overide them in your derived class
		virtual void OnPrevPageButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnNextPageButtonClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		IScrolledVehicleListPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~IScrolledVehicleListPanel();

};

