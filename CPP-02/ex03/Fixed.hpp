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
	Fixed(const int number);
	Fixed(const float number);
	~Fixed();

	Fixed 	 			&operator=(Fixed const & number);
	bool 				operator>(Fixed const & number) const;
	bool 				operator>=(Fixed const & number) const;
	bool 				operator<(Fixed const & number) const;
	bool 				operator<=(Fixed const & number) const;
	bool 				operator==(Fixed const & number) const;
	bool 				operator!=(Fixed const & number) const;
	Fixed 				operator+(Fixed const &number) const;
	Fixed 				operator-(Fixed const &number) const;
	Fixed 				operator*(Fixed const &number) const;
	Fixed 				operator/(Fixed const &number) const;

	Fixed				&operator++(void);
	Fixed				&operator--(void);
	Fixed				operator++(int);
	Fixed				operator--(int);

	int 				getRawBits(void) const;
	void				setRawBits(int const raw);
	int 				toInt(void) const;
	float				toFloat(void)const;
	static Fixed		&max(Fixed &number1, Fixed &number2);
	static Fixed		&min(Fixed &number1, Fixed &number2);
	static const Fixed	&min(const Fixed &number1, const Fixed &number2);
	static const Fixed	&max(const Fixed &number1, const Fixed &number2);

private:
	int				_value;
	static int const _rawBits;
};

std::ostream & operator<<(std::ostream & out, Fixed const & number);


#endif //CPP_FIXED_HPP
