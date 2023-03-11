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
		harl.filter("error");
	else
		harl.filter(argv[1]);

	return (0);
}
