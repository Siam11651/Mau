///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "Forms.h"

///////////////////////////////////////////////////////////////////////////

FormEditor::FormEditor( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 500,300 ), wxDefaultSize );

	wxBoxSizer* bSizerEditor1;
	bSizerEditor1 = new wxBoxSizer( wxVERTICAL );

	m_panel_editor = new wxPanel( this, ID_PANEL_EDITOR, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerEditor2;
	bSizerEditor2 = new wxBoxSizer( wxVERTICAL );

	m_auinotebook_editor = new wxAuiNotebook( m_panel_editor, ID_AUINOTEBOOK_EDITOR, wxDefaultPosition, wxDefaultSize, wxAUI_NB_DEFAULT_STYLE );

	bSizerEditor2->Add( m_auinotebook_editor, 1, wxEXPAND | wxALL, 0 );


	m_panel_editor->SetSizer( bSizerEditor2 );
	m_panel_editor->Layout();
	bSizerEditor2->Fit( m_panel_editor );
	bSizerEditor1->Add( m_panel_editor, 1, wxEXPAND | wxALL, 0 );


	this->SetSizer( bSizerEditor1 );
	this->Layout();
	m_menubar1 = new wxMenuBar( 0 );
	m_menuFile = new wxMenu();
	wxMenuItem* m_menuItemNew;
	m_menuItemNew = new wxMenuItem( m_menuFile, ID_MENU_ITEM_NEW, wxString( wxT("New") ) + wxT('\t') + wxT("Ctrl+N"), wxEmptyString, wxITEM_NORMAL );
	m_menuFile->Append( m_menuItemNew );

	wxMenuItem* m_menuItemOpen;
	m_menuItemOpen = new wxMenuItem( m_menuFile, ID_MENU_ITEM_OPEN, wxString( wxT("Open") ) + wxT('\t') + wxT("Ctrl+O"), wxEmptyString, wxITEM_NORMAL );
	m_menuFile->Append( m_menuItemOpen );

	wxMenuItem* m_menuItemSave;
	m_menuItemSave = new wxMenuItem( m_menuFile, ID_MENU_ITEM_SAVE, wxString( wxT("Save") ) + wxT('\t') + wxT("Ctrl+S"), wxEmptyString, wxITEM_NORMAL );
	m_menuFile->Append( m_menuItemSave );

	m_menuFile->AppendSeparator();

	wxMenuItem* m_menuItem_exit;
	m_menuItem_exit = new wxMenuItem( m_menuFile, ID_MENU_ITEM_EXIT, wxString( wxT("Exit") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuFile->Append( m_menuItem_exit );

	m_menubar1->Append( m_menuFile, wxT("File") );

	m_menuOptions = new wxMenu();
	wxMenuItem* m_menuItemFont;
	m_menuItemFont = new wxMenuItem( m_menuOptions, ID_MENU_ITEM_FONT, wxString( wxT("Font") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuOptions->Append( m_menuItemFont );

	m_menubar1->Append( m_menuOptions, wxT("Options") );

	m_menuHelp = new wxMenu();
	wxMenuItem* m_menuItemAbout;
	m_menuItemAbout = new wxMenuItem( m_menuHelp, ID_MENU_ITEM_ABOUT, wxString( wxT("About") ) + wxT('\t') + wxT("F1"), wxEmptyString, wxITEM_NORMAL );
	m_menuHelp->Append( m_menuItemAbout );

	m_menubar1->Append( m_menuHelp, wxT("Help") );

	this->SetMenuBar( m_menubar1 );


	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FormEditor::Close_master ) );
	m_auinotebook_editor->Connect( wxEVT_COMMAND_AUINOTEBOOK_PAGE_CLOSE, wxAuiNotebookEventHandler( FormEditor::AuiNotebookPageClose_file ), NULL, this );
	m_menuFile->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( FormEditor::MenuSelect_new ), this, m_menuItemNew->GetId());
	m_menuFile->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( FormEditor::MenuSelect_open ), this, m_menuItemOpen->GetId());
	m_menuFile->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( FormEditor::MenuSelect_save ), this, m_menuItemSave->GetId());
	m_menuFile->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( FormEditor::MenuSelect_exit ), this, m_menuItem_exit->GetId());
	m_menuOptions->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( FormEditor::MenuSelect_font ), this, m_menuItemFont->GetId());
	m_menuHelp->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( FormEditor::MenuSelect_about ), this, m_menuItemAbout->GetId());
}

FormEditor::~FormEditor()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FormEditor::Close_master ) );
	m_auinotebook_editor->Disconnect( wxEVT_COMMAND_AUINOTEBOOK_PAGE_CLOSE, wxAuiNotebookEventHandler( FormEditor::AuiNotebookPageClose_file ), NULL, this );

}

DialogUnsavedFile::DialogUnsavedFile( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer_unsaved_file_1;
	bSizer_unsaved_file_1 = new wxBoxSizer( wxVERTICAL );

	m_panel_usaved_file = new wxPanel( this, ID_PANEL_UNSAVED_FILE, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer_unsaved_file_2;
	bSizer_unsaved_file_2 = new wxBoxSizer( wxVERTICAL );

	m_staticText_unsaved_file = new wxStaticText( m_panel_usaved_file, wxID_ANY, wxT("Save file before closing?"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_unsaved_file->Wrap( -1 );
	bSizer_unsaved_file_2->Add( m_staticText_unsaved_file, 0, wxALL, 5 );

	wxBoxSizer* bSizer_unsaved_file_3;
	bSizer_unsaved_file_3 = new wxBoxSizer( wxHORIZONTAL );

	m_button_unsaved_file_yes = new wxButton( m_panel_usaved_file, wxID_ANY, wxT("Yes"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer_unsaved_file_3->Add( m_button_unsaved_file_yes, 0, wxALL, 5 );

	m_button_unsaved_file_no = new wxButton( m_panel_usaved_file, wxID_ANY, wxT("No"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer_unsaved_file_3->Add( m_button_unsaved_file_no, 0, wxALL, 5 );


	bSizer_unsaved_file_2->Add( bSizer_unsaved_file_3, 1, wxEXPAND, 5 );


	m_panel_usaved_file->SetSizer( bSizer_unsaved_file_2 );
	m_panel_usaved_file->Layout();
	bSizer_unsaved_file_2->Fit( m_panel_usaved_file );
	bSizer_unsaved_file_1->Add( m_panel_usaved_file, 1, wxEXPAND | wxALL, 5 );


	this->SetSizer( bSizer_unsaved_file_1 );
	this->Layout();
	bSizer_unsaved_file_1->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	m_button_unsaved_file_yes->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogUnsavedFile::Click_confirm_save ), NULL, this );
	m_button_unsaved_file_no->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogUnsavedFile::Click_no_save ), NULL, this );
}

DialogUnsavedFile::~DialogUnsavedFile()
{
	// Disconnect Events
	m_button_unsaved_file_yes->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogUnsavedFile::Click_confirm_save ), NULL, this );
	m_button_unsaved_file_no->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogUnsavedFile::Click_no_save ), NULL, this );

}

DialogFont::DialogFont( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizerFont1;
	bSizerFont1 = new wxBoxSizer( wxVERTICAL );

	m_panel_font = new wxPanel( this, ID_PANEL_FONT, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerFont2;
	bSizerFont2 = new wxBoxSizer( wxVERTICAL );

	m_panel4 = new wxPanel( m_panel_font, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panel4->SetMaxSize( wxSize( -1,75 ) );

	wxStaticBoxSizer* sbSizer_font;
	sbSizer_font = new wxStaticBoxSizer( new wxStaticBox( m_panel4, ID_SB_SIZER_FONT, wxT("Preview") ), wxVERTICAL );

	m_staticText_font = new wxStaticText( sbSizer_font->GetStaticBox(), wxID_ANY, wxT("Sample Text"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_font->Wrap( -1 );
	sbSizer_font->Add( m_staticText_font, 0, wxALL, 10 );


	m_panel4->SetSizer( sbSizer_font );
	m_panel4->Layout();
	sbSizer_font->Fit( m_panel4 );
	bSizerFont2->Add( m_panel4, 1, wxEXPAND | wxALL, 5 );

	m_fontPicker = new wxFontPickerCtrl( m_panel_font, wxID_ANY, wxFont( 22, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Constantia") ), wxDefaultPosition, wxDefaultSize, 0 );
	m_fontPicker->SetMaxPointSize( 100 );
	bSizerFont2->Add( m_fontPicker, 0, wxALL, 5 );


	m_panel_font->SetSizer( bSizerFont2 );
	m_panel_font->Layout();
	bSizerFont2->Fit( m_panel_font );
	bSizerFont1->Add( m_panel_font, 1, wxEXPAND | wxALL, 0 );


	this->SetSizer( bSizerFont1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_fontPicker->Connect( wxEVT_COMMAND_FONTPICKER_CHANGED, wxFontPickerEventHandler( DialogFont::FontChanged ), NULL, this );
}

DialogFont::~DialogFont()
{
	// Disconnect Events
	m_fontPicker->Disconnect( wxEVT_COMMAND_FONTPICKER_CHANGED, wxFontPickerEventHandler( DialogFont::FontChanged ), NULL, this );

}

DialogAbout::DialogAbout( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizerHelp;
	bSizerHelp = new wxBoxSizer( wxVERTICAL );

	m_panelAbout = new wxPanel( this, ID_PANEL_ABOUT, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerAbout1;
	bSizerAbout1 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizerAbout2;
	bSizerAbout2 = new wxBoxSizer( wxHORIZONTAL );

	m_bitmap_about = new wxStaticBitmap( m_panelAbout, ID_BITMAP_ABOUT, wxBitmap( wxT("resources/icons/Mau.bmp"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerAbout2->Add( m_bitmap_about, 0, wxALL, 5 );

	m_staticText_about = new wxStaticText( m_panelAbout, ID_STATIC_TEXT_ABOUT, wxT("\nMau Text Editor"), wxDefaultPosition, wxSize( -1,62 ), 0 );
	m_staticText_about->Wrap( -1 );
	m_staticText_about->SetFont( wxFont( 18, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );

	bSizerAbout2->Add( m_staticText_about, 0, wxALL, 5 );


	bSizerAbout1->Add( bSizerAbout2, 1, wxEXPAND, 0 );


	m_panelAbout->SetSizer( bSizerAbout1 );
	m_panelAbout->Layout();
	bSizerAbout1->Fit( m_panelAbout );
	bSizerHelp->Add( m_panelAbout, 1, wxEXPAND | wxALL, 0 );


	this->SetSizer( bSizerHelp );
	this->Layout();
	bSizerHelp->Fit( this );

	this->Centre( wxBOTH );
}

DialogAbout::~DialogAbout()
{
}

PanelFile::PanelFile( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	bSizerEditor = new wxBoxSizer( wxVERTICAL );

	m_styled_text_ctrl = new wxStyledTextCtrl( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, wxEmptyString );
	m_styled_text_ctrl->SetUseTabs( true );
	m_styled_text_ctrl->SetTabWidth( 4 );
	m_styled_text_ctrl->SetIndent( 4 );
	m_styled_text_ctrl->SetTabIndents( true );
	m_styled_text_ctrl->SetBackSpaceUnIndents( true );
	m_styled_text_ctrl->SetViewEOL( false );
	m_styled_text_ctrl->SetViewWhiteSpace( false );
	m_styled_text_ctrl->SetMarginWidth( 2, 0 );
	m_styled_text_ctrl->SetIndentationGuides( true );
	m_styled_text_ctrl->SetMarginWidth( 1, 0 );
	m_styled_text_ctrl->SetMarginType( 0, wxSTC_MARGIN_NUMBER );
	m_styled_text_ctrl->SetMarginWidth( 0, m_styled_text_ctrl->TextWidth( wxSTC_STYLE_LINENUMBER, wxT("_99999") ) );
	{
		wxFont font = wxFont( 16, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Consolas") );
		m_styled_text_ctrl->StyleSetFont( wxSTC_STYLE_DEFAULT, font );
	}
	m_styled_text_ctrl->MarkerDefine( wxSTC_MARKNUM_FOLDER, wxSTC_MARK_BOXPLUS );
	m_styled_text_ctrl->MarkerSetBackground( wxSTC_MARKNUM_FOLDER, wxColour( wxT("BLACK") ) );
	m_styled_text_ctrl->MarkerSetForeground( wxSTC_MARKNUM_FOLDER, wxColour( wxT("WHITE") ) );
	m_styled_text_ctrl->MarkerDefine( wxSTC_MARKNUM_FOLDEROPEN, wxSTC_MARK_BOXMINUS );
	m_styled_text_ctrl->MarkerSetBackground( wxSTC_MARKNUM_FOLDEROPEN, wxColour( wxT("BLACK") ) );
	m_styled_text_ctrl->MarkerSetForeground( wxSTC_MARKNUM_FOLDEROPEN, wxColour( wxT("WHITE") ) );
	m_styled_text_ctrl->MarkerDefine( wxSTC_MARKNUM_FOLDERSUB, wxSTC_MARK_EMPTY );
	m_styled_text_ctrl->MarkerDefine( wxSTC_MARKNUM_FOLDEREND, wxSTC_MARK_BOXPLUS );
	m_styled_text_ctrl->MarkerSetBackground( wxSTC_MARKNUM_FOLDEREND, wxColour( wxT("BLACK") ) );
	m_styled_text_ctrl->MarkerSetForeground( wxSTC_MARKNUM_FOLDEREND, wxColour( wxT("WHITE") ) );
	m_styled_text_ctrl->MarkerDefine( wxSTC_MARKNUM_FOLDEROPENMID, wxSTC_MARK_BOXMINUS );
	m_styled_text_ctrl->MarkerSetBackground( wxSTC_MARKNUM_FOLDEROPENMID, wxColour( wxT("BLACK") ) );
	m_styled_text_ctrl->MarkerSetForeground( wxSTC_MARKNUM_FOLDEROPENMID, wxColour( wxT("WHITE") ) );
	m_styled_text_ctrl->MarkerDefine( wxSTC_MARKNUM_FOLDERMIDTAIL, wxSTC_MARK_EMPTY );
	m_styled_text_ctrl->MarkerDefine( wxSTC_MARKNUM_FOLDERTAIL, wxSTC_MARK_EMPTY );
	m_styled_text_ctrl->SetSelBackground( true, wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHT ) );
	m_styled_text_ctrl->SetSelForeground( true, wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	m_styled_text_ctrl->SetFont( wxFont( 16, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Consolas") ) );

	bSizerEditor->Add( m_styled_text_ctrl, 1, wxEXPAND, 5 );


	this->SetSizer( bSizerEditor );
	this->Layout();
	bSizerEditor->Fit( this );

	// Connect Events
	m_styled_text_ctrl->Connect( wxEVT_CHAR_HOOK, wxKeyEventHandler( PanelFile::CharHook_styled_text_ctrl ), NULL, this );
}

PanelFile::~PanelFile()
{
	// Disconnect Events
	m_styled_text_ctrl->Disconnect( wxEVT_CHAR_HOOK, wxKeyEventHandler( PanelFile::CharHook_styled_text_ctrl ), NULL, this );

}
