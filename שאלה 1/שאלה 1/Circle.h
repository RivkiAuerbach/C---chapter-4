#pragma once
#include "Shape.h"
class Circle:public Shape
{
   public:
	   float radius;
	   Circle();
	   float area()const override;
	   bool isSpecial() const override;
	   void printSpecial() const override;
		
};

