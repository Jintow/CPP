/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 10:41:16 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/03/24 13:43:06 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap()
{
	std::cout << "Default Diamond constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";

	FragTrap::_hitPoints = 100;
	ScavTrap::_energyPoints = 50;
	FragTrap::_attackDamage = 30;
	std::cout << "DiamondTrap constructor: " << name << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap: " << this->_name << " pass the mike" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &mC): ClapTrap(mC.getName()), ScavTrap(mC.getName()), FragTrap(mC.getName())
{
	this->_name = mC.getName();
	ClapTrap::_name = mC.ClapTrap::getName();
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &mC)
{
	this->_name = mC.getName();
	return (*this);
}

std::string DiamondTrap::getName() const
{
	return (this->_name);
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am the amazing " << CYAN << this->_name << END << " from " << YELLOW << ClapTrap::_name << END << std::endl;
}
