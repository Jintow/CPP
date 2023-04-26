//
// Created by Johan Litaudon on 4/26/23.
//

#include "Caster.hpp"

uintptr_t Caster::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*Caster::deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data *>(raw));
}