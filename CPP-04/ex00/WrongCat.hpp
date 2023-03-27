//
// Created by Johan Litaudon on 3/27/23.
//

#ifndef EX00_WRONGCAT_HPP
#define EX00_WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal{

public:
	WrongCat();
	~WrongCat();

	void	makeSound() const;
};


#endif //EX00_WRONGCAT_HPP
