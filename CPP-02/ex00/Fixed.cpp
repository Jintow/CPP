//
// Created by Johan Litaudon on 3/20/23.
//

#include "Fixed.hpp"

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
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits(const int raw)
{
	this->_value = raw;
	std::cout << "setRawBits member function called:" << std::endl;
}