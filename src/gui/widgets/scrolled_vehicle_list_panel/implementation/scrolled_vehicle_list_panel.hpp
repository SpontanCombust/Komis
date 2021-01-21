﻿#ifndef __scrolled_vehicle_list_panel__
#define __scrolled_vehicle_list_panel__

/**
@file
Subclass of IScrolledVehicleListPanel, which is generated by wxFormBuilder.
*/

#include "../interface/i_scrolled_vehicle_list_panel.h"

//// end generated include

/** Implementing IScrolledVehicleListPanel */
class CScrolledVehicleListPanel : public IScrolledVehicleListPanel
{
	protected:
		// Handlers for IScrolledVehicleListPanel events.
		void OnPrevPageButtonClick( wxCommandEvent& event ) override;
		void OnNextPageButtonClick( wxCommandEvent& event ) override;
		void OnRefreshButtonClicked( wxCommandEvent& event ) override;
		void OnSetFiltersButtonClicked( wxCommandEvent& event ) override;
	public:
		/** Constructor */
		CScrolledVehicleListPanel( wxWindow* parent );
		CScrolledVehicleListPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~CScrolledVehicleListPanel();
	//// end generated class members

};

#endif // __scrolled_vehicle_list_panel__
