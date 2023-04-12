//
// Created by jlitaudo on 3/29/23.
//

#ifndef CPP_04_ICE_HPP
#define CPP_04_ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {

public:
	Ice();
	~Ice();

	Ice* clone() const;
	void use(ICharacter& target);
};


#endif //CPP_04_ICE_HPP
