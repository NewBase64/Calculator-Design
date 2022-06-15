#include "ButtonFac.h"
#include "Calculator.h"

ButtonFac::ButtonFac(Calculator* frame)
{
	m_frame1 = frame;
}

ButtonFac::~ButtonFac()
{
}

wxButton* ButtonFac::CreateAddButton(std::string sym, int ID, int xPos, int yPos, int Height, int Width)
{
	btn1 = new wxButton(m_frame1, ID, sym, wxPoint(xPos, yPos), wxSize(Height, Width));
	return btn1;
}

