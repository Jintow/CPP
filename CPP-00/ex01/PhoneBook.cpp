/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:32:18 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/03/09 10:09:48 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
//	std::cout << "PhoneBook constructor called" << std::endl;
	this->_size = 0;
	this->_eraseIndex = 0;
	return ;
}
PhoneBook::~PhoneBook(void)
{
//	std::cout << "PhoneBook destructor called" << std::endl;
	return ;
}

void PhoneBook::AddContact(Contact contact)
{
	if (_size < 8)
	{
		_contactTab[_size] = contact;
		_size += 1;
	}
	else
	{
		_contactTab[_eraseIndex] = contact;
		_eraseIndex = (_eraseIndex + 1) % 8;
	}
}
int	PhoneBook::GetSize() const
{
	return (this->_size);
}

Contact	PhoneBook::GetContact(int i) const
{
	return (this->_contactTab[i]);
}