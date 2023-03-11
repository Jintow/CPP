/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 10:29:48 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/03/10 16:23:49 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl harl;

	if (argc != 2)
		std::cout << "[ Probably complaining about insignificant problems ]" <<std::endl;
	else {
		int level = harl.filter(argv[1]);
		switch (level)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				harl.complain(level);
				break ;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" <<std::endl;
		}
	}

	return (0);
}
