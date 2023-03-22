/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 10:29:48 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/03/22 15:44:35 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap joeyStar("Joey Star");
	ClapTrap akhenaton("Akhenaton");

	joeyStar.setAttackDamage(2);
	akhenaton.setAttackDamage(1);
	for (int i = 0; i < 4; i++)
	{
		joeyStar.attack(akhenaton.getName());
		if (joeyStar.getHitPoint() > 0 && joeyStar.getEnergyPoint() > 0)
			akhenaton.takeDamage(joeyStar.getAmount());
		akhenaton.attack(joeyStar.getName());
		if (akhenaton.getHitPoint() > 0 && akhenaton.getEnergyPoint() > 0)
			joeyStar.takeDamage(akhenaton.getAmount());
	}
	joeyStar.setAttackDamage(4);
	akhenaton.setAttackDamage(2);
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
	}
	return(0);
}
