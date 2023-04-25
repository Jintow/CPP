//
// Created by Johan Litaudon on 4/4/23.
//

#ifndef EX00_BUREAUCRAT_HPP
#define EX00_BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {

public:
	Bureaucrat();
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
