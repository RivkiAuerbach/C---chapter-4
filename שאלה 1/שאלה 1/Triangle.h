#pragma once
#include "Shape.h"
class Triangle: public Shape
{
  public:
	Triangle();
	float area()const override;
	bool isSpecial() const override;
	void printSpecial() const override;
};


