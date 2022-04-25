#include "Header.h"
#include "Point2D.h"

int main() {
	Point2D point1(3, 5);
	Point2D point2(4, 7);

	Point2D point3(5, 6);

	point3 = point1 - point2;


	cout << point1.getInfo() << endl;
	cout << point2.getInfo() << endl;
	cout << point3.getInfo() << endl;
}