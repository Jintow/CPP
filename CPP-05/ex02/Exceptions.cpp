/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exceptions.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:16:10 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/04/14 13:16:32 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Exceptions.hpp"

const char *Exceptions::GradeTooHighException::what() const throw() {
	return "Grade too high";
}

const char *Exceptions::GradeTooLowException::what() const throw() {
	return "Grade too low";
}

const char *Exceptions::NotSignedExecution::what() const throw() {
	return "Form is not signed";
}