/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:56:30 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/05/11 15:56:08 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{

	if (argc == 1)
	{
		std::cout << "Usage: ./PmergeMe [n1] [n2] ..." << std::endl;
		return (1);
	}
	try {
		PmergeMe	sortedNumbers(&argv[1]);
		std::cout << "Before:\t";
		sortedNumbers.announce();
		sortedNumbers.sort();
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
	return (0);
}