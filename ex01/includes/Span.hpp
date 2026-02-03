#pragma once
#include <iostream>
#include <vector>
class Span {
	//
	private:
	public:
		std::vector<int> _array;
		unsigned int _N;
		Span();
		Span(unsigned int N);
		Span(const Span &cpy);
		~Span();
		Span &operator=(const Span &cpy);

		void	addNumber(int num);

		unsigned int shortestSpan();
		unsigned int longestSpan();
} ;