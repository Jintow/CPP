/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:45:41 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/03/22 17:08:34 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << BOLD << this->_name << END << " takes the mike" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &mC)
{
	this->_name = mC.getName();
	this->_hitPoints = mC.getHitPoint();
	this->_energyPoints = mC.getEnergyPoint();
	this->_attackDamage = mC.getAmount();
	std::cout << "ScavTrap " << BOLD << this->_name << END << "is dopple-ganged" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap "  << BOLD << this->_name << END << " pass the mike" << std::endl;
}
void ScavTrap::guardGate()
{
	if (this->_hitPoints < 30 && this->_hitPoints > 0)
		std::cout << "ScavTrap " << CYAN << this->_name << END << " stare a GateKeeper" <<std::endl;
}