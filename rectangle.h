#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

#include <string>
using std::string;

class Rectangle: public Shape{
	double _width, _height;
public:
	Rectangle(double width, double height);
	double Area()const;
	double Perimeter()const;
	string ToString()const;
	double Diagonal()const;

};


#endif
