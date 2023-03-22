/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 10:29:48 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/03/22 17:15:38 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap joeyStar("Joey Star");
	ScavTrap akhenaton("Akhenaton");

	for (int i = 0; i < 4; i++)
	{
		joeyStar.attack(akhenaton.getName());
		if (joeyStar.getHitPoint() > 0 && joeyStar.getEnergyPoint() > 0)
			akhenaton.takeDamage(joeyStar.getAmount());
		akhenaton.attack(joeyStar.getName());
		if (akhenaton.getHitPoint() > 0 && akhenaton.getEnergyPoint() > 0)
			joeyStar.takeDamage(akhenaton.getAmount());
	}
	for (int i = 0; i < 4; i++)
	{
		joeyStar.beRepaired(3);
		akhenaton.beRepaired(3);
		joeyStar.attack(akhenaton.getName());
		if (joeyStar.getHitPoint() > 0 && joeyStar.getEnergyPoint() > 0)
			akhenaton.takeDamage(joeyStar.getAmount());
		akhenaton.attack(joeyStar.getName());
		if (akhenaton.getHitPoint() > 0 && akhenaton.getEnergyPoint() > 0)
			joeyStar.takeDamage(akhenaton.getAmount());
		else
			joeyStar.highFiveGuys();
		akhenaton.guardGate();
	}
	return(0);
}
