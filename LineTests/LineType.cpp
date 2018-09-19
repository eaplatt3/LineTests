#include <iostream>
#include "LineType.h"

using namespace std;

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

		slope = ((a1/b1)*-1);

		cout << "The Slope of Line 1 is:" << slope << endl;
	}

	if (a2 != 0 && b2 != 0) {

		slope = ((a2 / b2)*-1);

		cout << "The Slope of Line 2 is:" << slope << endl;
	}

	return slope;

}

int lineType::equalFunction(int a1, int a2, int b1, int b2, int c1, int c2) {

	if (a1 == a2 && b1 == b2 && c1 == c2) {

		cout << "The Two Lines Are Equal" << endl;
	}
	else
		cout << "The Lines Are Not Equal" << endl;

}

int lineType::parallelFunction(int a1, int a2, int b1, int b2, int c1, int c2, int slope) {


}