#include "pch.h"
#include "CppUnitTest.h"
#include "../Calculator/App.h"
#include "../Calculator/Processor.h"
#include "../Calculator/ButtonFac.h"
#include "../Calculator/AdditionCommand.h"
#include "../Calculator/SubtractCommand.h"
#include "../Calculator/DivideCommand.h"
#include "../Calculator/MultipCommand.h"
#include "../Calculator/Calculator.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ButtFacTester
{
	TEST_CLASS(CalcTester)
	{
	public:

		TEST_METHOD(Button1)
		{
			Calculator frame;

			wxButton* button = nullptr;
			ButtonFac* fac = new ButtonFac(&frame);
			button = fac->CreateAddButton("8", 8, 110, 240, 70, 70);

			Assert::AreEqual(button->GetId(), 8);
		}
		TEST_METHOD(Button2)
		{
			Calculator frame;

			wxButton* button = nullptr;
			ButtonFac* fac = new ButtonFac(&frame);
			button = fac->CreateAddButton("8", 20, 110, 240, 70, 70);

			Assert::AreNotEqual(button->GetId(), 8);

		}




		TEST_METHOD(Button3)
		{
			Calculator frame;

			wxButton* button = nullptr;
			ButtonFac* fac = new ButtonFac(&frame);
			button = fac->CreateAddButton("17", 15, 110, 240, 70, 70);

			Assert::AreEqual(button->GetId(), 15);

		}
		
		
		
		
		TEST_METHOD(Button4)
		{
			Calculator frame;

			wxButton* button = nullptr;
			ButtonFac* fac = new ButtonFac(&frame);
			button = fac->CreateAddButton("17", 56, 110, 240, 70, 70);

			Assert::AreNotEqual(button->GetId(), 15);

		}

		TEST_METHOD(Button5)
		{
			Calculator frame;

			wxButton* button = nullptr;
			ButtonFac* fac = new ButtonFac(&frame);
			button = fac->CreateAddButton("17", 28, 110, 240, 70, 70);

			Assert::AreEqual(button->GetId(), 28);
		}

		TEST_METHOD(Button6)
		{
			Calculator frame;

			wxButton* button = nullptr;
			ButtonFac* fac = new ButtonFac(&frame);
			button = fac->CreateAddButton("17", 412, 110, 240, 70, 70);

			Assert::AreEqual(button->GetId(), 412);
		}



		TEST_METHOD(Button7)
		{
			Calculator frame;

			wxButton* button = nullptr;
			ButtonFac* fac = new ButtonFac(&frame);
			button = fac->CreateAddButton("17", 1, 110, 240, 70, 70);

			Assert::AreEqual(button->GetId(), 1);
		}
		TEST_METHOD(Button8)
		{
			Calculator frame;

			wxButton* button = nullptr;
			ButtonFac* fac = new ButtonFac(&frame);
			button = fac->CreateAddButton("17", 21, 110, 240, 70, 70);

			Assert::AreNotEqual(button->GetId(), 28);
		}
		TEST_METHOD(Button9)
		{
			Calculator frame;

			wxButton* button = nullptr;
			ButtonFac* fac = new ButtonFac(&frame);
			button = fac->CreateAddButton("17", 77, 110, 240, 70, 70);

			Assert::AreEqual(button->GetId(), 77);
		}
		TEST_METHOD(Button10)
		{
			Calculator frame;

			wxButton* button = nullptr;
			ButtonFac* fac = new ButtonFac(&frame);
			button = fac->CreateAddButton("17", 28, 110, 240, 70, 70);

			Assert::AreEqual(button->GetId(), 28);

		}
	};
}