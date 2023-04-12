//
// Created by jlitaudo on 3/29/23.
//

#ifndef CPP_04_CURE_HPP
#define CPP_04_CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {

public:
	Cure();
	~Cure();

	Cure* clone() const;
	void use(ICharacter& target);

};


#endif //CPP_04_CURE_HPP
