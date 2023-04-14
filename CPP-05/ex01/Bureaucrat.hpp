/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:25:57 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/04/14 11:01:50 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CPP_05_BUREAUCRAT_HPP
#define CPP_05_BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {

public:
	Bureaucrat();
	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(Bureaucrat &Bureaucrat);
	~Bureaucrat();

	Bureaucrat &operator=(const Bureaucrat &Bureaucrat);
	std::string getName() const;
	int 		getGrade() const;
	void		promote();
	void		demote();
	void		signForm(Form &Form) const;

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
	int 				_Grade;

};
std::ostream &operator<<(std::ostream &out, const Bureaucrat &Bureaucrat);

#endif //CPP_05_BUREAUCRAT_HPP
