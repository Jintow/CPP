/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:51:55 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/04/12 17:07:44 by jlitaudo         ###   ########.fr       */
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

	return (0);
}