//
// Created by jlitaudo on 5/4/23.
//

#ifndef CPP_09_RPN_HPP
#define CPP_09_RPN_HPP

#include <stack>
#include <algorithm>
#include <iostream>

class RPN {

public:
	RPN(std::string str);
	~RPN();


private:
	std::stack<int>		_numbers;
	int					_summit;


	RPN();
	RPN(RPN const & src);
	RPN &operator=(RPN const &src);

};


#endif //CPP_09_RPN_HPP
