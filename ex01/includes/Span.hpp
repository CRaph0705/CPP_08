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
} ;