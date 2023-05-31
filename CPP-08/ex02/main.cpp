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
	mstack.pop();
	std::cout << "Stack size is : " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	std::cout << "Top value is : " << mstack.top() << std::endl;
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

	// Mutant stack with a list.

	std::cout << std::endl << "   ==============      " <<std::endl <<std::endl;
	std::list<int> lstack;
	lstack.push_front(5);
	lstack.push_front(17);
	std::cout << "Top value is : " << lstack.front() << std::endl;
	lstack.pop_front();
	std::cout << "Stack size is : " << lstack.size() << std::endl;
	lstack.push_front(3);
	lstack.push_front(5);
	lstack.push_front(737);
	lstack.push_front(0);
	std::cout << "Top value is : " << lstack.front() << std::endl;
	std::list<int>::iterator it2 = lstack.begin();
	std::list<int>::iterator ite2 = lstack.end();
	++ite2;
	--ite2;
	while (ite2 != it2)
	{
		--ite2;
		std::cout << *ite2 << std::endl;
	}
//	std::stack<int> s2(lstack);
	return 0;
}