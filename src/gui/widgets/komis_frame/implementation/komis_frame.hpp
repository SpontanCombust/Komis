#ifndef __KOMIS_FRAME_H__
#define __KOMIS_FRAME_H__

#include "../interface/i_komis_frame.h"
#include "database/vehicle_management/vehicle_manager.hpp"

class CKomisFrame : public IKomisFrame
{
private:
    CVehicleManager *m_vehicleManager;
    
    static bool m_shouldSaveDB;

    bool m_didInitialSave;
    std::string m_activeDBName;
    std::string m_activeDBPath;

    void updateWindowTitle();

    std::vector< SVehicle* > getAllVehicleHandles();
    
    /** Returns false if user canceled out of operation (in case of uninitialized DB) or there was an error, true in any other scenario.
     *  If forceNewSave is set to true it will always attempt to save DB to a new file.
     *  Through fileName returns a name of the saved file if fileName is not null.
     */
    bool saveActiveDB( bool forceNewSave = false );

    /** Will pull up a dialog window asking whether to save active DB if it's needed (if m_shouldSaveDB is true)
     *  Returns false if user canceled out of operation, true in any other scenario.
     */
    bool promptSaveDBIfNeeded();

public:
    CKomisFrame( wxWindow *parent );
    ~CKomisFrame();

    static void setShouldSave( bool shouldSave );

    /** Creates a blank database and sets it as active.
     *  If there is some data in the current active DB already asks if it should be saved.
     */
    virtual void OnNewDatabase( wxCommandEvent& event ) override;

    /** Opens DB stored in a file.
     *  If there is some data in the current active DB already asks if it should be saved.
     *  Sets the opened database as an active database.
     */
    virtual void OnOpenDatabase( wxCommandEvent& event ) override;

    /** Loads DB stored in a file and imports its contents to current project.
     */
    virtual void OnImportDatabase( wxCommandEvent& event ) override;

    /** Saves active DB. 
     *  If it hasn't been saved before (it's a new DB) save it and set as active.
     */
    virtual void OnSaveDatabase( wxCommandEvent& event ) override;

    /** Saves active DB and set as active.
     */
    virtual void OnSaveDatabaseAs( wxCommandEvent& event ) override;

    /** Asks to close the application.
     *  If the active DB hasn't been saved, ask to do it.
     */
    virtual void OnClose( wxCommandEvent& event ) override;

    /** Closes the application.
     *  If the active DB hasn't been saved, ask to do it.
     */
    virtual void OnClose( wxCloseEvent& event ) override;

    /** Displays information about the application
     */
    void OnDisplayAbout( wxCommandEvent& event ) override;
};

#endif // __KOMIS_FRAME_H__