#pragma once
#include "Shape.h"

class Rectangle:public Shape
{
  public: 
	Rectangle();
	float area()const override;
	bool isSpecial() const override;
	void printSpecial() const override;
};

