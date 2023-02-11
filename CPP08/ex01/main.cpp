#include "Span.hpp"

int main()
{
    std::list<int>	l;
	srand(time(0));
	for (int i = 0; i < 1000; i++)
		l.push_back(rand());

	Span span(l.size());

	span.addNumber(l.begin(), l.end());
	try
	{
		span.addNumber(2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "shortestSpan: " << span.shortestSpan() << std::endl;
    std::cout << "longestSpan: " << span.longestSpan() << std::endl;

}