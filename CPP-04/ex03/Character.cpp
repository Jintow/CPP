//
// Created by jlitaudo on 3/29/23.
//

#include "Character.hpp"

Character::Character(): _Name("Someone")
{
	for(int i = 0; i < 4; i++)
	{
		this->_Inventory[i] = NULL;
	}
}

Character::Character(const std::string &Name): _Name(Name)
{
	for(int i = 0; i < 4; i++)
	{
		this->_Inventory[i] = NULL;
	}
}

Character::Character(const Character &Character)
{
	*this = Character;
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_Inventory[i] != NULL)
			delete this->_Inventory[i];
	}
}

const std::string &Character::getName() const
{
	return (this->_Name);
}

Character	&Character::operator=(const Character &Character)
{
	this->_Name = Character.getName();
	for(int i = 0; i < 4; i++)
	{
		if (this->_Inventory[i] != NULL)
			delete this->_Inventory[i];
	}
	for(int i = 0; i < 4; i++)
	{
		if (Character._Iventory[i] != NULL)
			this->_Inventory[i] = Character._Inventory[i]->clone();
		else
			this->_Iventory[i] = NULL;
	}
	return (*this);
}


void Character::equip(AMateria *m)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_Inventory[i] == NULL)
		{
			this->_Inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		return ;
	if (this->_Inventory[idx] != NULL)
		this->_Inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= 4)
		return ;
	if (this->_Inventory[idx] != NULL)
		this->_Inventory[idx]->use(target);
}