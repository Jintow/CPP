//
// Created by Johan Litaudon on 3/27/23.
//

#ifndef CPP_04_BRAIN_HPP
#define CPP_04_BRAIN_HPP

#include <iostream>

class Brain {

	public:
		Brain();
		Brain(Brain const &mind);
		~Brain();

		Brain &operator=(Brain const &mind);
		std::string	ideas[100];
};


#endif //CPP_04_BRAIN_HPP
