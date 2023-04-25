/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 10:22:51 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/04/14 11:39:21 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():_Name("Toilet Paper"), _SigningGrade(150), _ExecutionGrade(150), _IsSigned(false)
{}

Form::Form(std::string name, int signingGrade, int executionGrade):\
_Name(name), _SigningGrade(signingGrade), _ExecutionGrade(executionGrade), _IsSigned(false)
{
	if (signingGrade < 1 || executionGrade < 1)
		throw GradeTooLowException();
	else if (executionGrade > 150 || signingGrade > 150)
		throw GradeTooHighException();
}

Form::Form(Form &Form):_Name(Form.getName()), _SigningGrade(Form.getSigningGrade()), \
_ExecutionGrade(Form.getExecutionGrade()), _IsSigned(Form.isSigned())
{
}
Form::~Form()
{}

Form &Form::operator=(const Form &Form)
{
	if (this != &Form)
		this->_IsSigned = Form._IsSigned;
	return (*this);
}

std::string Form::getName() const
{
	return (this->_Name);
}

int Form::getSigningGrade() const
{
	return (this->_SigningGrade);
}

int Form::getExecutionGrade() const
{
	return (this->_ExecutionGrade);
}

bool Form::isSigned() const
{
	return (this->_IsSigned);
}

void Form::beSigned(Bureaucrat &Bureaucrat)
{
	if (Bureaucrat.getGrade() <= this->_SigningGrade)
		this->_IsSigned = true;
	else
		throw GradeTooLowException();
	Bureaucrat.signForm(*this);
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("The grade is too low to sign this formulary");
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("The required grade to sign this formulary is too high");
}

std::ostream &operator<<(std::ostream &out, const Form &Form)
{
	out << "Formulary " << Form.getName() << std::endl;
	out << "Grade to be signed : " << Form.getSigningGrade() << std::endl;
	out << "Grade to be executed : " << Form.getExecutionGrade() << std::endl;
	if (Form.isSigned() == true)
		out << "This Formulary is already signed." << std::endl;
	else
		out << "This Formulary is not signed." << std::endl;
	return (out);
}