/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:55:02 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/04/14 15:59:44 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):
		Form("RobotomyRequestForm", 72, 45),
		_target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &formulary):
		Form(formulary), _target(formulary._target)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	static int i = 0;
	if (this->isSigned() == false)
		throw Exceptions::NotSignedExecution();
	else if (executor.getGrade() > this->getExecutionGrade())
		throw Exceptions::GradeTooLowException();
	else {
		std::cout << " ZZZZzzzZzZzzzz ZZzzzZzzz ZZZZZZZZZZZZZZZZZZZZZZZZZZzzz" << std::endl;
		if (i % 2 == 0)
			std::cout << this->_target << " has been robotomized." << std::endl;
		else
			std::cout << " >>>>>> FAILURE <<<<<< " << std::endl;
	}
	i++;
}