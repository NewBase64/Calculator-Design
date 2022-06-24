#pragma once
#include "wx/wx.h"
#include <vector>

class IBaseCommand;

class Calculator :public wxFrame
{
	int num1, num2;
	wxString _num1 = "";
	wxString _num2 = "";
	bool symbol = false;
	wxString sym = "";
	//Processor process;
	std::vector<IBaseCommand*> commands;

public:
	Calculator();
	~Calculator();


public:



	wxTextCtrl* txt1 = nullptr;
	void ButtonClicked(wxCommandEvent& Button);







	wxDECLARE_EVENT_TABLE();

};

