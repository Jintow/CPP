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
	for (int i = 0; i < 1000; i++){
		this->_Ground[i] = NULL;
	}
}

Character::Character(const std::string &Name): _Name(Name)
{
	for(int i = 0; i < 4; i++)
	{
		this->_Inventory[i] = NULL;
	}
	for (int i = 0; i < 1000; i++){
		this->_Ground[i] = NULL;
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
	for (int i = 0; i < 1000; i++){
		if (this->_Ground[i] != NULL)
			delete this->_Ground[i];
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
		if (Character._Inventory[i] != NULL)
			this->_Inventory[i] = Character._Inventory[i]->clone();
		else
			this->_Inventory[i] = NULL;
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
	std::cout << "Inventory is full" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		return ;
	if (this->_Inventory[idx] != NULL)
	{
		this->groundFall(this->_Inventory[idx]);
		this->_Inventory[idx] = NULL;
		return ;
	}
	std::cout << "Nothing at this inventory place" << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= 4)
		return ;
	if (this->_Inventory[idx] != NULL)
		this->_Inventory[idx]->use(target);
}

void Character::groundFall(AMateria *felt)
{
	int i = 0;
	while (i < 1000 && this->_Ground[i] != NULL)
		i++;
	if (i < 1000){
		this->_Ground[i] = felt;
		std::cout << "Materia " << felt->getType() << " felt to the ground" << std::endl;
	}
	else
		delete felt;
}