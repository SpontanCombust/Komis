﻿#ifndef __VEHICLE_BROWSE_PANEL_H__
#define __VEHICLE_BROWSE_PANEL_H__

/**
@file
Subclass of IScrolledVehicleListPanel, which is generated by wxFormBuilder.
*/

#include "../interface/i_vehicle_browse_panel.h"
#include "database/vehicle_management/vehicle_manager.hpp"

//// end generated include

/** Implementing IScrolledVehicleListPanel */
class CVehicleBrowsePanel : public IVehicleBrowsePanel
{
	protected:
		CVehicleManager *m_databaseHandle;
		SVehicleComparatorDataBundle m_comparatorDataBundle;
		int m_vehicleComparatorFlags;

		std::vector< uint32_t > m_cachedVehicleIDs;
		std::vector< uint32_t >::iterator m_currentTopmostVehicleIDIterator;
	
		void removeVehiclesIfNeeded();

		void resetListItems();
		void setupListItems();

		void validatePageTurnButtons();

		void resetDatabaseCache();	

		// Handlers for IScrolledVehicleListPanel events.
		void OnPrevPageButtonClick( wxCommandEvent& event ) override;
		void OnNextPageButtonClick( wxCommandEvent& event ) override;
		void OnRefreshButtonClicked( wxCommandEvent& event ) override;
		void OnSetFiltersButtonClicked( wxCommandEvent& event ) override;
		
	public:
		/** Constructor */
		CVehicleBrowsePanel( wxWindow* parent );
		CVehicleBrowsePanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~CVehicleBrowsePanel();
	//// end generated class members
		void setDatabaseHandle( CVehicleManager *database );

		void refreshListItems();
};

#endif // __VEHICLE_BROWSE_PANEL_H__