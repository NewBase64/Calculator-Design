#pragma once
#include "wx/wx.h"
#include "Calculator.h"
#include "App.h"
class ButtonFac 
{
public:
	ButtonFac(Calculator* frame);

	~ButtonFac();

	wxButton* CreateAddButton(std::string sym, int ID, int xPos, int yPos, int Height, int Width);
	wxButton* btn1 = nullptr;




private:

	Calculator* m_frame1 = nullptr;





};

