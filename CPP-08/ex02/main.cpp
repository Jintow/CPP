//
// Created by Johan Litaudon on 4/27/23.
//

#include <iostream>
#include <list>
#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top value is : " << mstack.top() << std::endl;
//	mstack.pop();
	std::cout << "Stack size is : " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << std::endl << "   ==============      " <<std::endl <<std::endl;
	std::list<int> lstack;
	lstack.push_back(5);
	lstack.push_back(17);
	std::cout << "Top value is : " << lstack.front() << std::endl;
//	mstack.pop();
	std::cout << "Stack size is : " << lstack.size() << std::endl;
	lstack.push_back(3);
	lstack.push_back(5);
	lstack.push_back(737);
//[...]
	lstack.push_back(0);
	std::list<int>::iterator it2 = lstack.begin();
	std::list<int>::iterator ite2 = lstack.end();
	++it2;
	--it2;
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
//	std::stack<int> s2(lstack);

	return 0;
}