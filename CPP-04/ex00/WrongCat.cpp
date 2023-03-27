//
// Created by Johan Litaudon on 3/27/23.
//

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "Wierd Cat";
	std::cout << "A wild WrongCat appears" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Wild WrongCat return to dust" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Kaikaikai (yeah that's wierd)" << std::endl;
}