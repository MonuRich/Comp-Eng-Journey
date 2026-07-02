#include <iostream>

double getNumInput()
{
	std::cout << "Enter a double value: ";
	double x{};
	std::cin >> x;

	return x;
}

//calculates final value
double calculatedAns(double x, double y)
{
	std::cout << "Enter +, -, *, or /: ";
	char op{};
	std::cin >> op;
	if (op == '+')
		std::cout << x << " + " << y << " is " << x + y;
	else if (op == '-')
		std::cout << x << " - " << y << " is " << x - y;
	else if (op == '*')
		std::cout << x << " * " << y << " is " << x * y;
	else if (op == '/')
		std::cout << x << " / " << y << " is " << x / y;

	return 0;

}

int main()
{
	double num1{ getNumInput() };
	double num2{ getNumInput() };
	calculatedAns(num1, num2);

	return 0;
}