#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

#include <string>
using std::string;

class Rectangle: public Shape{
	size_t _width, _height;
public:
	Rectangle(size_t width, size_t height);
	double Area()const;
	double Perimeter()const;
	string ToString()const;
	double Diagonal()const;

};


#endif
