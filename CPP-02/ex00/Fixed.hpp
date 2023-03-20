//
// Created by Johan Litaudon on 3/20/23.
//

#ifndef CPP_FIXED_HPP
#define CPP_FIXED_HPP

#include <iostream>

class Fixed {

public:
	Fixed();
	Fixed(Fixed const & number);
	~Fixed();

	Fixed & operator=(Fixed const & number);
	int 	getRawBits(void) const;
	void	setRawBits(int const raw);

private:
	int	_value;
	static int
	const _rawBits;

};


#endif //CPP_FIXED_HPP
