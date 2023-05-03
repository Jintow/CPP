//
// Created by Johan Litaudon on 4/27/23.
//

#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main(void)
{
	std::vector<int> list;

	for(int i=0; i <= 10; i++)
	{
		list.push_back(i);
	}
	try{
		std::vector<int>::iterator search = easyfind<std::vector<int> >(list, 5);
		std::cout << *search << std::endl;
		search = easyfind<std::vector<int> >(list, 2);
		std::cout << *search << std::endl;
		search = easyfind<std::vector<int> >(list, 12);
		std::cout << *search;
	}
	catch (std::exception &e){
		std::cerr << "Error :" << e.what() << std::endl;
	}
}