

#include "Point.hpp"

Fixed	triangleArea(Point summit1, Point summit2, Point summit3)
{
	Fixed	area;

	area = (summit1.getX() - summit2.getX()) * (summit3.getY() - summit2.getY());
	area = area - (summit3.getX() - summit2.getX()) * (summit1.getY() - summit2.getY());
	if (area < 0)
		area = area * -1;
	return (area);
}

bool	isInsideTriangle(Point a, Point b, Point c, Point toStudy)
{
	Fixed	area1 = triangleArea(toStudy, a, b);
	Fixed	area2 = triangleArea(toStudy, b, c);
	Fixed	area3 = triangleArea(toStudy, c, a);

	if (area1 > 0 && area2 > 0 && area3 > 0)
		return (true);
	else if (area1 < 0 && area2 < 0 && area3 < 0)
		return (true);
	return (false);
}