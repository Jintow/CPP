//
// Created by Johan Litaudon on 3/27/23.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Wierd Mammal")
{
	std::cout << "A wild WrongAnimal appears" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &individual)
{
	*this = individual;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wild WrongAnimal return to dust" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &individual)
{
	this->_type = individual.getType();
	return(*this);
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "Coin coin (yeah that's wierd)" << std::endl;
}