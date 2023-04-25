/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:38:04 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/03/29 15:38:04 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{}

AMateria::AMateria(const std::string &type):_type(type)
{}

AMateria::AMateria(const AMateria &Amateria)
{
	*this = Amateria;
}
AMateria::~AMateria()
{}

AMateria	&AMateria::operator=(const AMateria &Amateria)
{
	this->_type = Amateria.getType();
	return (*this);
}

const std::string &AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter &target) {
	std::cout << "AMateria " << this->_type << " used on " << target.getName() << std::endl;
}