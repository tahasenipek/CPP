#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>

class Rpn
{
private:
	std::stack<double> num;
public:
	Rpn();
	Rpn(std::stack<double> number);
	Rpn(const Rpn &var);
	~Rpn();
	Rpn &operator=(const Rpn &var);
	void calculate(std::string input);
};

#endif