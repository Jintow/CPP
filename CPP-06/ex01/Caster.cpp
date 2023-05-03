/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:32:12 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/05/03 11:32:12 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Caster.hpp"

uintptr_t Caster::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*Caster::deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data *>(raw));
}