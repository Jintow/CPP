<<<<<<< HEAD
//
// Created by Johan Litaudon on 4/4/23.
//

#ifndef EX00_BUREAUCRAT_HPP
#define EX00_BUREAUCRAT_HPP
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:25:57 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/04/14 11:29:01 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_05_BUREAUCRAT_HPP
#define CPP_05_BUREAUCRAT_HPP
>>>>>>> ba8a04fbc95c733a411163f4d55c31f9a57b5e1d

#include <iostream>

class Bureaucrat {

public:
	Bureaucrat();
<<<<<<< HEAD
	Bureaucrat(Bureaucrat &Bureaucrat);
	Bureaucrat(std::string name);
	~Bureaucrat();

	Bureaucrat &operator=(Bureaucrat &Bureaucrat);
	std::string &getName const;
	int			&getGrade() const;
	void		promote();
	void		demote();

private:
	std::string _name;
	int			_grade;
};


#endif //EX00_BUREAUCRAT_HPP
=======
	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(Bureaucrat &Bureaucrat);
	~Bureaucrat();

	Bureaucrat &operator=(const Bureaucrat &Bureaucrat);
	std::string getName() const;
	int 		getGrade() const;
	void		promote();
	void		demote();

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
>>>>>>> ba8a04fbc95c733a411163f4d55c31f9a57b5e1d
