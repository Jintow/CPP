/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 10:29:48 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/03/10 13:57:35 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string boxer = "HI THIS IS BRAIN";
	std::string *boxerPtr = &boxer;
	std::string &boxerRef = boxer;

	std::cout << "boxer address : " << &boxer << std::endl;
	std::cout << "boxer pointer address : " << boxerPtr << std::endl;
	std::cout << "boxer reference address : " << &boxerRef  << std::endl;

	std::cout << "boxer value : " << boxer << std::endl;
	std::cout << "boxer pointer value : " << *boxerPtr << std::endl;
	std::cout << "boxer reference value : " << boxerRef  << std::endl;
	return (0);
}
