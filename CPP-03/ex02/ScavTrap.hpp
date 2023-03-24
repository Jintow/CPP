/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:44:31 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/03/24 10:35:17 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CPP_03_SCAVTRAP_HPP
#define CPP_03_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &mC);
	~ScavTrap();

	void		guardGate();
	void 		attack(const std::string& target);

//protected:

};


#endif //CPP_03_SCAVTRAP_HPP
