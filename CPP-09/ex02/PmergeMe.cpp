/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:58:14 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/05/11 15:52:20 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(char **argv)
{
	int i = 0;
	while (argv[i])
	{
		if (isAlphaStr(argv[i]) == false)
		{
			std::cout << "Error :" << argv[i] << " is not a positive integer";
			throw std::runtime_error("\n");
			return;
		}
		_lSort.push_front(atoi(argv[i]));
		_vSort.push_back(atoi(argv[i]));
		i++;
	}
}

PmergeMe::~PmergeMe()
{}

bool PmergeMe::isAlphaStr(char *str)
{
	while (*str)
	{
		if (*str > '9' || *str < '0')
			return false;
		str++;
	}
	return (true);
}

void	PmergeMe::announce()
{
//	std::vector<int>::iterator it = _vSort.begin();
	for (unsigned long i = 0; i < _vSort.size(); i++)
	{
		std::cout << _vSort[i] << " " ;
	}
	std::cout << std::endl;
}