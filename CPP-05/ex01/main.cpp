/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:51:55 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/04/14 12:41:20 by jlitaudo         ###   ########.fr       */
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
		Form paper;
		Form law("Retire law", 10, 80);
		Form law2 = law;
		std::cout << law2;
		Form law3("Impossible", 0, 151);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	return (0);
}