#include "shape.h"
#include "rectangle.h"
#include "square.h"

#include <iostream>
using std::cout;
using std::endl;

int main(){
	Shape s;
	Rectangle r(2.5, 3.5);
	Square q(1.1);

	cout << s.ToString() << endl;
	cout << s.Area() << endl;
	cout << s.Perimeter() << endl;

	cout << r.ToString() << endl;
	cout << r.Area() << endl;
	cout << r.Perimeter() << endl;
	cout << r.Diagonal() << endl;

	cout << q.ToString() << endl;
	cout << q.Area() << endl;
	cout << q.Perimeter() << endl;
	cout << q.Diagonal() << endl;


	return 0;
}
