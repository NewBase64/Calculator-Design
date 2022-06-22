#pragma once
#include "IBaseCommand.h"
#include "Calculator.h"
#include "Processor.h"

class AdditionCommand : public IBaseCommand {
private:

	Calculator* _Calculator = nullptr;
	int num1 =0;
	int num2=0;
	int ans = 0;
	
public:
	AdditionCommand(Calculator* calculator, int _num1, int _num2) {


		_Calculator = calculator;

		num1 = _num1;
		num2 = _num2;


	}

	void Execute() {




	}
};
