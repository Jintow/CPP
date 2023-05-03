//
// Created by jlitaudo on 4/12/23.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():_Name("Dupond"), _Grade(150)
{}

Bureaucrat::Bureaucrat(const std::string &name, int grade):_Name(name), _Grade(grade)
{
	if (this->_Grade > 150) {
		throw GradeTooLowException();
	}
	else if (this->_Grade < 1) {
		throw GradeTooHighException();
	}
}

Bureaucrat::Bureaucrat(Bureaucrat &Bureaucrat):_Name(Bureaucrat.getName())
{
	this->_Grade = Bureaucrat._Grade;
}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &Bureaucrat)
{
	if (this != &Bureaucrat)
		this->_Grade = Bureaucrat._Grade;
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return (this->_Name);
}
int Bureaucrat::getGrade() const
{
	return (this->_Grade);
}

void Bureaucrat::promote()
{
	if (this->_Grade - 1 < 1)
		throw GradeTooHighException();
	else
		this->_Grade--;
}

void Bureaucrat::demote()
{
	if (this->_Grade + 1 > 150)
		throw GradeTooLowException();
	else
		this->_Grade++;
}

void Bureaucrat::signForm(Form &Form) const
{
	if (Form.isSigned() == true)
		std::cout << this->_Name << " signed " << Form.getName() << std::endl;
	else
		std::cout << this->_Name << " couldn't signed " << Form.getName() << " because he doesn't have the grade to dot it." << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade too low");
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &Bureaucrat)
{
	out << Bureaucrat.getName() << " is a Bureaucrat of grade " << Bureaucrat.getGrade();
	return (out);
}