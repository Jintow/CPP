//
// Created by Johan Litaudon on 3/27/23.
//

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int main(void)
{
//	{
//		Animal *animals[10];
//		for (int i = 0; i < 10; i++) {
//			if (i % 2) {
//				animals[i] = new Dog();
//			} else {
//				animals[i] = new Cat();
//			}
//		}
//		for (int i = 0; i < 10; i++) {
//			delete animals[i];
//		}
//	}
//	{
//		Animal *animals[2];
//		animals[0] = new Cat();
//		animals[1] = new Dog();
//
//		Brain *brain = animals[1]->getBrain();
//		brain->ideas[0] = "test";
//		brain->ideas[1] = "idea";
//		std::cout << "-------- Assigment operator --------" << std::endl;
//		*(animals[0]) = *(animals[1]);
//		std::cout << brain->ideas[0] << std::endl;
//		std::cout << "-------- Brain content --------" << std::endl;
//		std::cout << animals[0]->getBrain()->ideas[0] << std::endl;
//		std::cout << animals[0]->getBrain()->ideas[1] << std::endl;
//		std::cout << "-------- Destructors --------" << std::endl;
//		delete animals[0];
//		delete animals[1];

	Dog Basic;
	{
		Dog tmp = Basic;
	}
		std::cout << std::endl;
	return 0;
}
