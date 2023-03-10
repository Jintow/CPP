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

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon){};

HumanA::~HumanA() {}

void	HumanA::attack() const
{
	std::cout << this->_name << " with " << this->_weapon.getType() << std::endl;
}