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
#include <sys/time.h>
#include <iostream>

class PmergeMe{
public:
	PmergeMe(char **argv);
	~PmergeMe();

	void 	announce() const;
	void 	sort();
	void	mergeSort(std::vector<int> *pArray);
	void	insertVector(std::vector<int> &array);
	void	mergeVector(std::vector<int> &array, std::vector<int> &array_left, std::vector<int> &array_right);
	void 	mergeSort(std::list<int> *pList);
	void	insertList(std::list<int> &list);
	void	mergeList(std::list<int> &array, std::list<int> &array_left, std::list<int> &array_right);


private:

	std::vector<int>	_vSort;
	std::list<int>		_lSort;
	bool isAlphaStr(char *str) const;
	PmergeMe();
	PmergeMe(PmergeMe const & src);
	PmergeMe &operator=(PmergeMe const & src);
};

#endif //CPP_09_PMERGEME_HPP
