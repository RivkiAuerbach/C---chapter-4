#include "Triangle.h"
#include <iostream>
#include <cmath>
using namespace std;
Triangle::Triangle() : Shape(3)
{ 
};
float Triangle::area() const
{
	float area = 0.5 * std::abs(
		(arr[0].x * (arr[1].y - arr[2].y)) +
		(arr[1].x * (arr[2].y - arr[0].y)) +
		(arr[2].x * (arr[0].y - arr[1].y)));
	return area;
}
bool Triangle::isSpecial() const
{
	float distance1 = std::sqrt(std::pow((arr[1].x - arr[0].x), 2) + std::pow((arr[1].y - arr[0].y), 2));
	float distance2 = std::sqrt(std::pow((arr[2].x - arr[1].x), 2) + std::pow((arr[2].y - arr[1].y), 2));
	float distance3 = std::sqrt(std::pow((arr[0].x - arr[2].x), 2) + std::pow((arr[0].y - arr[2].y), 2));
	 if (distance1 == distance2 && distance1 == distance3)
		 return true;
	 return false;
	
	
}
void Triangle::printSpecial() const
{
	float distance1 = std::sqrt(std::pow((arr[1].x - arr[0].x), 2) + std::pow((arr[1].y - arr[0].y), 2));
	cout << "An isosceles triangle with a side length " << distance1 << endl;
}

