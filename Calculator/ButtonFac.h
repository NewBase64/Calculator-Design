#pragma once
#include "wx/wx.h"

class Calculator;
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

