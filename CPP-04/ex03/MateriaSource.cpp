/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 10:54:07 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/04/12 14:49:52 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		this->_materia[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
//	for (int i = 0; i < 4; i++)
//	{
//		if (this->_materia[i] != NULL)
//			delete this->_materia[i];
//	}
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	*this = src;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &src)
{
	for (int i = 0; i < 4; i++){
		if (this->_materia[i] != NULL)
			delete this->_materia[i];
		if (src._materia[i] != NULL)
			this->_materia[i] = src._materia[i]->clone();
		else
			this->_materia[i] = NULL;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++){
		if (this->_materia[i] == NULL)
		{
			this->_materia[i] = m;
			return ;
		}
	}
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i< 4; i++){
		if (this->_materia[i] != NULL && this->_materia[i]->getType() == type)
			return (this->_materia[i]->clone());
	}
	return (NULL);
}