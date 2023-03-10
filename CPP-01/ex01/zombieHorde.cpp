/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 10:29:05 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/03/10 16:44:45 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//todo : protect from negative int;

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *zombie = new Zombie[N];

	for (int i = 0 ; i < N; i++){
		zombie[i].setName(name);
		zombie[i].announce();
	}
	return (zombie);
}