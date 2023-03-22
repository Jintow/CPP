//
// Created by jlitaudo on 3/22/23.
//

#ifndef CPP_03_CLAPTRAP_HPP
#define CPP_03_CLAPTRAP_HPP

#include <iostream>

#define END		"\033[0m"
#define BOLD	"\033[1m"
#define RED		"\033[1;31m"
#define GREEN	"\033[1;32m"
#define YELLOW	"\033[1;33m"
#define BLUE	"\033[1;34m"
#define PURPLE	"\033[1;35m"
#define CYAN	"\033[1;36m"

class ClapTrap {

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &mC);
	~ClapTrap();

	ClapTrap		&operator=(ClapTrap const &mC);
	std::string		getName(void) const;
	unsigned int	getAmount(void) const;
	int				getHitPoint(void) const;
	int				getEnergyPoint() const;
	void			setAttackDamage(const unsigned int flow);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

protected:
		std::string		_name;
		int				_hitPoints;
		int				_energyPoints;
		unsigned int	_attackDamage;
};


#endif //CPP_03_CLAPTRAP_HPP
