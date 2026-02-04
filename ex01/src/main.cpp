#include <iostream>
#include "Span.hpp"

int	main( void )
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);

	Span sp2 = Span(sp);
	sp.addNumber(9);
	sp.addNumber(11);
	try
	{
		std::cout << "shortestSpan = " << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "longestSpan = " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	try
	{
		std::cout << "shortestSpan = " << sp2.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "longestSpan = " << sp2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}



	Span big = Span(10000);

	std::vector<int> vec;
	for (int i = 0; i < 10000; i++)
	{
		vec.push_back(i);
	}
	big.addRange(vec.begin(), vec.end());


	try
	{
		std::cout << "shortestSpan = " << big.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "longestSpan = " << big.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}