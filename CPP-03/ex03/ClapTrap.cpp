//
// Created by jlitaudo on 3/22/23.
//

#include "ClapTrap.hpp"

/*
 ---------------- CONSTRUCTORs -------------------------
 * */

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name):
_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << BOLD << this->_name << END << " takes the mike" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &mC):_name(mC.getName())
{
	std::cout << "ClapTrap " << BOLD << this->_name << END << "is dopple-ganged" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap "  << BOLD << this->_name << END << " pass the mike" << std::endl;
}

/*
 ---------------- Getters / Setters -------------------------
 * */

ClapTrap &ClapTrap::operator=(ClapTrap const &mC)
{
	this->_name = mC.getName();
	this->_hitPoints = mC.getHitPoint();
	this->_energyPoints = mC.getEnergyPoint();
	this->_attackDamage = mC.getAmount();
	return (*this);
}
void	ClapTrap::setAttackDamage(const unsigned int flow)
{
	this->_attackDamage = flow;
}

std::string ClapTrap::getName(void) const
{
	return (this->_name);
}

unsigned int ClapTrap::getAmount() const
{
	return (this->_attackDamage);
}

int ClapTrap::getHitPoint() const
{
	return (this->_hitPoints);
}

int ClapTrap::getEnergyPoint() const
{
	return (this->_energyPoints);
}

/*
 ------------------ Members Functions -------------------------
 * */



void ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoints < 1)
		return ;
	if (this->_energyPoints < 1)
	{
		std::cout << "ClapTrap " << BOLD << this->_name << END;
		std::cout << " is out of inspiration" << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << "ClapTrap " << BOLD << this->_name << END;
	std::cout << " target " << BOLD << target << END;
	std::cout << " and improvised " << PURPLE << this->_attackDamage << END << " min of incredible rap" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints < 1)
		return ;
	std::cout << "ClapTrap " << BOLD << this->_name << END;
	std::cout << " wait " << RED << amount << END << " min and is scared" << std::endl;
	this->_hitPoints -= amount;
	if (this->_hitPoints < 1)
	{
		std::cout << "ClapTrap " << BOLD << this->_name << END;
		std::cout << " is beaten and goes out of the scene" << std::endl;
		return ;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints <= 1)
	{
		std::cout << "ClapTrap " << BOLD << this->_name << END;
		std::cout << " is out of inspiration" << std::endl;
		return ;
	}
	if (this->_hitPoints < 1)
		return ;
	this->_hitPoints += amount;
	this->_energyPoints--;
	std::cout << "ClapTrap " << BOLD << this->_name << END;
	std::cout << " dances to recover " << GREEN << amount << END << " min for improvising" << std::endl;
}

