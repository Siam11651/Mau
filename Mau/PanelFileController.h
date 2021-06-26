#pragma once

#include "MasterHeader.h"

class PanelFileController : public PanelFile
{
	wxString filePath;
	wxString fileName;

	void CharHook_styled_text_ctrl(wxKeyEvent& event);

public:
	PanelFileController(wxWindow* parent, wxString filePath);
	void SetFilePath(wxString filePath);
	void SetStyledTextCtrlText(wxString text);
	void SetStyledTextCtrlFont(wxFont font);
	wxString GetFilePath();
	wxString GetStyledTextCtrlText();
	wxString GetFileName();
};