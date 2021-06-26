#include "FormEditorController.h"
#include "PanelFileController.h"
#include "DialogAboutController.h"
#include "DialogFontController.h"
#include "DialogUnsavedFileController.h"
#include "DialogUnsavedFileMasterController.h"
#include "Main.h"

DialogFontController::DialogFontController(FormEditorController* formEditorController) : DialogFont(formEditorController)
{
	this->formEditorController = formEditorController;

	m_fontPicker->SetSelectedFont(formEditorController->GetEditorTextFont());
	m_staticText_font->SetFont(m_fontPicker->GetSelectedFont());
}

void DialogFontController::FontChanged(wxFontPickerEvent& event)
{
	formEditorController->SetEditorTextFont(m_fontPicker->GetSelectedFont());
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