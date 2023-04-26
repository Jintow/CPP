//
// Created by Johan Litaudon on 4/26/23.
//

#include "Caster.hpp"
#include "iostream"

int main(int argc, char **argv)
{
	if (argc != 2)
		std::cout << "Usage : './Caster [arg1]'" << std::endl;
	Caster::convert(argv[1]);
}