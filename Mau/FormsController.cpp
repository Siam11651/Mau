#include "FormsController.h"

FormAboutController::FormAboutController(wxWindow* parent) : FormAbout(parent)
{

}

DialogFontController::DialogFontController(FormEditorController* formEditorController) : DialogFont(formEditorController)
{
	this->formEditorController = formEditorController;

	m_fontPicker->SetSelectedFont(formEditorController->GetStyledTextCtrlFont());
	m_staticText_font->SetFont(m_fontPicker->GetSelectedFont());
}

FormEditorController::FormEditorController() : FormEditor(nullptr)
{
	
}

DialogUnsavedFileController::DialogUnsavedFileController(FormEditorController* parent) : DialogUnsavedFile(parent)
{
	this->parent = parent;
}

void DialogUnsavedFileController::Click_confirm_save(wxCommandEvent& event)
{
	parent->SaveFile();
	exit(0);
}

void DialogUnsavedFileController::Click_no_save(wxCommandEvent& event)
{
	exit(0);
}

void DialogFontController::FontChanged(wxFontPickerEvent& event)
{
	formEditorController->SetStyledTextCtrlFont(m_fontPicker->GetSelectedFont());
	wxFile settingsFile(L"settings.txt", wxFile::write);
	wxFont font = m_fontPicker->GetSelectedFont();
	wxString data;
	wxStringOutputStream settingsStringOutputStream(&data);
	wxTextOutputStream settingsTextOutputStream(settingsStringOutputStream);
	int size = font.GetPointSize(), family = font.GetFamily(), style = font.GetStyle(),
		weight = font.GetWeight();
	int underlined = font.GetUnderlined();
	wxString face = font.GetFaceName();

	settingsTextOutputStream << size << " " << family << " " << style << " " << weight << " "
		<< underlined << "\n" << face;

	settingsFile.Write(data);
	settingsFile.Close();
	m_staticText_font->SetFont(m_fontPicker->GetSelectedFont());
	event.Skip();
}

void FormEditorController::SetStyledTextCtrlFont(wxFont font)
{
	m_styled_text_ctrl_1->StyleSetFont(0, font);
}

wxFont FormEditorController::GetStyledTextCtrlFont()
{
	return m_styled_text_ctrl_1->StyleGetFont(0);
}

void FormEditorController::CharHook_styled_text_ctrl_1(wxKeyEvent& event)
{
	wxString title = GetTitle();

	if ((char)title.GetChar(0) != '*')
	{
		title = L"*" + title;
		SetTitle(title);
	};

	event.Skip();
}

void FormEditorController::MenuSelect_save(wxCommandEvent& event)
{
	SaveFile();
	event.Skip();
}

void FormEditorController::MenuSelect_new(wxCommandEvent& event)
{
	wxFileDialog newFileDialogue(this, wxString::FromAscii(wxFileSelectorPromptStr),
		wxEmptyString, wxEmptyString, wxString::FromAscii(wxFileSelectorDefaultWildcardStr),
		wxFD_SAVE | wxFD_OVERWRITE_PROMPT);

	if (newFileDialogue.ShowModal() != wxID_CANCEL)
	{
		filePath = newFileDialogue.GetPath();
		wxFile file;

		file.Create(filePath, true);
		m_styled_text_ctrl_1->SetValue(L"");
		m_styled_text_ctrl_1->Show();
		m_styled_text_ctrl_1->SetSize(m_styled_text_ctrl_1->GetParent()->GetSize());
		m_styled_text_ctrl_1->SetValue(wxString());
		SetTitle(GetTitle() + L" [" + filePath + L"]");
		file.Close();
	}

	event.Skip();
}

void FormEditorController::MenuSelect_open(wxCommandEvent& event)
{
	wxFileDialog openFileDialogue(this, wxString::FromAscii(wxFileSelectorPromptStr),
		wxEmptyString, wxEmptyString, wxString::FromAscii(wxFileSelectorDefaultWildcardStr),
		wxFD_OPEN | wxFD_FILE_MUST_EXIST);

	if (openFileDialogue.ShowModal() != wxID_CANCEL)
	{
		filePath = openFileDialogue.GetPath();
		wxFile file(filePath);
		wxString doc;

		file.ReadAll(&doc);
		m_styled_text_ctrl_1->SetValue(doc);
		m_styled_text_ctrl_1->Show();
		m_styled_text_ctrl_1->SetSize(m_styled_text_ctrl_1->GetParent()->GetSize());
		m_styled_text_ctrl_1->SetValue(doc);
		SetTitle(GetTitle() + L" [" + filePath + L"]");
		file.Close();
	}

	event.Skip();
}

void FormEditorController::MenuSelect_about(wxCommandEvent& event)
{
	formAboutController = new FormAboutController(this);

	formAboutController->SetIcons(wxIcon("resources/icons/Mau.ico", wxBITMAP_TYPE_ICO));
	formAboutController->Show();
	event.Skip();
}

void FormEditorController::MenuSelect_font(wxCommandEvent& event)
{
	dialogFontController = new DialogFontController(this);

	dialogFontController->ShowModal();
	event.Skip();
}

void FormEditorController::Close_master(wxCloseEvent& event)
{
	if ((char)GetTitle().GetChar(0) == '*')
	{
		dialogUnsavedFile = new DialogUnsavedFileController(this);

		dialogUnsavedFile->Show();
	}
	else
	{
		event.Skip();
	}
}

void FormEditorController::SaveFile()
{
	if (!filePath.empty())
	{
		wxString title = GetTitle();

		if ((char)title.GetChar(0) == '*')
		{
			title.Remove(0, 1);
			SetTitle(title);
		}

		wxFile file(filePath, wxFile::write);
		file.Write(m_styled_text_ctrl_1->GetValue());
		file.Close();
	}
}