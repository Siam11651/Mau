#include "MasterHeader.h"

PanelFileController::PanelFileController(wxWindow* parent, wxString filePath) : PanelFile(parent)
{
	SetFilePath(filePath);
	SetName(fileName);
}

void PanelFileController::CharHook_styled_text_ctrl(wxKeyEvent& event)
{
	PanelFileController* currentPage = (PanelFileController*)((wxAuiNotebook*)GetParent())
		->GetCurrentPage();

	int count = ((wxAuiNotebook*)GetParent())->GetPageCount();
	int index = -1;

	for (int i = 0; i < count; i++)
	{
		if (currentPage == (PanelFileController*)((wxAuiNotebook*)GetParent())->GetPage(i))
		{
			index = i;

			break;
		}
	}

	if (index != -1)
	{
		wxString title = ((wxAuiNotebook*)GetParent())->GetPageText(index);

		if ((char)title.GetChar(0) != '*')
		{
			title = L"*" + title;
			((wxAuiNotebook*)GetParent())->SetPageText(index, title);
			SetName(title);
		};
	}

	event.Skip();
}

void PanelFileController::SetFilePath(wxString filePath)
{
	this->filePath = filePath;

	int prevStartPos = -1;

	for (int i = (int)filePath.size() - 1; i >= 0; i--)
	{
		if ((char)filePath.GetChar(i) == '\\' || (char)filePath.GetChar(i) == '/')
		{
			prevStartPos = i;

			break;
		}
	}

	fileName = filePath.substr(prevStartPos + 1);
}

wxString PanelFileController::GetFileName()
{
	return fileName;
}

void PanelFileController::SetStyledTextCtrlText(wxString text)
{
	m_styled_text_ctrl->SetValue(text);
}

void PanelFileController::SetStyledTextCtrlFont(wxFont font)
{
	m_styled_text_ctrl->StyleSetFont(0, font);
}

wxString PanelFileController::GetFilePath()
{
	return filePath;
}

wxString PanelFileController::GetStyledTextCtrlText()
{
	return m_styled_text_ctrl->GetValue();
}