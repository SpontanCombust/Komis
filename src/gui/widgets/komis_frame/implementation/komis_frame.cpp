#include "komis_frame.hpp"

#include "gui/widgets/vehicle_creator_dialog/implementation/vehicle_creator_dialog.hpp"
#include "serialization/vehicle_serializer.hpp"

#include <wx/filedlg.h>
#include <wx/msgdlg.h>

CKomisFrame::CKomisFrame( wxWindow *parent ) : IKomisFrame( parent ) 
{
    m_vehicleManager = new CVehicleManager();

    m_notebook_pageVehicles_panel->setDatabaseHandle( m_vehicleManager );
    m_notebook_pageVehicles_panel->refreshListItems();

    m_didInitialSave = false;
    m_activeDBPath = "";
    m_activeDBName = "Bez nazwy";
    updateWindowTitle();
    m_shouldSaveDB = false;
}

CKomisFrame::~CKomisFrame() 
{
    delete m_vehicleManager;
}

bool CKomisFrame::m_shouldSaveDB = false;



void CKomisFrame::setShouldSave( bool shouldSave ) 
{
    m_shouldSaveDB = shouldSave;
}

void CKomisFrame::updateWindowTitle()
{
    SetTitle( "KOMIS - " + m_activeDBName );
}



std::vector< SVehicle* > CKomisFrame::getAllVehicleHandles() 
{
    std::vector< uint32_t > vehicleIDs;
    std::vector< SVehicle* > vehicleHandles;

    vehicleIDs = m_vehicleManager->getAllVehicleIDs();

    for( uint32_t id : vehicleIDs )
    {
        vehicleHandles.push_back( m_vehicleManager->getVehicleHandleByID( id ) );
    }

    return vehicleHandles;
}

bool CKomisFrame::saveActiveDB( bool forceNewSave ) 
{
    size_t pos;
    std::string extension;
    std::string filePath;
    std::string fileName;
    bool shouldWhipeOutFile;

    if( !m_didInitialSave || forceNewSave )
    {
        wxFileDialog fileDialog = wxFileDialog( this, _("Zapisz bazę danych pojazdów KOMISu"), "", "", "Baza danych KOMIS (*.komisdb)|*.komisdb", wxFD_SAVE | wxFD_OVERWRITE_PROMPT );
        if( fileDialog.ShowModal() == wxID_CANCEL )
        {
            return false;
        }

        filePath = fileDialog.GetPath().ToStdString();
        fileName = fileDialog.GetFilename().ToStdString();
        shouldWhipeOutFile = true;

        pos = filePath.find_last_of( '.' );
        if( pos != std::string::npos )
        {
            extension = filePath.substr( pos + 1 );

            if( extension != "komisdb" )
            {
                filePath += "komisdb";
            }           
        }
    }
    else
    {
        filePath = m_activeDBPath;
        fileName = m_activeDBName;
        shouldWhipeOutFile = false;
    }

    if( !writeVehiclesToFile( filePath.c_str(), getAllVehicleHandles(), shouldWhipeOutFile ) )
    {
        wxMessageBox( _("Błąd przy zapisie bazy danych Komisu!"), _("Błąd"), wxOK | wxICON_ERROR, this, -1, -1 );
        return false;
    }

    m_activeDBPath = filePath;
    m_activeDBName = fileName;
    updateWindowTitle();

    return true;
}

bool CKomisFrame::promptSaveDBIfNeeded() 
{
    if( m_shouldSaveDB )
    {
        int answer = wxMessageBox( _("Istnieją niezapisane zmiany w obecnej bazie danych. Zapisać?"), "Uwaga", wxYES | wxNO | wxCANCEL, this, -1, -1 );

        if( answer == wxCANCEL )
        {
            return false;
        }
        else if( answer == wxYES )
        {
            return saveActiveDB();
        }
    }

    return true;
}



void CKomisFrame::OnNewDatabase(wxCommandEvent& event) 
{
    if( !promptSaveDBIfNeeded() )
        return;
    
    m_vehicleManager->removeAllVehicles();
    m_notebook_pageVehicles_panel->refreshListItems();
    m_didInitialSave = false;
    m_shouldSaveDB = false;
    m_activeDBPath = "";
    m_activeDBName = "Bez nazwy";
    updateWindowTitle();
}

void CKomisFrame::OnOpenDatabase(wxCommandEvent& event) 
{
    if( !promptSaveDBIfNeeded() )
        return;
    
    wxFileDialog fileDialog = wxFileDialog( this, _("Wczytaj bazę danych pojazdów KOMISu"), "", "", "Baza danych KOMIS (*.komisdb)|*.komisdb", wxFD_OPEN | wxFD_FILE_MUST_EXIST );

    if( fileDialog.ShowModal() == wxID_CANCEL )
    {
        return;
    }

    std::vector< SVehicle > vehicles;
    if( !readVehiclesFromFile( fileDialog.GetPath(), &vehicles ) )
    {
        wxMessageBox( _("Błąd przy odczycie bazy danych Komisu!"), _("Błąd"), wxOK | wxICON_ERROR, this, -1, -1 );
        return;
    }

    m_vehicleManager->removeAllVehicles();

    for( SVehicle& v : vehicles )
    {
        m_vehicleManager->addVehicle( v.basicData, v.technicalData, v.specimenData );
    }

    m_notebook_pageVehicles_panel->refreshListItems();
    m_didInitialSave = true;
    m_shouldSaveDB = false;
    m_activeDBPath = fileDialog.GetPath();
    m_activeDBName = fileDialog.GetFilename().ToStdString();
    updateWindowTitle();
}

void CKomisFrame::OnImportDatabase(wxCommandEvent& event) 
{    
    wxFileDialog fileDialog = wxFileDialog( this, _("Wczytaj bazę danych pojazdów KOMISu"), "", "", "Baza danych KOMIS (*.komisdb)|*.komisdb", wxFD_OPEN | wxFD_FILE_MUST_EXIST );

    if( fileDialog.ShowModal() == wxID_CANCEL )
    {
        return;
    }

    std::vector< SVehicle > vehicles;
    if( !readVehiclesFromFile( fileDialog.GetPath(), &vehicles ) )
    {
        wxMessageBox( _("Błąd przy odczycie bazy danych Komisu!"), _("Błąd"), wxOK | wxICON_ERROR, this, -1, -1 );
        return;
    }

    for( SVehicle& v : vehicles )
    {
        m_vehicleManager->addVehicle( v.basicData, v.technicalData, v.specimenData );
    }

    m_notebook_pageVehicles_panel->refreshListItems();
    m_shouldSaveDB = true;
}

void CKomisFrame::OnSaveDatabase(wxCommandEvent& event) 
{
    if( saveActiveDB() )
    {
        m_didInitialSave = true;
        m_shouldSaveDB = false;
    }
}

void CKomisFrame::OnSaveDatabaseAs(wxCommandEvent& event) 
{
    if( saveActiveDB( true ) )
    {
        m_didInitialSave = true;
        m_shouldSaveDB = false;
    }
}

void CKomisFrame::OnClose(wxCommandEvent& event) 
{
    Close();
}

void CKomisFrame::OnClose(wxCloseEvent& event) 
{
    if( promptSaveDBIfNeeded() )
    {
        event.Skip();
    }
}

void CKomisFrame::OnDisplayAbout(wxCommandEvent& event) 
{
    std::string msg =   
"Program pomagający w pracy w komisie samochodowym.\n\
Zarządza bazą danych przetrzymywanych w nim pojazdów.\n\
Pozwala na dodawanie, edytowanie i sprzedawanie pojazdów.\n\n\
@2020 Przemysław Cedro, Jakub Celuch | All Right Reserved";

    wxMessageBox( msg, _("O programie Komis"), wxOK | wxICON_QUESTION, this, -1, -1 );
}
