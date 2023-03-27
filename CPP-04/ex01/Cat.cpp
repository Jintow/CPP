//
// Created by Johan Litaudon on 3/27/23.
//

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
	std::cout << "A wild Cat appears" << std::endl;
	this->_type = "Cat";
	this->_Brain = new Brain;
}

Cat::Cat(Cat const &Cat)
{
	*this = Cat;
}

Cat::~Cat()
{
	std::cout << "Wild Cat return to dust" << std::endl;
	delete this->_Brain;
}

Cat	&Cat::operator=(const Cat &Cat)
{
	std::cout << "Copy assignement operator called" << std::endl;
	*(this->_Brain) = *(Cat.getBrain());
	this->_type = Cat.getType();
	return (*this);
}

std::string const &Cat::getType() const
{
	return (this->_type);
}

Brain *Cat::getBrain() const
{
	return (this->_Brain);
}

void Cat::makeSound() const
{
	std::cout << "Hi HAN (yeah that's wierd)" << std::endl;
}