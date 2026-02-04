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
	this->_array = cpy._array;
}

Span::~Span()
{
	std::cout << "Span destructor function called" << std::endl;
}

Span &Span::operator=(const Span &cpy)
{
	if (this == &cpy)
		return (*this);

	std::cout << "Span overloaded operator= function called" << std::endl;
	_N = cpy._N;
	for (unsigned int i = 0; i < cpy._N; i++)
	{
		this->_array.push_back(cpy._array[i]);
	}
	return (*this);
}

void Span::addNumber(int num)
{
	if (this->_array.size() >= _N)
	{
		throw std::runtime_error("Span is full");
	}
	this->_array.push_back(num);
	return ;
}

unsigned int Span::shortestSpan() const
{
	if (_array.size() < 2)
	{
		throw std::runtime_error("Not enough elements");
	}

	std::vector<int> tmp = _array;
	std::sort(tmp.begin(), tmp.end());
	unsigned int min_delta = tmp[1] - tmp[0];

	for (unsigned int i = 1; i < tmp.size() - 1; ++i)
	{
		unsigned int delta = tmp[i + 1] - tmp[i];
		if (delta < min_delta)
			min_delta = delta;
	}
	return (min_delta);
}

unsigned int Span::longestSpan() const
{
	int min_value = _array[0];
	int max_value = _array[0];

	if (_array.size() < 2)
	{
		throw std::runtime_error("Not enough elements");
	}

	for (unsigned int i = 0; i < _array.size(); i++)
	{
		min_value = min(min_value, _array[i]);
		max_value = max(max_value, _array[i]);
	}
	return (max_value - min_value);
}


