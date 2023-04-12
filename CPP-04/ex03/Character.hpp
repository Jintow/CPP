/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:42:05 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/03/29 16:50:50 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_04_CHARACTER_HPP
#define CPP_04_CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter{

public:
	Character();
	Character(const std::string &Name);
	Character(const Character &Character);
	~Character();

	Character 			&operator=(const Character &Character);
	const std::string	&getName() const;
	void 				equip(AMateria* m);
	void				unequip(int idx);
	void				use(int idx, ICharacter& target);

private:
	std::string _Name;
	AMateria	*_Inventory[4];

};


#endif //CPP_04_CHARACTER_HPP
