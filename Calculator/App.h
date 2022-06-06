#pragma once

#include "wx/wx.h"
#include "Calculator.h"

class App : public wxApp
{
public:
	App();
	~App();

private:

	Calculator* m_frame1 = nullptr;


	
public:
	virtual bool OnInit();

};

