/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:19:08 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/05/11 15:32:08 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_09_PMERGEME_HPP
#define CPP_09_PMERGEME_HPP


#include <vector>
#include <list>
#include <algorithm>
#include <iostream>
#include <stdexcept>

class PmergeMe{
public:
	PmergeMe(char **argv);
	~PmergeMe();

	void 	announce();
	void	mergeSort(std::vector<int> array);
	void 	mergeSort(std::list<int> array);



private:
	std::vector<int>	_vSort;
	std::list<int>		_lSort;

	bool isAlphaStr(char *str);
	PmergeMe();
	PmergeMe(PmergeMe const & src);
	PmergeMe &operator=(PmergeMe const & src);
};

#endif //CPP_09_PMERGEME_HPP
