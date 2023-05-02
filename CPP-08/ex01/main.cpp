//
// Created by Johan Litaudon on 4/27/23.
//

#include <iostream>
#include "iter.hpp"

template <typename T>
void mod_char(T &str)
{
	for(size_t i = 0; i < str.length(); i++)
	{
		str[i] += 1;
	}
}

template <typename T>
void print_string(T &str)
{
	std::cout << str << " ";
}

int main(void)
{
	std::string array1[3] = {"salut ", "coucou ", "Iaorana "};

	iter<std::string>(array1, 3, print_string);
	std::cout<<std::endl <<std::endl;
	iter<std::string>(array1, 3,mod_char);
	iter<std::string>(array1, 3, print_string);
	std::cout<<std::endl << std::endl;

	int array2[4] = {1, 2, 21, -1};
	iter<int>(array2, 4, print_string);
	std::cout<<std::endl;
}