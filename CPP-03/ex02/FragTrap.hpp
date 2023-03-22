//
// Created by jlitaudo on 3/22/23.
//

#ifndef CPP_03_FRAGTRAP_HPP
#define CPP_03_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &mC);
	~FragTrap();

	void		highFiveGuys()const;
};


#endif //CPP_03_FRAGTRAP_HPP
