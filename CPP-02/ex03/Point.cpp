//
// Created by Johan Litaudon on 3/20/23.
//

#include "Point.hpp"

Point::Point():_x(0), _y(0)
{}

Point::Point(const float x, const float y): _x(x), _y(y)
{}

Point::~Point() {}

Point::Point(Point const &point):_x(point.getX()), _y(point.getY())
{}

Point &Point::operator=(Point const &point)
{
	this->_x = point.getX();
	this->_y = point.getY();
	return (*this);
}

Fixed &Point::getX() const
{
	return (this->_x);
}

Fixed &Point::getY() const
{
	return (this->_y);
}