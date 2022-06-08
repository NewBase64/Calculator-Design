#include "Calculator.h"
wxBEGIN_EVENT_TABLE(Calculator, wxFrame)


EVT_BUTTON(0 , ButtonClicked)

EVT_BUTTON(1, ButtonClicked)


EVT_BUTTON(2, ButtonClicked)

EVT_BUTTON(3, ButtonClicked)

EVT_BUTTON(4, ButtonClicked)

EVT_BUTTON(5, ButtonClicked)

EVT_BUTTON(6, ButtonClicked)

EVT_BUTTON(7, ButtonClicked)

EVT_BUTTON(8, ButtonClicked)

EVT_BUTTON(9, ButtonClicked)

EVT_BUTTON(10, ButtonClicked)

EVT_BUTTON(11, ButtonClicked)

EVT_BUTTON(12, ButtonClicked)

EVT_BUTTON(13, ButtonClicked)

EVT_BUTTON(14 ,ButtonClicked)

EVT_BUTTON(15, ButtonClicked)

EVT_BUTTON(16, ButtonClicked)







wxEND_EVENT_TABLE()

Calculator::Calculator(): wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30,30), wxSize(385,600))
{
	//Collumn One
	btn1 = new wxButton(this,7, "7", wxPoint(30, 240), wxSize(70,70));
	btn1 = new wxButton(this,4, "4", wxPoint(30, 320), wxSize(70,70));
	btn1 = new wxButton(this,1, "1", wxPoint(30, 400), wxSize(70,70));
	btn1 = new wxButton(this,0, "0", wxPoint(30, 480), wxSize(70,70));
	//Collumn Two			 
	btn1 = new wxButton(this, 8, "8", wxPoint(110, 240), wxSize(70,70));
	btn1 = new wxButton(this,5, "5", wxPoint(110, 320), wxSize(70,70));
	btn1 = new wxButton(this,2, "2", wxPoint(110, 400), wxSize(70,70));
	btn1 = new wxButton(this, 11, ".", wxPoint(110, 480), wxSize(70,70));
	//Collumn Three			 
	btn1 = new wxButton(this,9, "9", wxPoint(190, 240), wxSize(70,70));
	btn1 = new wxButton(this,6, "6", wxPoint(190, 320), wxSize(70,70));
	btn1 = new wxButton(this,3, "3", wxPoint(190, 400), wxSize(70,70));
	btn1 = new wxButton(this,12, "=", wxPoint(190, 480), wxSize(70,70));
							  
	//Collumn Four			  
	btn1 = new wxButton(this, 13, "/", wxPoint(270, 240), wxSize(70,70));
	btn1 = new wxButton(this, 14, "*", wxPoint(270, 320), wxSize(70,70));
	btn1 = new wxButton(this, 15, "-", wxPoint(270, 400), wxSize(70,70));
	btn1 = new wxButton(this, 16, "+", wxPoint(270, 480), wxSize(70, 70));
							  
	btn1 = new wxButton(this, 17, "MOD", wxPoint(30, 100), wxSize(70,50));
	btn1 = new wxButton(this, 18, "BIN", wxPoint(110, 100), wxSize(70,50));
	btn1 = new wxButton(this, 19, "HEX", wxPoint(190, 100), wxSize(70,50));
	btn1 = new wxButton(this, 20, "DEC", wxPoint(270, 100), wxSize(70,50));
	btn1 = new wxButton(this, 21, "MOD", wxPoint(30, 160), wxSize(70, 50));

	txt1 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(30, 20), wxSize(310, 70));

	wxFont font(40, wxFONTFAMILY_DECORATIVE, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	txt1->SetFont(font);
}

Calculator::~Calculator()
{
}

void Calculator::ButtonClicked(wxCommandEvent& out)
{
	int NumCal = out.GetId();
	wxString Outputdisplay = "";
	Outputdisplay << NumCal;
	if (NumCal>=0 && NumCal<=9)
	{
		txt1->AppendText(Outputdisplay);

	}

	if (NumCal==11)
	{
		txt1->AppendText(".");


	}

	if (NumCal==12)
	{

		txt1->AppendText("=");

	}

	if (NumCal==13)
	{

		txt1->AppendText("/");

	}

	if (NumCal == 14)
	{

		txt1->AppendText("*");

	}
	if (NumCal == 15)
	{
		txt1->AppendText("-");


	}
	if (NumCal == 16)
	{

		txt1->AppendText("+");

	}


}