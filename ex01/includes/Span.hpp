#pragma once
#include <iostream>
#include <vector>
class Span {
	//
	private:
		std::vector<int> _array;
		unsigned int _N;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &cpy);
		~Span();
		Span &operator=(const Span &cpy);

		void	addNumber(int num);

		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;

		//TODO : range of iterators to add multiple numbers to array
		template <typename Iterator>
		void addRange(Iterator start, Iterator end)
		{
			for (Iterator it = start; it != end; ++it)
			{
				if (_array.size() >= _N)
					throw std::runtime_error("Span is full");
				_array.push_back(*it);
			}
		}
} ;