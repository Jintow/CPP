/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:05:21 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/03/10 14:39:03 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.h"

class HumanA {

	public:
			HumanA(std::string name, Weapon &weapon);
			~HumanA();

	void	attack();

	private:
		std::string	_name;
		Weapon		&_weapon;
};


#endif //CPP_01_HUMANA_H
