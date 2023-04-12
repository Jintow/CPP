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

Dog::Dog(const Dog &Dog) : Animal()
{
	this->_Brain = new Brain();
	*this = Dog;
}

Dog::~Dog()
{
	delete this->_Brain;
	std::cout << "Wild Dog return to dust" << std::endl;
}

Brain *Dog::getBrain() const
{
	return (this->_Brain);
}

Dog &Dog::operator=(const Dog &Dog)
{
	std::cout << "Dog assignment operator called" << std::endl;
	this->_type = Dog.getType();
	*(this->_Brain) = *(Dog.getBrain());
	return (*this);
}

Animal &Dog::operator=(const Animal &Animal)
{
	std::cout << "Dog (animal) assignment operator called" << std::endl;
	this->_type = Animal.getType();
	*(this->_Brain) = *(Animal.getBrain());
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Coin coin (yeah that's wierd)" << std::endl;
}