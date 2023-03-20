//
// Created by Johan Litaudon on 3/20/23.
//

#ifndef CPP_POINT_HPP
#define CPP_POINT_HPP

#include "Fixed.hpp"

class Point {

public:
	Point();
	Point(const float x, const float y);
	Point(const Point &point);
	~Point();

	Point	&operator=(Point const &point);
	Fixed	&getX(void) const;
	Fixed	&getY(void) const;


private:
	Fixed const _x;
	Fixed const _y;

};


#endif //CPP_POINT_HPP
