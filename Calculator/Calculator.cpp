#include "Calculator.h"
#include "ButtonFac.h"
wxBEGIN_EVENT_TABLE(Calculator, wxFrame)
//
//
EVT_BUTTON(0, ButtonClicked)
//
EVT_BUTTON(1, ButtonClicked)
//
//
EVT_BUTTON(2, ButtonClicked)
//
EVT_BUTTON(3, ButtonClicked)
//
EVT_BUTTON(4, ButtonClicked)
//
EVT_BUTTON(5, ButtonClicked)

EVT_BUTTON(6, ButtonClicked)

EVT_BUTTON(7, ButtonClicked)

EVT_BUTTON(8, ButtonClicked)

EVT_BUTTON(9, ButtonClicked)

EVT_BUTTON(10, ButtonClicked)

EVT_BUTTON(11, ButtonClicked)

EVT_BUTTON(12, ButtonClicked)

EVT_BUTTON(13, ButtonClicked)

EVT_BUTTON(14, ButtonClicked)

EVT_BUTTON(15, ButtonClicked)

EVT_BUTTON(16, ButtonClicked)

EVT_BUTTON(17, ButtonClicked)
EVT_BUTTON(18, ButtonClicked)
EVT_BUTTON(19, ButtonClicked)
EVT_BUTTON(20, ButtonClicked)
EVT_BUTTON(21, ButtonClicked)


wxEND_EVENT_TABLE()



wxString _num1;
wxString _num2;
wxString sym;

Calculator::Calculator() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(385, 600))
{
	ButtonFac factory = ButtonFac(this);
	wxButton* button;

	button = factory.CreateAddButton("7", 7, 30,240,70,70 );
	button = factory.CreateAddButton("4", 4, 30, 320, 70, 70);
	button = factory.CreateAddButton("1", 1, 30, 400, 70, 70);
	button = factory.CreateAddButton("0", 0, 30, 480, 70, 70);


	button = factory.CreateAddButton("8", 8, 110, 240, 70, 70);
	button = factory.CreateAddButton("5", 5, 110, 320, 70, 70);
	button = factory.CreateAddButton("2", 2, 110, 400, 70, 70);
	button = factory.CreateAddButton(".", 11, 110, 480, 70, 70);

	button = factory.CreateAddButton("9", 9, 190, 240, 70, 70);
	button = factory.CreateAddButton("6", 6, 190, 320, 70, 70);
	button = factory.CreateAddButton("3", 3, 190, 400, 70, 70);
	button = factory.CreateAddButton("=", 12, 190, 480, 70, 70);
	
	button = factory.CreateAddButton("/", 13, 270, 240, 70, 70);
	button = factory.CreateAddButton("*", 14, 270, 320, 70, 70);
	button = factory.CreateAddButton("-", 15, 270, 400, 70, 70);
	button = factory.CreateAddButton("+", 16, 270, 480, 70, 70);





	button = factory.CreateAddButton("MOD", 17, 30, 100, 70, 50);
	button = factory.CreateAddButton("BIN", 18, 110, 100, 70, 50);
	button = factory.CreateAddButton("HEX", 19, 190, 100, 70, 50);
	button = factory.CreateAddButton("DEC", 20, 270, 100, 70, 50);
	button = factory.CreateAddButton("C", 21, 30, 160, 70, 50);




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
	
	
	
	
	
	
	
	
	
	
	
	if (NumCal >= 0 && NumCal <= 9)
	{
		txt1->AppendText(Outputdisplay);

	}

	if (NumCal == 11)
	{
		txt1->AppendText(".");


	}

	if (NumCal == 12)
	{

		

	}

	if (NumCal == 13)
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
	if (NumCal == 17)
	{

		txt1->AppendText("MOD");

	}
	if (NumCal == 18)
	{

		txt1->AppendText("BIN");

	}
	if (NumCal == 19)
	{

		txt1->AppendText("HEX");

	}
	if (NumCal == 20)
	{

		txt1->AppendText("DEC");

	}
	if (NumCal == 21)
	{

		txt1->Clear();

	}
}