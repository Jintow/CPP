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

void	PmergeMe::mergeSort(std::vector<int> array)
{
	std::vector<int>	array_right;
	std::vector<int>	array_left;
	int 				mid;

	if (array.size() > 64)
	{
		mid = array.size() / 2;

	}
}

void	sort_merge(t_tab *tab)
{
	size_t	mid;
	t_tab	tab_g;
	t_tab	tab_d;

	if (tab->size > 1)
	{
		mid = tab->size / 2;
		tab_g.size = mid;
		tab_g.tab = tab->tab;
		tab_d.tab = &(tab->tab[mid]);
		tab_d.size = tab->size - mid;
		sort_merge(&tab_g);
		sort_merge(&tab_d);
		tab_g.tab = ft_intdup(tab_g.tab, tab_g.size);
		if (!tab_g.tab)
			exit_and_free(tab, NULL);
		tab_d.tab = ft_intdup(tab_d.tab, tab_d.size);
		if (!tab_d.tab)
			exit_and_free(tab, tab_g.tab);
		merge_tab(&tab_g, &tab_d, tab);
	}
}

void	merge_tab(t_tab *tab_g, t_tab *tab_d, t_tab *tab_tot)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < tab_g->size && j < tab_d->size)
	{
		if (tab_g->tab[i] >= tab_d->tab[j])
			tab_tot->tab[k++] = tab_g->tab[i++];
		else
			tab_tot->tab[k++] = tab_d->tab[j++];
	}
	while (j < tab_d->size)
		tab_tot->tab[k++] = tab_d->tab[j++];
	while (i < tab_g->size)
		tab_tot->tab[k++] = tab_g->tab[i++];
	free(tab_g->tab);
	free(tab_d->tab);
}

void	exit_and_free(t_tab *tab, int *tab_temp)
{
	free(tab->tab);
	free_tab(tab->str_tab);
	if (tab_temp)
		free(tab_temp);
	exit (EXIT_FAILURE);
}


void insertionSort(vector<int>& vec, int start, int end) {
	for (int i = start + 1; i <= end; i++) {
		int key = vec[i];
		int j = i - 1;
		while (j >= start && vec[j] > key) {
			j--;
		}
		vec.insert(vec.begin() + j + 1, key);
		vec.erase(vec.begin() + i + 1);
	}
}

void merge(vector<int>& vec, int start, int mid, int end) {
	int len1 = mid - start + 1;
	int len2 = end - mid;
	vector<int> left(len1), right(len2);

	for (int i = 0; i < len1; i++)
		left[i] = vec[start + i];
	for (int j = 0; j < len2; j++)
		right[j] = vec[mid + 1 + j];

	int i = 0, j = 0, k = start;
	while (i < len1 && j < len2) {
		if (left[i] <= right[j]) {
			vec[k] = left[i];
			i++;
		}
		else {
			vec[k] = right[j];
			j++;
		}
		k++;
	}

	while (i < len1) {
		vec[k] = left[i];
		i++;
		k++;
	}

	while (j < len2) {
		vec[k] = right[j];
		j++;
		k++;
	}
}

// Fonction pour trier un vecteur par insertion
void insertionSort(vector<int>& vec, int start, int end) {
	for (int i = start + 1; i <= end; i++) {
		int key = vec[i];
		int j = i - 1;
		while (j >= start && vec[j] > key) {
			vec[j + 1] = vec[j];
			j--;
		}
		vec[j + 1] = key;
	}
}

// Fonction pour trier un vecteur par insertion-merge
void insertionMergeSort(vector<int>& vec, int start, int end, int threshold) {
	if (end - start + 1 <= threshold) {
		insertionSort(vec, start, end);
	}
	else {
		int mid = start + (end - start) / 2;
		insertionMergeSort(vec, start, mid, threshold);
		insertionMergeSort(vec, mid + 1, end, threshold);
		merge(vec, start, mid, end);
	}
}

// Fonction pour afficher un vecteur
void printVector(vector<int> vec) {
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}
	cout << endl;
}

int main() {
	// Exemple d'utilisation
	vector<int> vec = { 10, 7, 8, 9, 1, 5 };
	int n = vec.size();
	int threshold = 5; // Seuil pour le tri par insertion

	cout << "Vecteur non trié : ";
	printVector(vec);

	insertionMergeSort(vec, 0, n - 1, threshold);

	cout << "Vecteur trié : ";
	printVector(vec);

	return 0;
}