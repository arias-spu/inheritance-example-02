#include "shape.h"
#include "rectangle.h"
#include "square.h"

#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main(){
	vector<Shape*> shapes;

	shapes.push_back(new Shape());
	shapes.push_back(new Square(5));
	shapes.push_back(new Rectangle(1, 3));
	// shapes.push_back(string("Hello")); will not compile because string "is not a" Shape

	for (size_t i = 0; i < shapes.size(); i++) {
		cout << shapes[i]->ToString() << endl;
	}

	for (size_t i = 0; i < shapes.size(); i++) {
		delete shapes.at(i);
	}

	return 0;
}
