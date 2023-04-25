/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 11:43:09 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/04/12 14:50:30 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main(void)
{
	MateriaSource src = MateriaSource();
	Ice ice = Ice();
	Cure cure = Cure();
	src.learnMateria(&ice);
	src.learnMateria(&cure);
	Character me = Character("Tyrion");
	AMateria* tmp;
	tmp = src.createMateria("ice");
	me.equip(tmp);
	tmp = src.createMateria("cure");
	me.equip(tmp);
	tmp = src.createMateria("ice");
	me.equip(tmp);
	tmp = src.createMateria("cure");

	me.equip(tmp);
	tmp = src.createMateria("cure");
	me.equip(tmp);
	Character bob = Character();
	me.use(0, bob);
	me.use(1, bob);
	me.unequip(1);
	me.unequip(1);
	me.unequip(0);
	delete tmp;

//	IMateriaSource* src = new MateriaSource();
//	src->learnMateria(new Ice());
//	src->learnMateria(new Cure());
//	ICharacter* me = new Character("me");
//	AMateria* tmp;
//	tmp = src->createMateria("ice");
//	me->equip(tmp);
//	tmp = src->createMateria("cure");
//	me->equip(tmp);
//	ICharacter* bob = new Character("bob");
//	me->use(0, *bob);
//	me->use(1, *bob);
//	delete bob;
//	delete me;
//	delete src;
	return 0;
}
