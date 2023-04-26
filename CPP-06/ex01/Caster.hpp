//
// Created by Johan Litaudon on 4/26/23.
//

#ifndef CPP_06_CASTER_HPP
#define CPP_06_CASTER_HPP

#include <inttypes.h>
#include "Data.hpp"

class Caster {
public:
	static uintptr_t	serialize(Data *ptr);
	static Data			*deserialize(uintptr_t raw);

private:
	Caster();
	~Caster();
	Caster(Caster & caster);
	Caster &operator=(Caster &caster);

};


#endif //CPP_06_CASTER_HPP
