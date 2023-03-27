//
// Created by Johan Litaudon on 3/27/23.
//

#ifndef EX00_DOG_HPP
#define EX00_DOG_HPP

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal
{
	public:
		Dog();
		~Dog();

		virtual void	makeSound() const;
 };


#endif //EX00_DOG_HPP
