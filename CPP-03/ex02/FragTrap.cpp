//
// Created by jlitaudo on 3/22/23.
//

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "FragTrap " << BOLD << this->_name << END << " takes the mike" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap "  << BOLD << this->_name << END << " pass the mike" << std::endl;
}

void	FragTrap::highFiveGuys() const
{
	std::cout << "FragTrap "  << BOLD << this->_name << END << RED << " : PULLLL UPPPPP" << END << std::endl;
}