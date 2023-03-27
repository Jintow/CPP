//
// Created by Johan Litaudon on 3/27/23.
//

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "A wild Dog appears" << std::endl;
	this->_type = "Dog";
	this->_Brain = new Brain();
}

Dog::Dog(const Dog &Dog)
{
	*this = Dog;
}

Dog::~Dog()
{
	std::cout << "Wild Dog return to dust" << std::endl;
	delete this->_Brain;
}

Brain *Dog::getBrain() const
{
	return (this->_Brain);
}

std::string const &Dog::getType() const
{
	return (this->_type);
}

Dog &Dog::operator=(const Dog &Dog)
{
	std::cout << "Assignment operator called" << std::endl;
	this->_type = Dog.getType();
	*(this->_Brain) = *(Dog.getBrain());
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Coin coin (yeah that's wierd)" << std::endl;
}