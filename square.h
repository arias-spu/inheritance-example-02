#ifndef SQUARE_H
#define SQUARE_H

#include "rectangle.h"
#include <string>
using std::string;

class Square : public Rectangle{

public:
	Square(double);
	string ToString()const;
};


#endif
