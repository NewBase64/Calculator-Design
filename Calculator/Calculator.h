#pragma once
#include "wx/wx.h"

class Calculator:public wxFrame
{


public:
	Calculator();
	~Calculator();


public:

	wxButton *btn1 = nullptr;

	wxTextCtrl *txt1 = nullptr;


};
