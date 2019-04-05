#ifndef SHAPE_H
#define SHAPE_H

#include <string>
using std::string;

class Shape{

public:
	Shape();
	double Area()const;
	double Perimeter()const;
	virtual string ToString()const;
};


#endif
