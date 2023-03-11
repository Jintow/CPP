/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:05:27 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/03/10 14:46:27 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.h"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
	std::cout << "HumanA " << this->_name << " is born" << std::endl;
};

HumanA::~HumanA()
{
	std::cout << "HumanA " << this->_name << " is dead" << std::endl;
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}