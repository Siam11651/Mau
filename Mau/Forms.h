///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/gdicmn.h>
#include <wx/aui/auibook.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/frame.h>
#include <wx/stattext.h>
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/statbox.h>
#include <wx/fontpicker.h>
#include <wx/statbmp.h>
#include <wx/stc/stc.h>

///////////////////////////////////////////////////////////////////////////

#define ID_FORM_EDITOR 1000
#define ID_PANEL_EDITOR 1001
#define ID_AUINOTEBOOK_EDITOR 1002
#define ID_MENU_ITEM_NEW 1003
#define ID_MENU_ITEM_OPEN 1004
#define ID_MENU_ITEM_SAVE 1005
#define ID_MENU_ITEM_EXIT 1006
#define ID_MENU_ITEM_FONT 1007
#define ID_MENU_ITEM_ABOUT 1008
#define ID_DIALOG_UNSAVED_FILE 1009
#define ID_PANEL_UNSAVED_FILE 1010
#define ID_DIALOG_FONT 1011
#define ID_PANEL_FONT 1012
#define ID_SB_SIZER_FONT 1013
#define ID_DIALOG_ABOUT 1014
#define ID_PANEL_ABOUT 1015
#define ID_BITMAP_ABOUT 1016
#define ID_STATIC_TEXT_ABOUT 1017

///////////////////////////////////////////////////////////////////////////////
/// Class FormEditor
///////////////////////////////////////////////////////////////////////////////
class FormEditor : public wxFrame
{
	private:

	protected:
		wxPanel* m_panel_editor;
		wxAuiNotebook* m_auinotebook_editor;
		wxMenuBar* m_menubar1;
		wxMenu* m_menuFile;
		wxMenu* m_menuOptions;
		wxMenu* m_menuHelp;

		// Virtual event handlers, overide them in your derived class
		virtual void Close_master( wxCloseEvent& event ) { event.Skip(); }
		virtual void AuiNotebookPageClose_file( wxAuiNotebookEvent& event ) { event.Skip(); }
		virtual void MenuSelect_new( wxCommandEvent& event ) { event.Skip(); }
		virtual void MenuSelect_open( wxCommandEvent& event ) { event.Skip(); }
		virtual void MenuSelect_save( wxCommandEvent& event ) { event.Skip(); }
		virtual void MenuSelect_exit( wxCommandEvent& event ) { event.Skip(); }
		virtual void MenuSelect_font( wxCommandEvent& event ) { event.Skip(); }
		virtual void MenuSelect_about( wxCommandEvent& event ) { event.Skip(); }


	public:

		FormEditor( wxWindow* parent, wxWindowID id = ID_FORM_EDITOR, const wxString& title = wxT("Mau Editor"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~FormEditor();

};

///////////////////////////////////////////////////////////////////////////////
/// Class DialogUnsavedFile
///////////////////////////////////////////////////////////////////////////////
class DialogUnsavedFile : public wxDialog
{
	private:

	protected:
		wxPanel* m_panel_usaved_file;
		wxStaticText* m_staticText_unsaved_file;
		wxButton* m_button_unsaved_file_yes;
		wxButton* m_button_unsaved_file_no;

		// Virtual event handlers, overide them in your derived class
		virtual void Click_confirm_save( wxCommandEvent& event ) { event.Skip(); }
		virtual void Click_no_save( wxCommandEvent& event ) { event.Skip(); }


	public:

		DialogUnsavedFile( wxWindow* parent, wxWindowID id = ID_DIALOG_UNSAVED_FILE, const wxString& title = wxT("File Not Saved"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_DIALOG_STYLE );
		~DialogUnsavedFile();

};

///////////////////////////////////////////////////////////////////////////////
/// Class DialogFont
///////////////////////////////////////////////////////////////////////////////
class DialogFont : public wxDialog
{
	private:

	protected:
		wxPanel* m_panel_font;
		wxPanel* m_panel4;
		wxStaticText* m_staticText_font;
		wxFontPickerCtrl* m_fontPicker;

		// Virtual event handlers, overide them in your derived class
		virtual void FontChanged( wxFontPickerEvent& event ) { event.Skip(); }


	public:

		DialogFont( wxWindow* parent, wxWindowID id = ID_DIALOG_FONT, const wxString& title = wxT("Font"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_DIALOG_STYLE );
		~DialogFont();

};

///////////////////////////////////////////////////////////////////////////////
/// Class DialogAbout
///////////////////////////////////////////////////////////////////////////////
class DialogAbout : public wxDialog
{
	private:

	protected:
		wxPanel* m_panelAbout;
		wxStaticBitmap* m_bitmap_about;
		wxStaticText* m_staticText_about;

	public:

		DialogAbout( wxWindow* parent, wxWindowID id = ID_DIALOG_ABOUT, const wxString& title = wxT("About"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );
		~DialogAbout();

};

///////////////////////////////////////////////////////////////////////////////
/// Class PanelFile
///////////////////////////////////////////////////////////////////////////////
class PanelFile : public wxPanel
{
	private:

	protected:
		wxBoxSizer* bSizerEditor;
		wxStyledTextCtrl* m_styled_text_ctrl;

		// Virtual event handlers, overide them in your derived class
		virtual void CharHook_styled_text_ctrl( wxKeyEvent& event ) { event.Skip(); }


	public:

		PanelFile( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~PanelFile();

};

