/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:22:42 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/04/14 16:23:58 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):
		Form("PresidentialPardonForm", 25, 5),
		_target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &formulary):
		Form(formulary), _target(formulary._target)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if (this->isSigned() == false)
		throw Exceptions::NotSignedExecution();
	else if (executor.getGrade() > this->getExecutionGrade())
		throw Exceptions::GradeTooLowException();
	else {
		std::cout << this->_target << " has been forgiven by Zaphod Beeblebrox." << std::endl;
	}
}