/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 10:41:08 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/03/24 13:22:31 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_03_DIAMONDTRAP_HPP
#define CPP_03_DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{

public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const &mC);
	~DiamondTrap();

	DiamondTrap	&operator=(DiamondTrap const &mC);
	std::string getName(void) const;
	void whoAmI();

private:
	std::string _name;

};


#endif //CPP_03_DIAMONDTRAP_HPP
