//
// Created by Johan Litaudon on 3/27/23.
//

#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "A wild Dog appears" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Wild Dog return to dust" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Coin coin (yeah that's wierd)" << std::endl;
}