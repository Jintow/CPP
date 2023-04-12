//
// Created by Johan Litaudon on 3/27/23.
//

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "New Brain created" << std::endl;
}

Brain::Brain(const Brain &mind)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = mind;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &mind)
{
	std::cout << "Brain Assignment operator called" << std::endl;
	for(int i = 0; i < 100; i++)
	{
		this->ideas[i] = mind.ideas[i];
	}
	return (*this);
}