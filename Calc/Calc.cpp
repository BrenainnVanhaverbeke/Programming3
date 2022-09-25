#include <iostream>
#include <stdlib.h>

void DetermineOperation(char*& sign, int value1, int value2);
void Addition(int value1, int value2);
void Subtraction(int value1, int value2);
void Multiplication(int value1, int value2);
void Division(int value1, int value2);
void Power(int value1, int value2);

int main(int argc, char* argv[])
{
	if (argc < 3 || 4 < argc)
		std::cout << "Usage: \"calc.exe operation intValue1 Value2\"\n";
	else
	{

		char*& sign{ argv[1] };
		int value1{ atoi(argv[2]) };
		int value2{ atoi(argv[3]) };
		DetermineOperation(sign, value1, value2);
	}
}

void DetermineOperation(char*& sign, int value1, int value2)
{
	switch (sign[0])
	{
	case (int)'+':
		Addition(value1, value2);
		break;
	case (int)'-':
		Subtraction(value1, value2);
		break;
	case (int)'*':
		Multiplication(value1, value2);
		break;
	case (int)'/':
		Division(value1, value2);
		break;
	case (int)'p':
		Power(value1, value2);
		break;
	default:
		std::cout << "Invalid operation. Accepted operations: +, -, *, /, p (power).\n";
		break;
	}
}

void Addition(int value1, int value2)
{
	std::cout << "The result is " << value1 + value2 << ".\n";
}

void Subtraction(int value1, int value2)
{
	std::cout << "The result is " << value1 - value2 << ".\n";
}

void Multiplication(int value1, int value2)
{
	std::cout << "The result is " << value1 - value2 << ".\n";
}

void Division(int value1, int value2)
{
	if (value2 == 0)
		std::cout << "Cannot divide by 0.\n";
	else
	{
		std::cout << "The result is " << value1 / value2;
		if (0 < value1 % value2)
			std::cout << " with remainder " << value1 % value2;
		std::cout << ".\n";
	}
}

void Power(int value1, int value2)
{
	std::cout << "The result is " << powf((float)value1, (float)value2) << ".\n";
}