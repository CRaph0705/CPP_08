#pragma once

#include <iostream>
#include <stdexcept>
// retval ??
template <typename T>
int easyfind(T container, int i)
{
	for (T<int>::iterator it = container.std::begin(); it != container.std::end(); it++)
	{
		if (*it == i)
			return (it);
	}
	throw std::invalid_argument("Value not found.");
	// pseudo code
	// if (! std::find i in container)
		// throw ;
	// else 
		// return un truc
		// iterator ??
}


/* 
std::vector<int> vec = {1, 2, 3, 4};
for (auto it = std::begin(vec); it != std::end(vec); ++it) {
    std::cout << *it << " ";
}   
*/


/* 
int main()
{
    // Use C++14 brace-init syntax to invoke BigObject(string).
    // The s suffix invokes string ctor. It is a C++14 user-defined
    // literal defined in <string>
    BigObject b1{ "42F"s };
    BigObject b2{ "52F"s };
    BigObject b3{ "62F"s };
    set<BigObject, less<>> myNewSet; // C++14
    myNewSet.insert(b1);
    myNewSet.insert(b2);
    myNewSet.insert(b3);
    auto it = myNewSet.find(string("62F"));
    if (it != myNewSet.end())
        cout << "myNewSet element = " << it->id << endl;
    else
        cout << "element not found " << endl;

    // Keep console open in debug mode:
    cout << endl << "Press Enter to exit.";
    string s;
    getline(cin, s);
    return 0;
} */