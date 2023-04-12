//
// Created by jlitaudo on 3/29/23.
//

#ifndef CPP_04_ICHARACTER_HPP
#define CPP_04_ICHARACTER_HPP

#include "AMateria.hpp"
#include <iostream>

class AMateria;

class ICharacter
{
public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};


#endif //CPP_04_ICHARACTER_HPP