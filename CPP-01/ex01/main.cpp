/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 10:29:48 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/03/10 16:44:45 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string name);
Zombie *zombieHorde(int N, std::string name);

int	main(void)
{
	Zombie zombie1 = Zombie(std::string("Denver")); // envoie une reference ?
	Zombie *zombie2 = zombieHorde(42, "OnePiece");

	zombie1.announce();
	delete[] zombie2;
	return (0);
}