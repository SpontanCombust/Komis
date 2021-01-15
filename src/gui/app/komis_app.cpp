#include "komis_app.hpp"

#include "gui/widgets/komis_frame/implementation/komis_frame.hpp"

bool CKomisApp::OnInit() 
{
    wxLocale *locale = new wxLocale( wxLANGUAGE_POLISH );
    CKomisFrame *komisFrame = new CKomisFrame( nullptr );
    komisFrame->Show();
    komisFrame->Move( wxPoint( -1, 100 ) );

    return true;
}

IMPLEMENT_APP( CKomisApp )
