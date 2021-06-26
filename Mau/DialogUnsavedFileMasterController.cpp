#include "FormEditorController.h"
#include "PanelFileController.h"
#include "DialogAboutController.h"
#include "DialogFontController.h"
#include "DialogUnsavedFileController.h"
#include "DialogUnsavedFileMasterController.h"
#include "Main.h"

DialogUnsavedFileMasterController::
DialogUnsavedFileMasterController(FormEditorController* parent)
	: DialogUnsavedFileMaster(parent)
{
	this->parent = parent;
	parentNoteBook = parent->GetEditorNoteBookPointer();
	int pageCount = parentNoteBook->GetPageCount();

	for (int i = 0; i < pageCount; i++)
	{
		wxString name = ((PanelFileController*)parentNoteBook->GetPage(i))->GetName();
		wxString fileName = ((PanelFileController*)parentNoteBook->GetPage(i))->GetFileName();

		if ((char)name.GetChar(0) == '*')
		{
			fileInd.Add(i);
			fileNames.Add(fileName);
		}
	}

	m_checkList_to_save->Set(fileNames);
}

void DialogUnsavedFileMasterController::Click_save_master(wxCommandEvent& event)
{
	for (int i = 0; i < (int)fileInd.GetCount(); i++)
	{
		if (m_checkList_to_save->IsChecked(i))
		{
			parent->SaveFile((PanelFileController*)parentNoteBook->GetPage(fileInd[i]));
		}
	}

	exit(0);
}

void DialogUnsavedFileMasterController::Click_not_save(wxCommandEvent& event)
{
	exit(0);
}