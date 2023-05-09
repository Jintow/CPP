//
// Created by jlitaudo on 5/4/23.
//

#include "RPN.hpp"

RPN::RPN(std::string str)
{
	int 		i = 0;
	std::string	temp;

	_summit = 0;
	int first = 0;
	while(str[i])
	{
		while (str[i] == ' ' && str[i])
			i++;
		if (str[i] >= '0' && str[i] <= '9') {
			temp = str.substr(i, 1);
			_numbers.push(atoi(temp.c_str()));
			if (first == 0)
			{
				_summit = _numbers.top();
				first = 1;
			}
			i++;
			str = str.substr(i, str.length() - i);
			i = 0;
		}
		else if (str[i] && str[i] != ' ')
		{
			if (_numbers.size() == 0)
			{
				std::cout << "Error" << std::endl;
				return ;
			}
			else if (str[i] == '+'){
				_summit += _numbers.top();
			}
			else if (str[i] == '-')
				_summit -= _numbers.top();
			else if (str[i] == '*')
				_summit *= _numbers.top();
			else if (str[i] == '/')
			{
				if (_numbers.top() == 0)
				{
					std::cout << "Error" << std::endl;
					return ;
				}
				_summit /= _numbers.top();
			}
			else if (str[i] == '%')
			{
				if (_numbers.top() == 0) {
					std::cout << "Error" << std::endl;
					return;
				}
				_summit %= _numbers.top();
			}
			else {
				std::cout << "Error" << std::endl;
				return ;
			}
			i++;
			str = str.substr(i, str.length() - i);
			_numbers.pop();
			i = 0;
		}
	}
	if (_numbers.size() != 1)
	{
		std::cout << "Error" << std::endl;
		return ;
	}
	else
		std::cout << _summit << std::endl;
}

RPN::~RPN(){};