//
// Created by jlitaudo on 3/29/23.
//

#ifndef CPP_04_IMATERIASOURCE_HPP
#define CPP_04_IMATERIASOURCE_HPP

#include "AMateria.hpp"
#include <iostream>

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};


#endif //CPP_04_IMATERIASOURCE_HPP
