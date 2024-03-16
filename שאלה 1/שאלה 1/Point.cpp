#include "Point.h"
Point::Point(const Point& other)
{
	x = other.x;
	y = other.y;
}
std::ostream& operator<<(std::ostream& lhs, const Point& p) 
{
	lhs <<"( " <<p.x << " , " << p.y << " )";

	return lhs;
}
std::istream& operator >>(std::istream& lhs,  Point& p)
{
	lhs >> p.x >> p.y;
	return lhs;
}
