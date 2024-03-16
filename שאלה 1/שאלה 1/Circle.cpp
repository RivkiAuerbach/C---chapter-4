#include "Circle.h"
#include <iostream>
using namespace std;
Circle::Circle() : Shape(1) {
	cout << "enter a radius" << endl;
	cin >> radius;
};
float Circle::area() const
{
	return 3.14 * radius * radius;
}
bool Circle::isSpecial() const
{
	if (arr[0].x == 0 && arr[0].y == 0)
		return true;
	return false;
}
void Circle::printSpecial() const 
{
	cout << "A canonical circle with a radius " << radius<<endl;
}


