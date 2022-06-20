#pragma once
#include "wx/wx.h"

class Calculator :public wxFrame
{


public:
	Calculator();
	~Calculator();


public:



	wxTextCtrl* txt1 = nullptr;
	void ButtonClicked(wxCommandEvent& Button);







	wxDECLARE_EVENT_TABLE();

};

