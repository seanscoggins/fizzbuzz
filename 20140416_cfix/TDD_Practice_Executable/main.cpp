#include <iostream>
#include "TDD_Practice_Library\StringCalculator.h"

int main()
{
	StringCalculatorNamespace::StringCalculator e;
	std::cout << e.add("2,2") << std::endl;
	std::getchar();
	return 0;
}