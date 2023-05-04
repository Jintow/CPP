/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:42:05 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/05/04 12:41:53 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Using : './Bitcoin [input_file]" << std::endl;
		return (1);
	}
	Bitcoin bitcoinData;

	bitcoinData.getPrice(argv[1]);
}