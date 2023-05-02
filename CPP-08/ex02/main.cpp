//
// Created by Johan Litaudon on 4/27/23.
//

#include <iostream>
#include "Array.hpp"

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
	Array<std::string> yoyo;
	Array<std::string> kourou(3);

	kourou[0] = "coucou";
	kourou[1] = "salut";
	kourou[2] = "ca va?";
	std::cout << kourou;

	Array<std::string> copy = kourou;
	Array<std::string> copy2(copy);
	std::cout <<copy <<copy2;
	std::cout <<yoyo;

	Array<int> row(5);

	row[0] = 0;
	row[1] = 1;
	row[2] = 2;
	row[3] = 4;
	row[4] = 5;

	std::cout <<row;
}