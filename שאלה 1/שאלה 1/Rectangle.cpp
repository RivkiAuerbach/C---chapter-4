#include "Rectangle.h"
#include <iostream>
#include <cmath>
using namespace std;
Rectangle::Rectangle() :Shape(4) {

}
float Rectangle::area() const
{
	float distance1 = std::sqrt(std::pow((arr[1].x - arr[0].x), 2) + std::pow((arr[1].y - arr[0].y), 2));
	float distance2 = std::sqrt(std::pow((arr[2].x - arr[1].x), 2) + std::pow((arr[2].y - arr[1].y), 2));
	return distance1* distance2;
}
bool Rectangle::isSpecial() const
{
	float distance1 = std::sqrt(std::pow((arr[1].x - arr[0].x), 2) + std::pow((arr[0].y - arr[1].y), 2));
	float distance2 = std::sqrt(std::pow((arr[2].x - arr[1].x), 2) + std::pow((arr[2].y - arr[1].y), 2));
	float distance3 = std::sqrt(std::pow((arr[3].x - arr[2].x), 2) + std::pow((arr[3].y - arr[2].y), 2));
	float distance4 = std::sqrt(std::pow((arr[0].x - arr[3].x), 2) + std::pow((arr[0].y - arr[3].y), 2));
	if (distance1 == distance2 && distance2 == distance3 && distance3 == distance4 && distance4 == distance1)
		return true;
	return false;


}
void Rectangle::printSpecial() const
{
	float distance1 = std::sqrt(std::pow((arr[1].x - arr[0].x), 2) + std::pow((arr[1].y - arr[0].y), 2));
	cout << "Square with side length " << distance1 << endl;
}


