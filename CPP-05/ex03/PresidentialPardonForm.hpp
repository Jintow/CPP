/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:20:55 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/04/14 16:20:55 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_05_PRESIDENTIALPARDONFORM_HPP
#define CPP_05_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form{

public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm &formulary);
	~PresidentialPardonForm();

	void execute(Bureaucrat const & executor) const;

private:
	std::string _target;
	PresidentialPardonForm();

};


#endif //CPP_05_PRESIDENTIALPARDONFORM_HPP
