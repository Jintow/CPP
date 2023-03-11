/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:04:46 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/03/10 14:42:11 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.h"

class HumanB {

public:
	HumanB(std::string name);
	~HumanB();

	void	setWeapon(Weapon &weapon);
	void	attack();

private:
	std::string	_name;
	Weapon		*_weapon;

};


#endif
