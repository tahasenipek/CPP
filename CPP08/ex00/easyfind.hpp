#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <array>
#include <list>

template <typename T>
int	easyfind(T &container, int value)
{
	int	i = 0;
	for (typename T::iterator it = container.begin(); it != container.end(); it++)
	{
		if (*it == value)
			return (i);
		i++;
	}
	
	return (-1);
}



#endif