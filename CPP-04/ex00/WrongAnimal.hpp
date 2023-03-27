//
// Created by Johan Litaudon on 3/27/23.
//

#ifndef EX00_WRONGANIMAL_HPP
#define EX00_WRONGANIMAL_HPP

#include <iostream>


class WrongAnimal {

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &individual);
	~WrongAnimal();

	WrongAnimal &operator=(const WrongAnimal &individual);
	void	makeSound() const;

	std::string	getType() const;

protected:
	std::string _type;

};


#endif //EX00_WRONGANIMAL_HPP
