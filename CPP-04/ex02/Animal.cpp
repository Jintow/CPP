//
// Created by Johan Litaudon on 3/27/23.
//

#include "Animal.hpp"

Animal::Animal() : _type("Mammal")
{
	std::cout << "A wild Mammal appears" << std::endl;
}

Animal::Animal(const Animal &individual)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = individual;
}

Animal::~Animal()
{
	std::cout << "Wild mammal return to dust" << std::endl;
}

const std::string Animal::getType() const
{
	return (this->_type);
}

Animal &Animal::operator=(const Animal &individual)
{
	this->_type = individual.getType();
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "Brrrrr (that's the sound of this unrecognized mammal)" << std::endl;
}