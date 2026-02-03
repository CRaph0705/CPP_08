#include <iostream>
#include "Span.hpp"

int	main( void )
{
	Span sp = Span(5);

	sp.addNumber(6);
	// sp.addNumber(1);
	// sp.addNumber(17);
	// sp.addNumber(9);
	// sp.addNumber(11);

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

	return (0);
}