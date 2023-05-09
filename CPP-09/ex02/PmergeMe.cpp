/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:58:14 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/05/09 15:30:54 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(char **argv)
{
	int i = 0;
	while (argv[i])
	{
		if (isAlphaStr(argv[i]) == false);
		{
			std::cout << "Error :" << argv[i] << " is not a positive integer" << std::endl;
			return;
		}
		_lSort.push_front(atoi(argv[i]));
		_vSort.push_back(atoi(argv[i]));
		i++;
	}
}

bool PmergeMe::isAlphaStr(char *str)
{
	while (str)
	{
		if (*str >= '9' || *str <= '0')
			return false;
		str++;
	}
	return (true);
}
