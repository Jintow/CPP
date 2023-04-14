/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exceptions.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:16:02 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/04/14 13:16:31 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_05_EXCEPTIONS_HPP
#define CPP_05_EXCEPTIONS_HPP

#include <exception>

class Exceptions {

public:
	class GradeTooHighException : public std::exception {
	public:
		const char * what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		const char * what() const throw();
	};

	class NotSignedExecution : public std::exception {
	public:
		const char * what() const throw();
	};
};


#endif //CPP_05_EXCEPTIONS_HPP
