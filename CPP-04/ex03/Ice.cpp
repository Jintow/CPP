//
// Created by jlitaudo on 3/29/23.
//

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{}

Ice::~Ice(){}

Ice *Ice::clone() const
{
	Ice	*clone = new Ice();
	*clone = *this;
	return (clone);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoot an ice bolt at " << target.getName() << " *" << std::endl;
}

