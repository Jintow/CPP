/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:58:14 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/05/11 18:27:01 by jlitaudo         ###   ########.fr       */
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

bool PmergeMe::isAlphaStr(char *str) const
{
	while (*str)
	{
		if (*str > '9' || *str < '0')
			return false;
		str++;
	}
	return (true);
}

void	PmergeMe::announce() const
{
//	std::vector<int>::iterator it = _vSort.begin();
	for (unsigned long i = 0; i < _vSort.size(); i++)
	{
		std::cout << _vSort[i] << " " ;
	}
	std::cout << std::endl;
}

void	PmergeMe::sort()
{
	struct timeval start_time, end_time;

	gettimeofday(&start_time, NULL);
	mergeSort(&_vSort);
	gettimeofday(&end_time, NULL);
	std::cout << "After:\t";
	announce();
	long elapsed_time = (end_time.tv_sec - start_time.tv_sec) * 1000000 + end_time.tv_usec - start_time.tv_usec;
	std::cout << "Time to process a range of " << _vSort.size() << " element with std::vector\t: " << elapsed_time << " microseconds." << std::endl;
	gettimeofday(&start_time, NULL);
	mergeSort(&_lSort);
	gettimeofday(&end_time, NULL);
	elapsed_time = (end_time.tv_sec - start_time.tv_sec) * 1000000 + end_time.tv_usec - start_time.tv_usec;
	std::cout << "Time to process a range of " << _lSort.size() << " element with std::list\t: " << elapsed_time << " microseconds." << std::endl;
}

void	PmergeMe::mergeSort(std::vector<int> *pArray)
{
	std::vector<int>	array_right;
	std::vector<int>	array_left;
	std::vector<int>	array = *pArray;
	int 				mid;

	if (array.size() > 10)
	{
		mid = array.size() / 2;
		for (int i = 0; i < mid; i++)
			array_left.push_back(array[i]);
		for(size_t i = mid; i < array.size(); i++)
			array_right.push_back(array[i]);
		mergeSort(&array_right);
		mergeSort(&array_left);
		mergeVector(*pArray, array_left, array_right);
	}
	else
		insertVector(*pArray);
}

void PmergeMe::insertVector(std::vector<int> &array)
{
	for(std::vector<int>::iterator it = array.begin(); it != array.end(); ++it)
	{
		std::vector<int>::iterator jt = it - 1;
		int temp = *it;
		while (jt >= array.begin() && *jt > temp)
			jt--;
		array.erase(it);
		array.insert(jt + 1, temp);
	}
}

void PmergeMe::mergeVector(std::vector<int> &array, std::vector<int> &array_left, std::vector<int> &array_right)
{
	size_t i = 0;
	size_t j = 0;
	size_t k = 0;
	size_t sizeArrayLeft = array_left.size();
	size_t sizeArrayRight = array_right.size();

	while (i < sizeArrayLeft && j < sizeArrayRight) {
		if (array_left[i] < array_right[j]) {
			array[k] = array_left[i];
			i++;
		} else {
			array[k] = array_right[j];
			j++;
		}
		k++;
	}
	while (i < sizeArrayLeft) {
		array[k] = array_left[i];
		i++;
		k++;
	}

	while (j < sizeArrayRight) {
		array[k] = array_right[j];
		j++;
		k++;
	}
}

void	PmergeMe::mergeSort(std::list<int> *pList)
{
	std::list<int>				listRight;
	std::list<int>				listLeft;
	std::list<int>				list = *pList;
	std::list<int>::iterator	listIt = list.begin();
	int 						mid;

	listIt = list.begin();
	if (list.size() > 10)
	{
		mid = list.size() / 2;
		for (int i = 0; i < mid; i++)
		{
			listLeft.push_back(*listIt);
			listIt++;
		}
		while (listIt != list.end())
		{
			listRight.push_back(*listIt);
			listIt++;
		}
		mergeSort(&listRight);
		mergeSort(&listLeft);
		mergeList(*pList, listLeft, listRight);
	}
	else
		insertList(*pList);
}

void PmergeMe::insertList(std::list<int> &list)
{
	for (std::list<int>::iterator it = std::next(list.begin()); it != list.end(); ++it)
	{
		std::list<int>::iterator jt = std::prev(it);
		int temp = *it;
		while (jt != list.begin() && *jt > temp)
		{
			jt = std::prev(jt);
		}
		if (*jt > temp)
		{
			list.erase(it);
			list.insert(list.begin(), temp);
		}
		else
		{
			list.erase(it);
			list.insert(std::next(jt), temp);
		}
	}
}

void PmergeMe::mergeList(std::list<int> &list, std::list<int> &listLeft, std::list<int> &listRight)
{
	std::list<int>::iterator listLeftIt = listLeft.begin();
	std::list<int>::iterator listRightIt = listRight.begin();
	std::list<int>::iterator listIt = list.begin();

	while (listLeftIt != listLeft.end() && listRightIt != listRight.end()) {
		if (*listLeftIt < *listRightIt) {
			*listIt = *listLeftIt;
			listLeftIt++;
		} else {
			*listIt = *listRightIt;
			listRightIt++;
		}
		listIt++;
	}
	while (listLeftIt != listLeft.end()) {
		*listIt = *listLeftIt;
		listLeftIt++;
		listIt++;
	}

	while (listRightIt !=listRight.end()) {
		*listIt = *listRightIt;
		listRightIt++;
		listIt++;
	}
}
