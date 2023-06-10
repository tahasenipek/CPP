#include "Rpn.hpp"

Rpn::Rpn()
{
	return;
}

Rpn::~Rpn()
{
	return;
}

Rpn::Rpn(std::stack<double> number)
{
	this->num = number;
}

Rpn::Rpn(const Rpn &var)
{
	*this = var;
}

Rpn &Rpn::operator=(const Rpn &var)
{
	this->num = var.num;
	return (*this);
}

void Rpn::calculate(std::string input)
{
	for (size_t i = 0; i < input.size(); i++)
	{
		char c = input[i];

		if (c == ' ')
		{
			continue;
		}
		else if (isdigit(c))
		{
			int number = c - '0';
			num.push(number);
		}
		else if (c == '+' && num.size() >= 2)
		{
			double b = num.top();
			num.pop();
			double a = num.top();
			num.pop();
			num.push(a + b);
		}
		else if (c == '-' && num.size() >= 2)
		{
			double b = num.top();
			num.pop();
			double a = num.top();
			num.pop();
			num.push(a - b);
		}
		else if (c == '*' && num.size() >= 2)
		{
			double b = num.top();
			num.pop();
			double a = num.top();
			num.pop();
			num.push(a * b);
		}
		else if (c == '/' && num.size() >= 2)
		{
			double b = num.top();
			num.pop();
			double a = num.top();
			num.pop();
			num.push(a / b);
		}
		else
		{
			std::cout << "Error" << std::endl;
			return;
		}
	}
	if (num.size() == 1)
	{
		double result = num.top();
		num.pop();
		std::cout << result << std::endl;
	}
	else
	{
		std::cout << "Invalid input." << std::endl;
	}
}

