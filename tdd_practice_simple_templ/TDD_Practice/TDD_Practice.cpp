#include <iostream>
#include <string>

void AssertEquals(const std::string& expected, const std::string& actual)
{
	if (expected == actual)
	{
		std::cout << "passed: " << expected << " = " << actual << std::endl;
	}
	else
	{
		std::cout << "failed: " << expected << " = " << actual << std::endl;
	}
}

void RunAllTests()
{
	AssertEquals(std::string("abd"), std::string("bvc"));
}

int main(int argc, char** argv)
{
	RunAllTests();
	std::getchar();
	return 0;
}

