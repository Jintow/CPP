/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:51:55 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/05/03 10:41:37 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int	main(void)
{
	try {
		Bureaucrat Kufandy("Kufandy", 0);
		Bureaucrat Swimmer("Swimmer", 151);
//		Kufandy.promote();
		Kufandy.demote();
//		Swimmer.demote();
		Swimmer.promote();
		std::cout << Kufandy << std::endl;
		std::cout << Swimmer << std::endl;
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Form constitution("Constitution", 1 , 50);
		std::cout << constitution;
		Bureaucrat president ("President", 1);
		constitution.beSigned(president);
		std::cout << constitution;
		std::cout << std::endl << " ============= " << std::endl << std::endl;
		Form paper;
		Form law("Retire law", 10, 80);
		Form law2 = law;
		std::cout << law2;
		Bureaucrat tribun ("Parliamentor", 15);
		law2.beSigned(tribun);
		std::cout << std::endl << " ============= " << std::endl << std::endl;
		Form law3("Impossible", 0, 151);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	return (0);
}