#include "Calculator.h"

Calculator::Calculator(): wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30,30), wxSize(385,600))
{
	//Collumn One
	btn1 = new wxButton(this,01, "7", wxPoint(30, 240), wxSize(70,70));
	btn1 = new wxButton(this,02, "4", wxPoint(30, 320), wxSize(70,70));
	btn1 = new wxButton(this,03, "1", wxPoint(30, 400), wxSize(70,70));
	btn1 = new wxButton(this,04, "0", wxPoint(30, 480), wxSize(70,70));
	//Collumn Two			 
	btn1 = new wxButton(this,06, "8", wxPoint(110, 240), wxSize(70,70));
	btn1 = new wxButton(this,07, "5", wxPoint(110, 320), wxSize(70,70));
	btn1 = new wxButton(this,108, "2", wxPoint(110, 400), wxSize(70,70));
	btn1 = new wxButton(this,109, ".", wxPoint(110, 480), wxSize(70,70));
	//Collumn Three			 
	btn1 = new wxButton(this,10, "9", wxPoint(190, 240), wxSize(70,70));
	btn1 = new wxButton(this,11, "6", wxPoint(190, 320), wxSize(70,70));
	btn1 = new wxButton(this,12, "3", wxPoint(190, 400), wxSize(70,70));
	btn1 = new wxButton(this,13, "=", wxPoint(190, 480), wxSize(70,70));
							  
	//Collumn Four			  
	btn1 = new wxButton(this, 14, "/", wxPoint(270, 240), wxSize(70,70));
	btn1 = new wxButton(this, 15, "*", wxPoint(270, 320), wxSize(70,70));
	btn1 = new wxButton(this, 16, "-", wxPoint(270, 400), wxSize(70,70));
	btn1 = new wxButton(this, 17, "+", wxPoint(270, 480), wxSize(70, 70));
							  
	btn1 = new wxButton(this, 18, "MOD", wxPoint(30, 100), wxSize(70,50));
	btn1 = new wxButton(this, 19, "BIN", wxPoint(110, 100), wxSize(70,50));
	btn1 = new wxButton(this, 20, "HEX", wxPoint(190, 100), wxSize(70,50));
	btn1 = new wxButton(this, 21, "DEC", wxPoint(270, 100), wxSize(70,50));
	btn1 = new wxButton(this, 22, "MOD", wxPoint(30, 160), wxSize(70, 50));

	txt1 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(30, 20), wxSize(310, 70));

	wxFont font(40, wxFONTFAMILY_DECORATIVE, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	txt1->SetFont(font);
}

Calculator::~Calculator()
{
}
