#include "Shape.h"
#include <iostream>
#include <cmath>
using namespace std;

Shape:: Shape(){}

Shape::Shape(int x) {
	numOfPoint = x;
	arr = new Point[numOfPoint];
	cout << "Enter values of " << numOfPoint << " point:" << endl;
	for (int i = 0; i < numOfPoint; i++)
	{
		cin >> arr[i];
	}

}

Shape::Shape(const Shape& other) {
	numOfPoint = other.numOfPoint;
	arr = new Point[numOfPoint];
	for (int i = 0; i < numOfPoint; i++)
	{
		arr[i] = other.arr[i];

	}
}
Shape::Shape(Shape&& other) :numOfPoint(other.numOfPoint), arr(other.arr)
{
	other.arr = nullptr;
}

Shape::~Shape() 
{
	delete[] arr;
}

std::ostream& operator<<(std::ostream& lhs, const Shape& s)
{
	lhs << "points:  ";
	for (int i = 0; i < s.numOfPoint; i++)
	{
		lhs << s.arr[i]<<" , ";
	}
	lhs << endl;
	return lhs;
}

