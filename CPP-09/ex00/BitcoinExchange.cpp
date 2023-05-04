/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 10:59:44 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/05/04 17:06:59 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <cstdlib>

Bitcoin::Bitcoin()
{
	std::string filename = "data.csv";
	std::ifstream file(filename.c_str());
	if (!file)
		throw std::runtime_error("Bad input file");
	std::string	line;
	std::string	temp;
	float		value;
	std::string	date;
	int i = 0;
	while (std::getline(file, line))
	{
		date = line.substr(0, 10);
		temp = line.substr(11, line.length());
		value = atof(temp.c_str());
		if (i != 0)
			_bitcoinPricesOverTime.insert(std::make_pair(date, value));
		i = 1;
	}
}

void Bitcoin::getPrice(std::string filename) const
{
	std::ifstream file(filename.c_str());
	if (!file)
		throw std::runtime_error("Bad input file");
	std::string	line;
	int i = 0;
	while (std::getline(file, line))
	{
		if (i == 0)
		{
			i = 1;
			continue;
		}
		if (isValidFormat(line))
			printLine(line.substr(0, 10), line.substr(13, line.length()));
	}
}

Bitcoin::~Bitcoin()
{}

bool Bitcoin::isValidFormat(std::string line) const
{

	if (line.length() < 14 || line.substr(10, 3) != " | ")
	{
		std::cout << "Error: bad input => " << line << std::endl;
		return false;
	}
	if (isValidDate(line.substr(0, 10)) && isValidAmount(line.substr(13, 11)))
		return (true);
	return false;
}

bool checkdigit(std::string str)
{
	return (str.find_first_not_of("0123456789") == std::string::npos);
}

bool Bitcoin::isValidDate(std::string line) const
{

	const char *str = line.c_str();

	if (str[4] != '-' || str[7] != '-')
	{
		std::cout << "Error: bad input => " << line << std::endl;
		return false;
	}

	std::string year = line.substr(0, 4);
	std::string month = line.substr(5,2);
	std::string day = line.substr(8, 2);
	if (!(checkdigit(year) || checkdigit(month) || checkdigit(day)) || line == "2009-01-01")
	{
		std::cout << "Error :" << line << " : not a valid date" << std::endl;
		return false;
	}
	else if (atoi(year.c_str()) < 2009){
		std::cout << "Error: invalid year date => " << line << std::endl;
		return false;
	}
	else if (atoi(month.c_str()) > 12){
		std::cout << "Error: invalid month date => " << line << std::endl;
		return false;
	}
	else if (atoi(day.c_str()) > 31){
		std::cout << "Error: invalid day date => " << line << std::endl;
		return false;
	}
	return true;
}

bool Bitcoin::isValidAmount(std::string amount) const
{
	float	benefits = atof(amount.c_str());

	if (benefits < 0){
		std::cout << "Error: not a positive number" << std::endl;
		return false;
	}
	else if (benefits > 1000)
	{
		std::cout << "Error: too large number" << std::endl;
		return false;
	}
	return true;
}

void Bitcoin::printLine(std::string date, std::string amount) const
{
	float	benefits = atof(amount.c_str());

	std::cout << date << " => " << benefits * findExchangePrice(date) << std::endl;
}

float Bitcoin::findExchangePrice(std::string date) const
{
	std::map<std::string, float>::const_iterator it = _bitcoinPricesOverTime.end();
	it--;
	if (strcmp(it->first.c_str(), date.c_str()) < 0)
		return (it->second);
	it = _bitcoinPricesOverTime.begin();
	if (strcmp(it->first.c_str(), date.c_str()) == 0)
		return (it->second);
	for (it = _bitcoinPricesOverTime.begin(); it != _bitcoinPricesOverTime.end(); it++)
	{
		if (strcmp(it->first.c_str(), date.c_str()) >= 0)
		{
			it--;
			return (it->second);
		}
	}
	return (0.0f);
}