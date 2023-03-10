/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:41:28 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/03/09 12:25:21 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){}

Contact::Contact(std::string info[5]): _firstName(info[0]), _lastName(info[1]), _nickName(info[2]), _phoneNumber(info[3]), _darkestSecret(info[4])
{
//	std::cout << "Contact constructor called" << std::endl;
	return ;
}
//Contact::Contact(std::string[5] contactInfo):, _firstName(contactInfo[0])
Contact::~Contact(void)
{
//	std::cout << "Contact destructor called" << std::endl;
	return ;
}

std::string Contact::getFirstName(void) const
{
	return (this->_firstName);
}
std::string Contact::getLastName(void) const
{
	return (this->_lastName);
}
std::string Contact::getNickName(void) const
{
	return (this->_nickName);
}
std::string Contact::getPhoneNumber() const
{
	return (this->_phoneNumber);
}
std::string Contact::getDarkestSecret() const
{
	return (this->_darkestSecret);
}
/*
void	Contact::setFirstName(std::string firstName)
{
	this->_firstName = firstName;
}
void	Contact::setLastName(std::string lastName)
{
	this->_lastName = lastName;
}
void	Contact::setNickName(std::string nickName)
{
	this->_nickName = nickName;
}
void	Contact::setPhoneNumber(std::string phoneNumber)
{
	this->_phoneNumber = phoneNumber;
}
void	Contact::setDarkestSecret(std::string darkestSecret)
{
	this->_darkestSecret = darkestSecret;
}
 */