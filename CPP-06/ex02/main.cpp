//
// Created by Johan Litaudon on 4/26/23.
//

#include "Base.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

Base* generate() {
	srand(time(NULL));
	int r = rand() % 3;
//	std::cout << rand() <<std::endl;
	if (r == 0) {
		return new A();
	} else if (r == 1) {
		return new B();
	} else {
		return new C();
	}
}

void	identify(Base *ptr)
{
	if (dynamic_cast<A*>(ptr) != nullptr)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(ptr) != nullptr)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(ptr) != nullptr)
		std::cout << "C" << std::endl;
}

void identify(Base &ptr)
{
	Base test;
	try{
		test = dynamic_cast<A&>(ptr);
		std::cout << "A" << std::endl;
	}
	catch (...) {}
	try{
		test = dynamic_cast<B&>(ptr);
		std::cout << "B" << std::endl;
	}
	catch (...) {}
	try{
		test = dynamic_cast<C&>(ptr);
		std::cout << "C" << std::endl;
	}
	catch (...) {}
}

int main(void)
{
	try{
		for(int i = 0; i < 20 ; i++)
		{
			Base *ptr = generate();
			identify(ptr);
			identify(*ptr);
			std::cout << std::endl;
			delete(ptr);
			usleep(500000);
		}
	}
	catch (std::bad_alloc){
		std::cout << "Creo que hay un problemo en la allocation de memoria" << std::endl;
		return (1);
	}
	return (0);
}
