/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 10:51:45 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/04/12 10:55:39 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_04_MATERIASOURCE_HPP
#define CPP_04_MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include <iostream>

class MateriaSource : public IMateriaSource {

public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(MateriaSource const & src);
	MateriaSource & operator=(MateriaSource const & rhs);

	AMateria	*getMateria(std::string const & type);
	AMateria	*createMateria(std::string const & type);
	void		learnMateria(AMateria *m);

private:
	AMateria* _materia[4];
};


#endif //CPP_04_MATERIASOURCE_HPP
