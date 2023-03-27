//
// Created by Johan Litaudon on 3/27/23.
//

#ifndef EX00_ANIMAL_HPP
#define EX00_ANIMAL_HPP

#include <iostream>

class Animal {

public:
	Animal();
	Animal(Animal const & individual);
	virtual ~Animal();

	Animal 				&operator=(Animal const & individual);
	const std::string	getType() const;
	virtual void		makeSound() const;

protected:
	std::string	_type;

};


#endif //EX00_ANIMAL_HPP
