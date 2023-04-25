/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:51:57 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/04/14 15:54:09 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_05_ROBOTOMYREQUESTFORM_HPP
#define CPP_05_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form{

public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm &formulary);
	~RobotomyRequestForm();

	void execute(Bureaucrat const & executor) const;

private:
	std::string _target;
	RobotomyRequestForm();
};


#endif //CPP_05_ROBOTOMYREQUESTFORM_HPP
