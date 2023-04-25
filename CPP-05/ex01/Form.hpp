/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 17:13:47 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/04/14 10:57:05 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CPP_05_FORM_HPP
#define CPP_05_FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

public:
	Form();
	Form(std::string name, int signingGrade, int executionGrade);
	Form(Form &Form);
	~Form();

	Form &operator=(const Form &Form);

	std::string getName() const;
	int 		getSigningGrade() const;
	int 		getExecutionGrade() const;
	bool		isSigned() const;
	void		beSigned(Bureaucrat &Bureaucrat);

	class GradeTooHighException: public std::exception {
	public:
		const char *what() const throw();
	};
	class GradeTooLowException: public std::exception {
	public:
		const char *what() const throw();
	};

private:
	const std::string	_Name;
	const int 			_SigningGrade;
	const int 			_ExecutionGrade;
	bool				_IsSigned;

};

std::ostream &operator<<(std::ostream &out, const Form &Form);


#endif //CPP_05_FORM_HPP
