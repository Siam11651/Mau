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

	wxBoxSizer* bSizerMaster;
	bSizerMaster = new wxBoxSizer( wxVERTICAL );

	m_panelEditor = new wxPanel( this, ID_PANEL_EDITOR, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	bSizerEditor = new wxBoxSizer( wxVERTICAL );

	m_styled_text_ctrl_1 = new wxStyledTextCtrl( m_panelEditor, ID_STYLED_TEXT_CTRL_1, wxDefaultPosition, wxDefaultSize, 0, wxEmptyString );
	m_styled_text_ctrl_1->SetUseTabs( true );
	m_styled_text_ctrl_1->SetTabWidth( 4 );
	m_styled_text_ctrl_1->SetIndent( 4 );
	m_styled_text_ctrl_1->SetTabIndents( true );
	m_styled_text_ctrl_1->SetBackSpaceUnIndents( true );
	m_styled_text_ctrl_1->SetViewEOL( false );
	m_styled_text_ctrl_1->SetViewWhiteSpace( false );
	m_styled_text_ctrl_1->SetMarginWidth( 2, 0 );
	m_styled_text_ctrl_1->SetIndentationGuides( true );
	m_styled_text_ctrl_1->SetMarginWidth( 1, 0 );
	m_styled_text_ctrl_1->SetMarginType( 0, wxSTC_MARGIN_NUMBER );
	m_styled_text_ctrl_1->SetMarginWidth( 0, m_styled_text_ctrl_1->TextWidth( wxSTC_STYLE_LINENUMBER, wxT("_99999") ) );
	{
		wxFont font = wxFont( 16, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Consolas") );
		m_styled_text_ctrl_1->StyleSetFont( wxSTC_STYLE_DEFAULT, font );
	}
	m_styled_text_ctrl_1->MarkerDefine( wxSTC_MARKNUM_FOLDER, wxSTC_MARK_BOXPLUS );
	m_styled_text_ctrl_1->MarkerSetBackground( wxSTC_MARKNUM_FOLDER, wxColour( wxT("BLACK") ) );
	m_styled_text_ctrl_1->MarkerSetForeground( wxSTC_MARKNUM_FOLDER, wxColour( wxT("WHITE") ) );
	m_styled_text_ctrl_1->MarkerDefine( wxSTC_MARKNUM_FOLDEROPEN, wxSTC_MARK_BOXMINUS );
	m_styled_text_ctrl_1->MarkerSetBackground( wxSTC_MARKNUM_FOLDEROPEN, wxColour( wxT("BLACK") ) );
	m_styled_text_ctrl_1->MarkerSetForeground( wxSTC_MARKNUM_FOLDEROPEN, wxColour( wxT("WHITE") ) );
	m_styled_text_ctrl_1->MarkerDefine( wxSTC_MARKNUM_FOLDERSUB, wxSTC_MARK_EMPTY );
	m_styled_text_ctrl_1->MarkerDefine( wxSTC_MARKNUM_FOLDEREND, wxSTC_MARK_BOXPLUS );
	m_styled_text_ctrl_1->MarkerSetBackground( wxSTC_MARKNUM_FOLDEREND, wxColour( wxT("BLACK") ) );
	m_styled_text_ctrl_1->MarkerSetForeground( wxSTC_MARKNUM_FOLDEREND, wxColour( wxT("WHITE") ) );
	m_styled_text_ctrl_1->MarkerDefine( wxSTC_MARKNUM_FOLDEROPENMID, wxSTC_MARK_BOXMINUS );
	m_styled_text_ctrl_1->MarkerSetBackground( wxSTC_MARKNUM_FOLDEROPENMID, wxColour( wxT("BLACK") ) );
	m_styled_text_ctrl_1->MarkerSetForeground( wxSTC_MARKNUM_FOLDEROPENMID, wxColour( wxT("WHITE") ) );
	m_styled_text_ctrl_1->MarkerDefine( wxSTC_MARKNUM_FOLDERMIDTAIL, wxSTC_MARK_EMPTY );
	m_styled_text_ctrl_1->MarkerDefine( wxSTC_MARKNUM_FOLDERTAIL, wxSTC_MARK_EMPTY );
	m_styled_text_ctrl_1->SetSelBackground( true, wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHT ) );
	m_styled_text_ctrl_1->SetSelForeground( true, wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	m_styled_text_ctrl_1->SetFont( wxFont( 16, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Consolas") ) );
	m_styled_text_ctrl_1->Hide();

	bSizerEditor->Add( m_styled_text_ctrl_1, 1, wxEXPAND, 5 );


	m_panelEditor->SetSizer( bSizerEditor );
	m_panelEditor->Layout();
	bSizerEditor->Fit( m_panelEditor );
	bSizerMaster->Add( m_panelEditor, 1, wxEXPAND | wxALL, 0 );


	this->SetSizer( bSizerMaster );
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
	m_styled_text_ctrl_1->Connect( wxEVT_CHAR_HOOK, wxKeyEventHandler( FormEditor::CharHook_styled_text_ctrl_1 ), NULL, this );
	m_menuFile->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( FormEditor::MenuSelect_new ), this, m_menuItemNew->GetId());
	m_menuFile->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( FormEditor::MenuSelect_open ), this, m_menuItemOpen->GetId());
	m_menuFile->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( FormEditor::MenuSelect_save ), this, m_menuItemSave->GetId());
	m_menuOptions->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( FormEditor::MenuSelect_font ), this, m_menuItemFont->GetId());
	m_menuHelp->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( FormEditor::MenuSelect_about ), this, m_menuItemAbout->GetId());
}

FormEditor::~FormEditor()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FormEditor::Close_master ) );
	m_styled_text_ctrl_1->Disconnect( wxEVT_CHAR_HOOK, wxKeyEventHandler( FormEditor::CharHook_styled_text_ctrl_1 ), NULL, this );

}

FormAbout::FormAbout( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
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

	this->Centre( wxBOTH );
}

FormAbout::~FormAbout()
{
}

FormFont::FormFont( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
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
	m_fontPicker->Connect( wxEVT_COMMAND_FONTPICKER_CHANGED, wxFontPickerEventHandler( FormFont::FontChanged ), NULL, this );
}

FormFont::~FormFont()
{
	// Disconnect Events
	m_fontPicker->Disconnect( wxEVT_COMMAND_FONTPICKER_CHANGED, wxFontPickerEventHandler( FormFont::FontChanged ), NULL, this );

}