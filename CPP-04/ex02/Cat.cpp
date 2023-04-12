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

Cat::Cat(Cat const &Cat) : Animal()
{
	*this = Cat;
}

Cat::~Cat()
{
	delete this->_Brain;
	std::cout << "Wild Cat return to dust" << std::endl;
}

Cat	&Cat::operator=(const Cat &Cat)
{
	std::cout << "Cat assignement operator called" << std::endl;
	*(this->_Brain) = *(Cat.getBrain());
	this->_type = Cat.getType();
	return (*this);
}

Animal &Cat::operator=(Animal const &Animal)
{
	std::cout << "Cat(Animal) assignement operator called" << std::endl;
	this->_type = Animal.getType();
	*(this->_Brain) = *(Animal.getBrain());
	return (*this);
}

Brain *Cat::getBrain() const
{
	return (this->_Brain);
}

void Cat::makeSound() const
{
	std::cout << "Hi HAN (yeah that's wierd)" << std::endl;
}