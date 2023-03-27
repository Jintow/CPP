//
// Created by Johan Litaudon on 3/27/23.
//

#ifndef EX00_CAT_HPP
#define EX00_CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal{

public:
	Cat();
	~Cat();

	virtual void	makeSound() const;

};


#endif //EX00_CAT_HPP
