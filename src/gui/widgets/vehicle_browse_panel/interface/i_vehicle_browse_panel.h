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
#include "gui/widgets/scrolled_vehicle_list_window/implementation/scrolled_vehicle_list_window.hpp"
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
#include <wx/scrolwin.h>
#include <wx/panel.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class IVehicleBrowsePanel
///////////////////////////////////////////////////////////////////////////////
class IVehicleBrowsePanel : public wxPanel
{
	private:

	protected:
		wxButton* m_button_refresh;
		wxButton* m_button_setFilters;
		CScrolledVehicleListWindow* m_scrolledWindow;
		wxButton* m_button_prevPage;
		wxButton* m_button_nextPage;

		// Virtual event handlers, overide them in your derived class
		virtual void OnRefreshButtonClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSetFiltersButtonClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnPrevPageButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnNextPageButtonClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		IVehicleBrowsePanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~IVehicleBrowsePanel();

};

