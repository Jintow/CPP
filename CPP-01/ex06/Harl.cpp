/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 10:29:48 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/03/10 16:23:49 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	this->_ptr_level[0] = &Harl::_debug;
	this->_ptr_level[1] = &Harl::_info;
	this->_ptr_level[2] = &Harl::_warning;
	this->_ptr_level[3] = &Harl::_error;
	this->_levels[0] = "DEBUG";
	this->_levels[1] = "INFO";
	this->_levels[2] = "WARNING";
	this->_levels[3] = "ERROR";
}

Harl::~Harl(){}

void	Harl::_debug()
{
	std::cout << GREEN_B << "[DEBUG]" << DEFAULT << std::endl;
	std::cout << GREEN << "I miss the Warcraft tournament party in the cluster" << std::endl;
}

void	Harl::_info()
{
	std::cout << CYAN_B << "[INFO]" << DEFAULT << std::endl;
std::cout << CYAN << "I would love to have a functionnal intranet on 42 school" << std::endl;
}

void	Harl::_warning()
{
	std::cout << PURPLE_B << "[WARNING]" << DEFAULT << std::endl;
	std::cout << PURPLE << "These incomprehensibles sessions shutdowns are really driving me crazy" << std::endl;
}

void	Harl::_error()
{
	std::cout << RED_B << "[ERROR]" << DEFAULT << std::endl;
	std::cout << RED << "I think i gonna kill the responsible of these god damned freezes" << std::endl;
}

void	Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++) {
		if (this->_levels[i] == level)
		{
			(this->*_ptr_level[i])();
			break ;
		}
	}
}

