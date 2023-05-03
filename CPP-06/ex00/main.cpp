/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:31:41 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/05/03 11:31:51 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Caster.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	if (argc != 2)
		std::cout << "Usage : './Caster [arg1]'" << std::endl;
	else
		Caster::convert(argv[1]);
//	float f = 42.0001f;
//	std::cout <<f <<std::endl;
}