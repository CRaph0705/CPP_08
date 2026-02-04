#pragma once
#include <fstream>
/* 
Write a MutantStack class. It will be implemented in terms of a std::stack.
It will offer all its member functions, plus an additional feature: iterators. 
*/

template <typename T>
class MutantStack : public std::stack
{
	private:
	public:
		MutantStack();
		MutantStack(const MutantStack &cpy);
		~MutantStack();
		MutantStack &operator=(const MutantStack &cpy)
		{
			if(this != &cpy)
			{
				//
			}
			return (*this);
		}

} ;