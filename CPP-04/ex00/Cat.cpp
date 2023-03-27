//
// Created by Johan Litaudon on 3/27/23.
//

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "A wild Cat appears" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Wild Cat return to dust" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Hi HAN (yeah that's wierd)" << std::endl;
}