//
// Created by Johan Litaudon on 3/27/23.
//

#ifndef EX00_CAT_HPP
#define EX00_CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal{

public:
	Cat();
	Cat(Cat const &Cat);
	~Cat();

	Cat 				&operator=(Cat const &Cat);
	Animal				&operator=(Animal const &Animal);
	Brain 				*getBrain() const;
	virtual void		makeSound() const;

private:
	Brain	*_Brain;
};


#endif //EX00_CAT_HPP
