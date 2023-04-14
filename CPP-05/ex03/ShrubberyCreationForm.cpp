/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:09:44 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/04/14 14:43:19 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
Form("ShrubberyCreationForm", 145, 137),
_target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &formulary):
Form(formulary), _target(formulary._target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (this->isSigned() == false)
		throw Exceptions::NotSignedExecution();
	else if (executor.getGrade() > this->getExecutionGrade())
		throw Exceptions::GradeTooLowException();
	else {
		std::string fileName = this->_target + "_shrubbery";
		std::ofstream file(fileName.c_str());
		if (!file.is_open()) {
			std::perror(fileName.c_str());
			return ;
		}
		file << "                      ___" << std::endl;
		file << "                _,-'\"\"   \"\"\"\"`--." << std::endl;
		file << "             ,-'          __,,-- \\" << std::endl;
		file << "           ,\'    __,--\"\"\"\"dF      )" << std::endl;
		file << "          /   .-\"Hb_,--\"\"dF      /" << std::endl;
		file << "        ,\'       _Hb ___dF\"-._,-'" << std::endl;
		file << "      ,'      _,-\"\"\"\"   \"\"--..__" << std::endl;
		file << "     (     ,-'                  `." << std::endl;
		file << "      `._,'     _   _             ;" << std::endl;
		file << "       ,'     ,' `-'Hb-.___..._,-'" << std::endl;
		file << "       \\    ,'\"Hb.-\'HH`-.dHF\"" << std::endl;
		file << "        `--\'   \"Hb  HH  dF\"" << std::endl;
		file << "                \"Hb HH dF" << std::endl;
		file << "                 \"HbHHdF" << std::endl;
		file << "                  |HHHF" << std::endl;
		file << "                  |HHH|" << std::endl;
		file << "                  |HHH|" << std::endl;
		file << "                  |HHH|" << std::endl;
		file << "                  |HHH|" << std::endl;
		file << "                  dHHHb" << std::endl;
		file << "                .dFd|bHb.               o" << std::endl;
		file << "      o       .dHFdH|HbTHb.          o /" << std::endl;
		file << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y" << std::endl;
		file << "##########################################" << std::endl;
		file.close();
	}
}