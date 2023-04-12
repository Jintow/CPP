//
// Created by jlitaudo on 3/29/23.
//

#include "Character.hpp"

Character::Character() {}

Character::Character(const std::string &Name): _Name(Name)
{}

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
	this->_Inventory = Character.copyInventory();
	return (*this);
}

AMateria	**Character::copyInventory() const
{
	AMateria copy_inventory[4] = new AMateria[4]();
	for(int i = 0; i < 4; i++)
	{
		copy_inventory[i] = this->Inventory[i]->clone();
	}
	return (*copy_inventory);
}
