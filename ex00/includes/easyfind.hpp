#pragma once
#include <iostream>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T &container, int i)
{
	typename T::iterator it;
	it = std::find(container.begin(), container.end(), i);

	if (it == container.end())
	{
		throw std::runtime_error("Value not found");
	}
	return (it);
}
