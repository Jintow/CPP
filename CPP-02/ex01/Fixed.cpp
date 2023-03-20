//
// Created by Johan Litaudon on 3/20/23.
//

#include "Fixed.hpp"
#include <cmath>

int const Fixed::_rawBits = 8;

Fixed::Fixed():_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & number)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_value = number.getRawBits();
}

Fixed::Fixed(float number):_value(roundf(number * (1 << _rawBits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(int const number):_value(number << _rawBits)
{
	std::cout << "Int constructor called" << std::endl;
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &number)
{
	this->_value = number.getRawBits();
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

int Fixed::getRawBits() const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits(const int raw)
{
	this->_value = raw;
	std::cout << "setRawBits member function called:" << std::endl;
}

int	Fixed::toInt() const
{
	return (getRawBits() >> _rawBits);
}
float	Fixed::toFloat() const
{
	return ((float)getRawBits() / (1 << _rawBits));
}

std::ostream & operator<<(std::ostream & out, Fixed const & number)
{
	out << number.toFloat();
	return (out);
}
