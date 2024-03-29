/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:51:55 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/05/03 10:47:06 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	try {
		Bureaucrat Kufandy("Kufandy", 0);
		Bureaucrat Swimmer("Swimmer", 151);

		Kufandy.demote();
		Swimmer.demote();
		Swimmer.promote();
		std::cout << Kufandy << std::endl;
		std::cout << Swimmer << std::endl;
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	Bureaucrat Kufandy("Kufandy", 1);
	Bureaucrat Proudhon("Proudhon", 140);
	ShrubberyCreationForm test("test");
	RobotomyRequestForm rbotzzle("General Grievious");
	PresidentialPardonForm forgive("Mimiron");

	std::cout << test << std::endl;
	try{
	test.beSigned(Proudhon);
	rbotzzle.beSigned(Kufandy);
	forgive.beSigned(Kufandy);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	Proudhon.executeForm(test);
	for (int i=0; i < 4; i++)
		Kufandy.executeForm(rbotzzle);
	Kufandy.executeForm(forgive);
	return (0);
}