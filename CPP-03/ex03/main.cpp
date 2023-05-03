/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 10:29:48 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/03/24 13:42:29 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"


int	main(void)
{
	DiamondTrap joeyStar("Joey Star");
	DiamondTrap akhenaton("Akhenaton");

//	DiamondTrap test = joeyStar;
//	DiamondTrap test2(akhenaton);
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
	joeyStar.whoAmI();
	return(0);
}
