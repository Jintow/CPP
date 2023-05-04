/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 10:24:20 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/05/04 15:51:36 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_09_BITCOINEXCHANGE_HPP
#define CPP_09_BITCOINEXCHANGE_HPP

#include <map>
#include <iostream>
#include <stdexcept>
#include <fstream>
#include <cstring>

class Bitcoin {

public:
	Bitcoin();
	~Bitcoin();

	void	getPrice(std::string file) const;

private:
	std::map<std::string, float> _bitcoinPricesOverTime;

	bool	isValidFormat(std::string line) const;
	bool	isValidDate(std::string line) const;
	bool	isValidAmount(std::string line) const;
	void	printLine(std::string date, std::string amount) const;
	float	findExchangePrice(std::string date) const;



	Bitcoin &operator=(Bitcoin const & src);
	Bitcoin(Bitcoin const & src);
};

typedef std::map<std::string, float>::iterator mapIterator;


#endif //CPP_09_BITCOINEXCHANGE_HPP
