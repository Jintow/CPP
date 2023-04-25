/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 11:18:32 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/04/12 11:18:32 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_04_IMATERIASOURCE_HPP
#define CPP_04_IMATERIASOURCE_HPP

#include "AMateria.hpp"
#include <iostream>

class IMateriaSource
{
public:
	virtual 			~IMateriaSource() {}
	virtual void		learnMateria(AMateria*) = 0;
	virtual AMateria	*createMateria(std::string const & type) = 0;
};


#endif //CPP_04_IMATERIASOURCE_HPP
