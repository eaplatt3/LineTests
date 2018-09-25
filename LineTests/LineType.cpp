#include <iostream>
#include "LineType.h"

using namespace std;

//Function for determining Slope
int lineType::slopeFunction(int a1, int a2, int b1, int b2, int c1, int c2) {

	int slope;

	if (a1 == 0) {

		cout << "Line 1 is Horizontal" << endl;
		cout << "The Slope is 0" << endl;
	}

	if (a2 == 0) {

		cout << "Line 2 is Horizontal" << endl;
		cout << "The Slope is 0" << endl;
	}

	if (b1 == 0) {

		cout << "Line 1 is Vertical" << endl;
	}

	if (b2 == 0) {

		cout << "Line 2 is Vertical" << endl;
	}

	if (a1 != 0 && b1 != 0) {

		slope = (a1*-1)/b1;

		cout << "The Slope of Line 1 is:" << slope << endl;
	}

	if (a2 != 0 && b2 != 0) {

		slope = (((a2)*(-1))/(b2));

		cout << "The Slope of Line 2 is:" << slope << endl;
	}

	return slope;

}
//Determining if the Lines are equal 
int lineType::equalFunction(int a1, int a2, int b1, int b2, int c1, int c2) {

	if (a1 == a2 && b1 == b2 && c1 == c2) {

		cout << "The Two Lines Are Equal" << endl;
	}
	else
		cout << "The Lines Are Not Equal" << endl;

	return 0;

}

//Determining if Lines are Parallel
int lineType::parallelFunction(int slope) {

	

	if (slope == slope) {
		cout << "The Lines Are Parallel" << endl;
	}
	else
		cout << "Lines Are Not Parallel" << endl;

	return 0;
}

//Determin if Lines are Perpendicular and what the intersection point is 
int lineType::perpendicularFunction(int slope, int x1, int x2, int y1, int y2) {

	
	int tot;

	tot = slope * slope;

	if (tot == (-1)) {

		cout << "The Lines Are Perpendicular" << endl;
	}
	else
		cout << "The Lines Are Not Perpendicular" << endl;

	if (x1 == x2 && y1 == y2) {
		cout << "The Point of Intersection is: " << x1 << ", " << y1 << endl;
	}

	return 0;

}