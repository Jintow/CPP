/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:05:58 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/05/31 11:22:20 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int main(void)
{
	Span list(10000);

	try{
		// for(int i = 0; i < 10000; i++)
		// 	list.addNumber(i * (i + 1));
		list.addRangeOfNumber(10000, -2147483648, 2147483647);
		std::cout << "Shortest Span is : " << list.shortestSpan() << std::endl;
		std::cout << "Longest Span is : " << list.longestSpan() << std::endl;
	}
	catch (std::exception &e){
		std::cerr << e.what() <<std::endl;
	}

	return (0);
}