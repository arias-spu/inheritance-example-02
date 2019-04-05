#ifndef SHAPE_H
#define SHAPE_H

#include <string>
using std::string;

class Shape{

public:
	Shape();
	virtual double Area()const;
	virtual double Perimeter()const;
	virtual string ToString()const;
};


#endif
