#include "vehicle_browse_panel.hpp"

#include <wx/msgdlg.h>

CVehicleBrowsePanel::CVehicleBrowsePanel( wxWindow* parent )
:
IVehicleBrowsePanel( parent )
{
    m_databaseHandle = nullptr;
}

CVehicleBrowsePanel::CVehicleBrowsePanel(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name) 
:
IVehicleBrowsePanel( parent, id, pos, size, style, name )
{
    m_databaseHandle = nullptr;
}

CVehicleBrowsePanel::~CVehicleBrowsePanel() 
{

}



void CVehicleBrowsePanel::removeVehiclesIfNeeded() 
{
    CScrolledVehicleListItemPanel *vehListItem;
    for (int i = 0; i < m_scrolledWindow->getVehicleItemCount(); i++)
    {
        vehListItem = (*m_scrolledWindow)[i];
        if( vehListItem->getShouldVehicleBeDeleted() )
        {
            uint32_t id;
            std::vector< uint32_t >::iterator it;

            id = vehListItem->getRepresentedVehicle()->ID;
            it = std::find( m_cachedVehicleIDs.begin(), m_cachedVehicleIDs.end(), id );

            try
            {
                m_databaseHandle->removeVehicleByID( id );   
            }
            catch( const char *e )
            {
                wxMessageBox( "[CVehicleBrowsePanel] " + std::string(e) );
            }
            
            if( it != m_cachedVehicleIDs.end() )
            {
                m_cachedVehicleIDs.erase( it );
            }
            else
            {
                wxMessageBox( "[CVehicleBrowsePanel] Failed to erase ID from the cache!" );
            }
        }
    }
}

void CVehicleBrowsePanel::validatePageTurnButtons() 
{
    if( m_currentTopmostVehicleIDIterator == m_cachedVehicleIDs.begin() )
    {
        m_button_prevPage->Disable();
    }
    else
    {
        m_button_prevPage->Enable();
    }
    
    int i = 0;
    while( i < m_scrolledWindow->getVehicleItemCount() && ( m_currentTopmostVehicleIDIterator + i ) != m_cachedVehicleIDs.end() )
    {
        i++;
    }
    
    if( ( m_currentTopmostVehicleIDIterator + i ) == m_cachedVehicleIDs.end() )
    {
        m_button_nextPage->Disable();
    }
    else
    {
        m_button_nextPage->Enable();
    }
    
}

void CVehicleBrowsePanel::setupListItems() 
{
    bool reachedIDEnd;
    CScrolledVehicleListItemPanel *vehListItem;

    if( m_cachedVehicleIDs.empty() )
    {
        reachedIDEnd = true;
    }
    else
    {
        reachedIDEnd = false;
    }

    for (int i = 0; i < m_scrolledWindow->getVehicleItemCount(); i++)
    {
        vehListItem = (*m_scrolledWindow)[i];
        if( !reachedIDEnd )
        {
            if( ( m_currentTopmostVehicleIDIterator + i ) != m_cachedVehicleIDs.end() )
            {
                uint32_t id = *( m_currentTopmostVehicleIDIterator + i );
                vehListItem->setRepresentedVehicle( m_databaseHandle->getVehicleHandleByID( id ) );
                vehListItem->resetLabelStaticTexts();
                vehListItem->setVehicleDataStaticTexts();
                vehListItem->enableAllButtons();
            }
            else
            {   
                reachedIDEnd = true;
            }
        }
        else
        {
            vehListItem->setRepresentedVehicle( nullptr );
            vehListItem->clearAllStaticTexts();
            vehListItem->disableAllButtons();
        }
        vehListItem->setShouldVehicleBeDeleted( false );   
    }
}

void CVehicleBrowsePanel::resetDatabaseCache() 
{
    // TODO adjust it for filers
    m_cachedVehicleIDs = m_databaseHandle->getAllVehicleIDs();

    m_currentTopmostVehicleIDIterator = m_cachedVehicleIDs.begin();
}

void CVehicleBrowsePanel::refreshListItems() 
{
    removeVehiclesIfNeeded();
    resetDatabaseCache();
    setupListItems();
    validatePageTurnButtons();
}



void CVehicleBrowsePanel::OnPrevPageButtonClick( wxCommandEvent& event )
{
    // validatePageTurnButtons() ensures there are some items behind the current topmost item in the list

    // move the current topmost item iterator to the topmost element of the previous page (move max. 10 items towards the beginning of ID vector)
    for (int i = 0; i < m_scrolledWindow->getVehicleItemCount() && m_currentTopmostVehicleIDIterator != m_cachedVehicleIDs.begin(); i++)
    {
        --m_currentTopmostVehicleIDIterator;
    }
    
    // remove any vehicles that should be deleted from the current page
    removeVehiclesIfNeeded();    

    // setup list items according to recently changed topmost vehicle ID iterator
    setupListItems();

    // run the check on page turn buttons (whether there are items before and after current page)
    validatePageTurnButtons();
}



void CVehicleBrowsePanel::OnNextPageButtonClick( wxCommandEvent& event )
{
    // validatePageTurnButtons() ensures there are some items after the current lowest item in the list

    // move the current topmost item iterator to the topmost element of the next page (move max. 10 items towards the end of ID vector)
    for (int i = 0; i < m_scrolledWindow->getVehicleItemCount() && m_currentTopmostVehicleIDIterator != m_cachedVehicleIDs.end(); i++)
    {
        ++m_currentTopmostVehicleIDIterator;
    }
    
    // remove any vehicles that should be deleted from the current page
    removeVehiclesIfNeeded();    

    // setup list items according to recently changed topmost vehicle ID iterator
    setupListItems();

    // run the check on page turn buttons (whether there are items before and after current page)
    validatePageTurnButtons();
}

void CVehicleBrowsePanel::OnRefreshButtonClicked(wxCommandEvent& event) 
{
    refreshListItems();   
}

void CVehicleBrowsePanel::OnSetFiltersButtonClicked(wxCommandEvent& event) 
{
// TODO: Implement OnSetFiltersButtonClicked
}



void CVehicleBrowsePanel::setDatabaseHandle( CVehicleManager *database ) 
{
    m_databaseHandle = database;
}
