#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <list>
#include <exception>
#include <algorithm>
#include <cmath>

class Span
{
private:
	std::list<int>	data_list;
	unsigned int	list_limit;

	Span();

public:
	Span(unsigned int);
	Span(const Span &);
	~Span();
	Span &operator=(const Span &);

	void				addNumber(int);
	unsigned int		shortestSpan(void) const;
	unsigned int		longestSpan(void) const;
	void				addNumber(std::list<int>::iterator, std::list<int>::iterator);

	class LimitExceeded : public std::exception
	{
	public:
		const char *what() const throw();
	};

	class NoSpanCanBeFound : public std::exception
	{
	public:
		const char *what() const throw();
	};
};

#endif