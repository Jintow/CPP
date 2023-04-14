/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:03:22 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/04/14 14:42:29 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_05_SHRUBBERYCREATIONFORM_HPP
#define CPP_05_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form{

public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm &formulary);
	~ShrubberyCreationForm();

	void execute(Bureaucrat const & executor) const;

private:
	std::string _target;
	ShrubberyCreationForm();
};


#endif //CPP_05_SHRUBBERYCREATIONFORM_HPP
