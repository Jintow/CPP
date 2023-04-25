//
// Created by Johan Litaudon on 3/27/23.
//

#ifndef EX00_DOG_HPP
#define EX00_DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const &Dog);
		~Dog();

		virtual void	makeSound() const;
		Dog 			&operator=(Dog const &Dog);
		Animal			&operator=(const Animal &Animal);
		Brain 			*getBrain() const;

private:
	Brain	*_Brain;
};


#endif //EX00_DOG_HPP
