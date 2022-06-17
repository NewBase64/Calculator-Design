#pragma once
#include <string>
#include "Calculator.h"
#include "App.h"
	class Processor
{
private:
	static Processor* processor;

	int dAT;
	int num1;
	int num2;

	Processor() {}
public:

	static Processor* GetProcess() {
		if (processor == nullptr)
			processor = new Processor;
	}
	void SetBaseNumber(int number) {

		dAT = number;

	}

	Processor(Processor& other) = delete;
	void operator=(const Processor& other) = delete;








};
Processor* Processor::processor = nullptr;
