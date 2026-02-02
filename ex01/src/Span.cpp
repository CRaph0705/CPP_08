#include "Span.hpp"
#include <cmath>

#include <algorithm>

template <typename T>
T const & min(T const &a, T const &b)
{
	return (a < b ? a : b);
}

template <typename T>
T const & max(T const &a, T const &b)
{
	return (a > b ? a : b);
}

Span::Span(): _N(42)
{
	std::cout << "Span default constructor function called" << std::endl;
}

Span::Span(unsigned int N): _N(N)
{
	std::cout << "Span overloaded constructor function called" << std::endl;
}

Span::Span(const Span &cpy): _N(cpy._N)
{
	std::cout << "Span copy constructor function called" << std::endl;
}

Span::~Span()
{
	std::cout << "Span destructor function called" << std::endl;
}

Span Span::operator=(const Span &cpy)
{
	if (this == &cpy)
		return (*this);

	std::cout << "Span overloaded operator= function called" << std::endl;
	_N = cpy._N;
	return (*this);
}

void Span::addNumber(int num)
{
	if (this->_array.size() >= _N)
	{
		std::cout << "Storage full, addNumber("<< num << ") aborted." << std::endl;
		return ;
	}
	this->_array.push_back(num);
	std::cout << num << " has been added to storage." << std::endl;
	return ;
}

unsigned int Span::shortestSpan()
{
	unsigned int min_delta = abs(_array[1] - _array[0]);
	unsigned int delta = abs(_array[1] - _array[0]);
	std::cout << std::endl;
	// handle 1 or 0 element case

	// if (_array.size() < 2)
	// {
	// 	throw exception();
	// }


	// template<class _IIter, class _Funct> _Funct std::for_each(_IIter, _IIter, _Funct)
	// std::for_each()

	std::cout << "min_delta = " << min_delta << std::endl;
	for (unsigned int i = 0; i < _array.size(); i++)
	{
		std::cout << "[i] = " << i << std::endl;
		std::cout << "_array[i] = " << _array[i] << std::endl;
		for (unsigned int j = i + 1; j < _array.size(); j++)
		{
			std::cout << "[j] = " << j << std::endl;
			std::cout << "_array[j] = " << _array[j] << std::endl;
			delta = abs(_array[i] - _array[j]);
			std::cout << "delta (abs(array[i] - array[j])) = " << delta << std::endl;

			min_delta = min(min_delta, delta);
		}
		std::cout << "min_delta = " << min_delta << std::endl;
		std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl;
		// std::cout << "_array[i] = " << _array[i] << ", _array[i + 1] = " << _array[i + 1] << std::endl;
	}
	return (min_delta);
}

unsigned int Span::longestSpan()
{
	int min_value = _array[0];
	int max_value = _array[0];

	// handle 1 or 0 element case
	// if (_array.size() < 2)
	// {
	// 	throw exception();
	// }

	for (unsigned int i = 0; i < _array.size(); i++)
	{
		min_value = min(min_value, _array[i]);
		max_value = max(max_value, _array[i]);
	}
	// std::cout << "min_value = " << min_value << ", max_value = " << max_value << std::endl;
	return (max_value - min_value);
}


