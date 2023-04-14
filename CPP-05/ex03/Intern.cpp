/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:47:46 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/04/14 17:04:12 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
}

Intern::~Intern() {
}

Intern::Intern(const Intern &src) {
	*this = src;
}

Intern &Intern::operator=(const Intern &src) {
	(void) src;
	return *this;
}

Form *Intern::makeForm(const std::string name, const std::string &target)
{
	std::string form[3] = {
			"shrubbery creation",
			"robotomy request",
			"presidential pardon"
	};

	int index = 0;
	while (index < 3 && form[index] != name)
		index++;
	switch (index) {
		case 0:
			std::cout << "Intern creates " << name << std::endl;
			return (new ShrubberyCreationForm(target));
		case 1:
			std::cout << "Intern creates " << name << std::endl;
			return (new RobotomyRequestForm(target));
		case 2:
			std::cout << "Intern creates " << name << std::endl;
			return (new PresidentialPardonForm(target));
		default:
			std::cout << "This formulary does not exist." << std::endl;
	}
	return (NULL);
}
