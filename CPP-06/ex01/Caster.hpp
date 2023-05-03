/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:32:17 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/05/03 11:32:17 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_06_CASTER_HPP
#define CPP_06_CASTER_HPP

#include <inttypes.h>
#include "Data.hpp"

class Caster {
public:
	static uintptr_t	serialize(Data *ptr);
	static Data			*deserialize(uintptr_t raw);

private:
	Caster();
	~Caster();
	Caster(Caster & caster);
	Caster &operator=(Caster &caster);

};


#endif //CPP_06_CASTER_HPP
