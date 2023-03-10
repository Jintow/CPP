/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 10:29:35 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/03/10 16:29:36 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
	std::cout << "constructor called" << std::endl;
}

Zombie::Zombie(std::string name):_name(name){}

Zombie::~Zombie()
{
	std::cout << _name << " has been killed" << std::endl;
//	delete zombie;
}

void Zombie::announce() const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string &name)
{
	this->_name = name;
}
