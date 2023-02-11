#include "Span.hpp"

Span::Span(unsigned int N)
	:	list_limit(N)
{
}

Span::Span(const Span &copy)
	:	data_list(copy.data_list), list_limit(copy.list_limit)
{
}

Span::~Span()
{
}

Span	&Span::operator=(const Span &copy)
{
	data_list = copy.data_list;
	list_limit = copy.list_limit;
	return (*this);
}

void	Span::addNumber(int value)
{
	if (data_list.size() >= list_limit)
		throw Span::LimitExceeded();

	data_list.push_back(value);
}

void	Span::addNumber(std::list<int>::iterator begin, std::list<int>::iterator end)
{
	while (begin != end)
	{
		if (data_list.size() >= list_limit)
			throw Span::LimitExceeded();
		data_list.push_back(*begin);
		begin = std::next(begin);
	}
}

unsigned int	Span::shortestSpan(void) const
{
	unsigned int ret;

	if (data_list.size() < 2)
		throw Span::NoSpanCanBeFound();

	std::list<int>::const_iterator it1 = data_list.begin();
	std::list<int>::const_iterator it2;

	for (; it1 != data_list.end(); it1++)
	{
		for(it2 = std::next(it1); it2 != data_list.end(); it2++)
		{
			if (it1 == data_list.begin() && it2 == std::next(it1))
				ret = std::abs(*it2 - *it1);
			else if (std::abs(*it2 - *it1) < ret)
				ret = std::abs(*it2 - *it1);
			if (ret == 0)
				return (ret);
		}
	}

	return (ret);
}

unsigned int	Span::longestSpan(void) const
{
	if (data_list.size() < 2)
		throw Span::NoSpanCanBeFound();

	std::list<int>::const_iterator max = std::max_element(data_list.begin(), data_list.end());
	std::list<int>::const_iterator min = std::min_element(data_list.begin(), data_list.end());

	return (std::abs(*max - *min));
}

const char *Span::LimitExceeded::what() const throw()
{
	return ("Exception: Limit exceeded.");
}

const char *Span::NoSpanCanBeFound::what() const throw()
{
	return ("Exception: No span can be found.");
}