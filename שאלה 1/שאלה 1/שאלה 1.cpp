#include "Point.h"
#include "Shape.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include <iostream>
using namespace std;
int main()
{
    int num,x;
    cout << "How many shapes you would like to define?" << endl;
    cin >> num;
    Shape **shapeArr = new Shape*[num];
   
    for (int i = 0; i < num; i++)
    {
        cout << "Which space will you choose? Circle - 1 , Triangle - 3 , Rectangle - 4" << endl;
        cin >> x;
        switch (x)
       {
        case 1: 
        {
            shapeArr[i] = new Circle();
            break; 
        }
        case 3:
        {
            shapeArr[i] = new Triangle();
            break;
        }
        case 4:
        {
            shapeArr[i] = new Rectangle();
            break;
        }
        default:
        {
            cout << "invalid input" << endl;
            i--;
        }
       }
       
    }
    for (int i = 0; i < num; i++)
    {
        cout << *shapeArr[i] << " ";
        cout <<"area: " << shapeArr[i]->area() << " ";
        if (shapeArr[i]->isSpecial())
            shapeArr[i]->printSpecial();
        cout << endl;
    }
    return 0;
    
}

