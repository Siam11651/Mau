#include "FormEditorController.h"
#include "PanelFileController.h"
#include "DialogAboutController.h"
#include "DialogFontController.h"
#include "DialogUnsavedFileController.h"
#include "DialogUnsavedFileMasterController.h"
#include "Main.h"

FormEditorController::FormEditorController() : FormEditor(nullptr)
{
	
}

void FormEditorController::AuiNotebookPageClose_file(wxAuiNotebookEvent& event)
{
	PanelFileController* oldPage =
		(PanelFileController*)m_auinotebook_editor->GetCurrentPage();

	int count = m_auinotebook_editor->GetPageCount();
	int index = -1;
	wxString title = oldPage->GetName();

	if ((char)title.GetChar(0) == '*')
	{
		dialogUnsavedFile = new DialogUnsavedFileController(this, oldPage, event);

		dialogUnsavedFile->ShowModal();
	}
	else
	{
		event.Skip();
	}

	//event.Skip();
}

void FormEditorController::Close_master(wxCloseEvent& event)
{
	bool hasUnsaved = false;
	int pageCount = m_auinotebook_editor->GetPageCount();

	for (int i = 0; i < pageCount; i++)
	{
		wxString name = ((PanelFileController*)m_auinotebook_editor->GetPage(i))->GetName();

		if ((char)name.GetChar(0) == '*')
		{
			hasUnsaved = true;

			break;
		}
	}

	if (hasUnsaved)
	{
		dialogUnsavedFileMasterController = new DialogUnsavedFileMasterController(this);

		dialogUnsavedFileMasterController->ShowModal();
	}
	else
	{
		event.Skip();
	}
}

wxAuiNotebook* FormEditorController::GetEditorNoteBookPointer()
{
	return m_auinotebook_editor;
}

void FormEditorController::SaveFile(PanelFileController* activePanelFile)
{
	wxString filePath = activePanelFile->GetFilePath();
	wxString fileName = activePanelFile->GetFileName();

	if (!fileName.empty())
	{
		int count = ((wxAuiNotebook*)activePanelFile->GetParent())->GetPageCount();
		int index = -1;

		for (int i = 0; i < count; i++)
		{
			if (activePanelFile == (PanelFileController*)((wxAuiNotebook*)activePanelFile->GetParent())->GetPage(i))
			{
				index = i;

				break;
			}
		}

		if (index != -1)
		{
			wxString title = ((wxAuiNotebook*)activePanelFile->GetParent())->GetPageText(index);

			if ((char)title.GetChar(0) != '*')
			{
				title = L"*" + title;
				((wxAuiNotebook*)activePanelFile->GetParent())->SetPageText(index, title);
				SetName(title);
			};
		}

		wxFile file(filePath, wxFile::write);
		file.Write(activePanelFile->GetStyledTextCtrlText());
		file.Close();
	}
}

void FormEditorController::MenuSelect_exit(wxCommandEvent& event)
{
	Close();
}

void FormEditorController::SetEditorTextFont(wxFont font)
{
	editorTextFont = font;

	for (int i = 0; i < (int)m_auinotebook_editor->GetPageCount(); i++)
	{
		((PanelFileController*)m_auinotebook_editor->GetPage(i))->SetStyledTextCtrlFont(font);
	}
}

wxFont FormEditorController::GetEditorTextFont()
{
	return editorTextFont;
}

void FormEditorController::MenuSelect_save(wxCommandEvent& event)
{
	SaveFile((PanelFileController*)m_auinotebook_editor->GetCurrentPage());
	event.Skip();
}

void FormEditorController::MenuSelect_new(wxCommandEvent& event)
{
	wxFileDialog newFileDialogue(this, wxString::FromAscii(wxFileSelectorPromptStr),
		wxEmptyString, wxEmptyString, wxString::FromAscii(wxFileSelectorDefaultWildcardStr),
		wxFD_SAVE | wxFD_OVERWRITE_PROMPT);

	if (newFileDialogue.ShowModal() != wxID_CANCEL)
	{
		wxString filePath = newFileDialogue.GetPath();
		wxFile file;
		PanelFileController* panelFileController = new PanelFileController(m_auinotebook_editor, filePath);

		panelFileController->SetStyledTextCtrlText(L"");
		panelFileController->SetStyledTextCtrlFont(editorTextFont);
		file.Create(filePath, true);
		m_auinotebook_editor->AddPage(panelFileController,
			panelFileController->GetFileName(), false, wxNullBitmap);
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
		wxString filePath = openFileDialogue.GetPath();
		wxFile file(filePath);
		wxString doc;
		PanelFileController* panelFileController = new PanelFileController(m_auinotebook_editor, filePath);

		file.ReadAll(&doc);
		panelFileController->SetStyledTextCtrlText(doc);
		panelFileController->SetStyledTextCtrlFont(editorTextFont);
		m_auinotebook_editor->AddPage(panelFileController,
			panelFileController->GetFileName(), false, wxNullBitmap);
		file.Close();
	}

	event.Skip();
}

void FormEditorController::MenuSelect_about(wxCommandEvent& event)
{
	dialogAboutController = new DialogAboutController(this);

	dialogAboutController->ShowModal();
	event.Skip();
}

void FormEditorController::MenuSelect_font(wxCommandEvent& event)
{
	dialogFontController = new DialogFontController(this);

	dialogFontController->ShowModal();
	event.Skip();
}