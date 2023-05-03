/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:32:30 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/05/03 11:32:30 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Caster.hpp"
#include <iostream>

int main(void)
{
	Data	elem;

	elem.nb = 45;
	elem.flt = 42.0f;
	elem.c = 'J';

	std::cout << elem.nb << " -> " << elem.flt << " -> " << elem.c << std::endl;
	Data	*elem2 = Caster::deserialize(Caster::serialize(&elem));
	std::cout << elem2->nb << " -> " << elem2->flt << " -> " << elem2->c << std::endl;

}