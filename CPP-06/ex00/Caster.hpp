//
// Created by Johan Litaudon on 4/26/23.
//

#ifndef CPP_06_CASTER_HPP
#define CPP_06_CASTER_HPP

#pragma once
#include <iostream>
#include <sstream>
#include <climits>
#include <math.h>
#include <float.h>

class Caster {
public:
	static void convert(std::string const & literal);

private:
	static void printChar(std::string const & literal);
	static void printInt(std::string const & literal);
	static void printFloat(std::string const & literal);
	static void printDouble(std::string const & literal);

	static bool checkInt(std::string const & literal);
	static bool checkFloat(std::string const & literal);
	static bool checkDouble(std::string const & literal);

	Caster();
};


#endif //CPP_06_CASTER_HPP
