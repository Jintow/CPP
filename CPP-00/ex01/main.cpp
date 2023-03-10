/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:37:03 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/03/10 10:05:21 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
#include <sstream>

void	SetContact(PhoneBook Annuaire);
void	PrintBook(PhoneBook *phoneBook);
void	PrintInfo(Contact contact);
void	PrintLine(std::string info);
void	AddContact(PhoneBook *Annuaire);
void	RetrieveInfo(PhoneBook *Annuaire);

int	main(void)
{
	PhoneBook 	Annuaire;
	std::string command;

	std::cout << CYAN << "Welcome in this amazing PhoneBook" << END << std::endl;
	std::cout << std::endl;
	std::cout << "Available commands are " << BOLD << "\"ADD\', \"SEARCH\", \"EXIT\"" << END << std::endl;
	while (1)
	{
		if (std::cin.eof()){
			std::cout << RED << "EOF Detected, aborting program" << END << std::endl;
			return (0);
		}
		std::cout << BOLD << "Enter a command : " << END;
		std::getline(std::cin, command);
		if (command == "ADD")
			AddContact(&Annuaire);
		else if (command == "SEARCH")
			PrintBook(&Annuaire);
		else if (command == "EXIT")
			return (0);
		else if (command[0]){
			std::cout << command << RED << " : is not a valid command\n" << END;
			std::cout << "Available commands are " << BOLD << "\"ADD\', \"SEARCH\", \"EXIT\"" << END << std::endl;
		}
		std::cout << std::endl;
	}
}

int GetInfo(std::string whichInfo, std::string *information);

void	AddContact(PhoneBook *Annuaire)
{
	std::string	contactInfo[5];

	if (GetInfo("First Name", &contactInfo[0]))
		return ;
	if (GetInfo("Last Name", &contactInfo[1]))
		return ;
	if (GetInfo("Nickname", &contactInfo[2]))
		return ;
	if (GetInfo("Phone Number", &contactInfo[3]))
		return ;
	if (GetInfo("Darkest Secret", &contactInfo[4]))
		return ;
	Contact	contact(contactInfo);
	Annuaire->AddContact(contact);
}

int GetInfo(std::string whichInfo, std::string *information)
{
	std::cout << GREEN << std::setw(15) << std::left << std::setfill(' ') << whichInfo << " : " << END;
	std::getline(std::cin, *information);
	if (std::cin.eof())
		return (1);
	while ((*information).empty()){
		std::cout << RED << "You cannot leave this slot empty" << END << std::endl;
		std::cout << GREEN << std::setw(15) << std::left << std::setfill(' ') << whichInfo << " : " << END;
		std::getline(std::cin, *information);
		if (std::cin.eof())
			return (1);
	}
	return (0);
}

void	PrintBook(PhoneBook *phoneBook)
{
	int	bookSize = phoneBook->GetSize();

	std::cout << std::endl;
	if (bookSize == 0){
		std::cout << RED << "There is no contact in your PhoneBook" << END << std::endl;
		return ;
	}
	PrintLine("INDEX");
	PrintLine("FIRST NAME");
	PrintLine("LAST NAME");
	PrintLine("NICKNAME");
	std::cout << std::endl;
	for (int i = 0; i < bookSize; i++){
		std::cout << std::setw(10) << std::right << std::setfill(' ') << i << "|";
		PrintInfo(phoneBook->GetContact(i));
	}
	RetrieveInfo(phoneBook);
}

void	PrintInfo(Contact contact)
{
	std::string firstName = contact.getFirstName();
	std::string lastName = contact.getLastName();
	std::string nickName= contact.getNickName();

	PrintLine(firstName);
	PrintLine(lastName);
	PrintLine(nickName);
	std::cout << std::endl;
}

void	PrintLine(std::string info)
{
	info.length() > 10 ? info = info.substr(0, 9).append(".") : info;
	std::cout << std::setw(10) << std::right << std::setfill(' ') << info << "|";
}

void	RetrieveInfo(PhoneBook *Annuaire)
{
	std::string index;
	int 		index_int;
	Contact		contact;

	std::cout << std::endl;
	std::cout << "Give the index of the contact for whom you want information:" << std::endl;
	std::cout << BOLD << "Index: " << END;
	std::getline(std::cin, index);
	if (std::cin.eof())
		return ;
	if (index.length() == 1 || !std::isdigit(index[0])){
		std::istringstream indexStream(index);
		indexStream >> index_int;
	}
	while (index.length() != 1 || !std::isdigit(index[0]) || index_int > Annuaire->GetSize() - 1){
		std::cout << RED << index << " is not a valid index, please give an index between 0 and " << Annuaire->GetSize() - 1 << END << std::endl;
		std::cout << BOLD << "Index: " << END ;
		std::getline(std::cin, index);
		if (index.length() == 1 || !std::isdigit(index[0])){
			std::istringstream indexStream(index);
			indexStream >> index_int;
		}
	}
	std::cout << std::endl;
	contact = Annuaire->GetContact(index_int);
	std::cout << BLUE << std::setw(15) << std::left << std::setfill(' ') << "First Name " << ": " << END << contact.getFirstName() << std:: endl;
	std::cout << BLUE << std::setw(15) << std::left << std::setfill(' ') << "Last Name " << ": " << END << contact.getLastName() << std:: endl;
	std::cout << BLUE << std::setw(15) << std::left << std::setfill(' ') << "Nick Name " << ": " << END << contact.getNickName() << std:: endl;
	std::cout << BLUE << std::setw(15) << std::left << std::setfill(' ') << "Phone Number " << ": " << END << contact.getPhoneNumber() << std:: endl;
	std::cout << BLUE << std::setw(15) << std::left << std::setfill(' ') << "Darkest Secret " << ": " << END << contact.getDarkestSecret() << std:: endl;
}
