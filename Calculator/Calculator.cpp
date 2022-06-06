#include "Calculator.h"

Calculator::Calculator(): wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30,30), wxSize(385,600))
{
	//Collumn One
	btn1 = new wxButton(this, wxID_ANY, "7", wxPoint(30, 240), wxSize(70,70));
	btn1 = new wxButton(this, wxID_ANY, "4", wxPoint(30, 320), wxSize(70,70));
	btn1 = new wxButton(this, wxID_ANY, "1", wxPoint(30, 400), wxSize(70,70));
	btn1 = new wxButton(this, wxID_ANY, "0", wxPoint(30, 480), wxSize(70,70));
	//Collumn Two
	btn1 = new wxButton(this, wxID_ANY, "8", wxPoint(110, 240), wxSize(70,70));
	btn1 = new wxButton(this, wxID_ANY, "5", wxPoint(110, 320), wxSize(70,70));
	btn1 = new wxButton(this, wxID_ANY, "2", wxPoint(110, 400), wxSize(70,70));
	btn1 = new wxButton(this, wxID_ANY, ".", wxPoint(110, 480), wxSize(70,70));
	//Collumn Three
	btn1 = new wxButton(this, wxID_ANY, "9", wxPoint(190, 240), wxSize(70,70));
	btn1 = new wxButton(this, wxID_ANY, "6", wxPoint(190, 320), wxSize(70,70));
	btn1 = new wxButton(this, wxID_ANY, "3", wxPoint(190, 400), wxSize(70,70));
	btn1 = new wxButton(this, wxID_ANY, "=", wxPoint(190, 480), wxSize(70,70));

	//Collumn Four
	btn1 = new wxButton(this, wxID_ANY, "/", wxPoint(270, 240), wxSize(70,70));
	btn1 = new wxButton(this, wxID_ANY, "*", wxPoint(270, 320), wxSize(70,70));
	btn1 = new wxButton(this, wxID_ANY, "-", wxPoint(270, 400), wxSize(70,70));
	btn1 = new wxButton(this, wxID_ANY, "+", wxPoint(270, 480), wxSize(70, 70));

	btn1 = new wxButton(this, wxID_ANY, "MOD", wxPoint(30, 100), wxSize(70,50));
	btn1 = new wxButton(this, wxID_ANY, "BIN", wxPoint(110, 100), wxSize(70,50));
	btn1 = new wxButton(this, wxID_ANY, "HEX", wxPoint(190, 100), wxSize(70,50));
	btn1 = new wxButton(this, wxID_ANY, "DEC", wxPoint(270, 100), wxSize(70,50));
	btn1 = new wxButton(this, wxID_ANY, "MOD", wxPoint(30, 160), wxSize(70, 50));

	txt1 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(30, 20), wxSize(310, 70));

	wxFont font(40, wxFONTFAMILY_DECORATIVE, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	txt1->SetFont(font);
}

Calculator::~Calculator()
{
}
