#pragma once
#include <istream>
class Point
{
public:
	float x;
	float y;
	Point() : x(0), y(0) {}//����
	Point(const Point& other);//����� �����
	friend std::istream& operator >>(std::istream& lhs, Point& p);
	friend std::ostream& operator <<(std::ostream& lhs, const Point&  p);

};


