/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:46:04 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/04/14 16:47:50 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_05_INTERN_HPP
#define CPP_05_INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
public:
	Intern();
	~Intern();
	Intern(Intern const & src);
	Intern & operator=(Intern const & src);

	Form *makeForm(std::string const name, std::string const & target);

private:
};

#endif //CPP_05_INTERN_HPP
