#pragma once
#include <iostream>
#include <stdexcept>

template <typename T>
void easyfind(T &container, int i)
{
	typename T::const_iterator it;
	for (it = container.begin(); it != container.end(); ++it)
	{
		if (*it == i)
		{
			std::cout<< "Value " << i << " found." << std::endl;
			return ;
		}
	}
	std::cout<< "Value " << i << " not found." << std::endl;
	return ;
}
