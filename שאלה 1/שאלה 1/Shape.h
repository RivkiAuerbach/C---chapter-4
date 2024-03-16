#pragma once
#include "Point.h"
#include <ostream>
class Shape
{public:
		int numOfPoint;
		Point* arr;
		Shape();
		Shape(int numOfPoint);
		Shape(const Shape& other);//���� �����
		Shape( Shape&& other);//���� ����
		virtual ~Shape();
		friend  std::ostream& operator<<(std::ostream& lhs, const Shape& shape);
		virtual float area()const=0;
		virtual bool isSpecial()const = 0;
		virtual void printSpecial()const = 0;

};

