#include <iostream>
#include "easyfind.hpp"
#include <vector>


int main()
{
	std::cout << "plop" << std::endl;
	std::vector<int> vec;
	vec.push_back(42);
	vec.push_back(12);
	vec.push_back(18);
	vec.push_back(22);
	vec.push_back(-18);
	vec.push_back(4242);
	vec.push_back(22);
	std::cout << easyfind(vec, 22 )<< std::endl;
	return (0);
}