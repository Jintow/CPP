/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:05:58 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/05/03 14:23:16 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int main(void)
{
	Span list(20);

	try{
		for(int i = 0; i < 15; i++)
			list.addNumber(i*i);
		std::cout << "Shortest Span is : " << list.shortestSpan() << std::endl;
		std::cout << "Longest Span is : " << list.longestSpan() << std::endl;
	}
	catch (std::exception &e){
		std::cerr << e.what() <<std::endl;
	}

	return (0);
}