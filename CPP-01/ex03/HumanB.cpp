/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:05:06 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/03/10 14:46:27 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

HumanB::HumanB(std::string name): _name(name)
{
	std::cout << "HumanB " << this->_name << " is born" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB " << this->_name << " is dead" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
void	HumanB::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}