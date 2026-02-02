#include <iostream>
#include "easyfind.hpp"
#include <vector>
#include <list>
#include <stdlib.h>


int main(int ac, char **av)
{
	int i;
	if (ac > 2)
	{
		std::cout << "Please enter a value to search " << std::endl;
		return (1);
	}
	if ( ac == 1)
		i = 42;
	else
		i = std::atoi(av[1]);
	// std::cout << "plop" << std::endl;
	std::vector<int> vec;
	vec.push_back(42);
	vec.push_back(12);
	vec.push_back(18);
	vec.push_back(22);
	vec.push_back(-18);
	vec.push_back(4242);
	vec.push_back(22);

	easyfind(vec, i);

	std::list<int> l;
	l.push_back(42);
	l.push_back(43);
	l.push_back(44);
	l.push_back(45);
	l.push_back(46);
	l.push_back(47);
	l.push_back(48);

	easyfind(l, i);
	return (0);
}