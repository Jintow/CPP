/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:05:30 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/03/10 14:13:36 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();

		std::string	&getType(void);
		void		setType(std::string type);

	private:
		std::string	_type;
};


#endif //CPP_01_WEAPON_H
