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
#include "gui/widgets/vehicle_browse_panel/implementation/vehicle_browse_panel.hpp"
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/notebook.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class IKomisFrame
///////////////////////////////////////////////////////////////////////////////
class IKomisFrame : public wxFrame
{
	private:

	protected:
		wxMenuBar* m_menubar;
		wxMenu* m_menu_file;
		wxMenu* m_menu_help;
		wxNotebook* m_notebook;
		wxPanel* m_notebook_pageGeneral;
		wxStaticBitmap* m_bitmap_banner;
		wxStaticText* m_staticText1;
		wxPanel* m_notebook_pageVehicles;
		CVehicleBrowsePanel* m_notebook_pageVehicles_panel;

		// Virtual event handlers, overide them in your derived class
		virtual void OnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnNewDatabase( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnOpenDatabase( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnImportDatabase( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSaveDatabase( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSaveDatabaseAs( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClose( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnDisplayAbout( wxCommandEvent& event ) { event.Skip(); }


	public:

		IKomisFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Komis"), const wxPoint& pos = wxPoint( -1,0 ), const wxSize& size = wxSize( 900,700 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~IKomisFrame();

};

