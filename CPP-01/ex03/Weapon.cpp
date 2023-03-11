/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:05:39 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/03/10 14:54:23 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

Weapon::Weapon() {}

Weapon::Weapon(std::string type): _type(type){}

Weapon::~Weapon() {}

std::string&  Weapon::getType()
{
	std::string &typeRef = _type;

	return (typeRef);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}