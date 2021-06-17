#include "Main.h"

bool Main::OnInit()
{	
	wxFont font;

	if (!wxFile::Exists(L"settings.txt"))
	{
		wxFile settingsFile;
		settingsFile.Create(L"settings.txt");
		wxString data = L"16 70 90 400 0\nConsolas";
		settingsFile.Write(data);
		settingsFile.Close();
	}

	wxFile settingsFile(L"settings.txt");
	wxString data;

	settingsFile.ReadAll(&data);

	wxStringInputStream settingsStringInputStream(data);
	wxTextInputStream settingsTextInputStream(settingsStringInputStream);

	int size, family, style, weight;
	int underlined;
	wxString face;

	settingsTextInputStream >> size >> family >> style >> weight >> underlined;

	face = settingsTextInputStream.ReadLine();
	font = wxFont(size, (wxFontFamily)family, (wxFontStyle)style, (wxFontWeight)weight,
		underlined, face);

	settingsFile.Close();

	formEditorController = new FormEditorController();

	formEditorController->SetStyledTextCtrlFont(font);
	formEditorController->SetIcons(wxIcon("resources/icons/Mau.ico", wxBITMAP_TYPE_ICO));
	formEditorController->Maximize();
	formEditorController->Show();

	return true;
}

wxIMPLEMENT_APP(Main);