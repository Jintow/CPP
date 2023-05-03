/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:31:18 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/05/03 11:31:18 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Caster.hpp"

void Caster::convert(const std::string &literal) {
	if (literal.length() < 1) {
		std::cout << "The input must not be empty" << std::endl;
		return ;
	}
	if (literal == "nan" || literal == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (literal == "+inf" || literal == "inf" || literal == "inff" || literal == "+inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: inff" << std::endl;
		std::cout << "double: inf" << std::endl;
	}
	else if (literal == "-inf" || literal == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	else if (checkFloat(literal)) {
		printFloat(literal);
	}
	else if (checkDouble(literal)) {
		printDouble(literal);
	}
	else if (checkInt(literal)) {
		printInt(literal);
	}
	else if (literal.length() == 1 && std::isprint(literal[0])) {
		printChar(literal);
	}
}

void Caster::printChar(const std::string &literal) {
	char c = literal[0];
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void Caster::printInt(const std::string &literal) {
	long value = 0;
	std::istringstream s(literal);
	s >> value;

	char c = static_cast<char>(value);
	if (isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (value >= INT_MIN && value <= INT_MAX)
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(value) << std::endl;
}

void Caster::printFloat(const std::string &literal) {
	float value = atof(literal.c_str());
	char c = static_cast<char>(value);
	if (isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (value >= static_cast<float>(INT_MIN) && value <= static_cast<float>(INT_MAX))
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(value) << std::endl;
}

void Caster::printDouble(const std::string &literal) {
	double value = atof(literal.c_str());
	std::cout<<value <<std::endl;
	char c = static_cast<char>(value);
	if (isprint(c))
		std::cout << "char: '" << c << "'"<< std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (value >= static_cast<float>(INT_MIN) && value <= static_cast<float>(INT_MAX))
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	if (static_cast<float>(value) >= FLT_MIN && static_cast<float>(value) <= FLT_MAX)
		std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
	else
		std::cout << "float: impossible" << std::endl;
	std::cout << "double: " << static_cast<double>(value) << std::endl;
}

bool Caster::checkInt(const std::string &literal) {
	size_t j = 0;
	if (literal[j] == '-' || literal[j] == '+') {
		j++;
	}
	for (size_t i = j; i < literal.length(); i++) {
		if (!std::isdigit(literal[i])) {
			return false;
		}
	}
	return true;
}

bool Caster::checkFloat(const std::string &literal) {
	if (literal.find('.') != std::string::npos) {
		return true;
	}
	return false;
}

bool Caster::checkDouble(const std::string &literal) {
	if (literal.find('.') != std::string::npos) {
		return true;
	}
	return false;
}
