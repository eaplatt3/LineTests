//Earl Platt III
//Data Structures - BCS 370
//9/19/2018
//Line Problem: 
// 1) Determine Slope if Exists
// 2) Determine is Lines are Equal
// 3) Determine if Lines are Parallel
// 4) Determine if Lines are Perpendicular
// 5) Determine Point of Intersection if Lines
//    are not Parallel

//Input: Prompt User for Coafficent A & B and the X & Y Coordantes 
//Output: Display all the above questions answers from user input 

#include <iostream>
#include "LineType.h"

using namespace std;

int main() {

	int a1; //A in Ax + Bx = C
	int a2;
	int b1; //B in Ax + Bx = C
	int b2;
	int c1; //C in Ax + Bx = C
	int c2;

	//Creating Lines
	lineType line1, line2;

	//User input for all values 
	cout << "Enter the X Coefficent: ";
	cin >> a1;
	line1.setXcofficent(a1);
	cout << " " << endl;

	//Checks user input
	while (cin.fail()) {

		cout << "Invalid Input Please Re-enter Your Number" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> a1;
		line1.setXcofficent(a1);
		cout << " " << endl;
	}

	cout << "Enter the Y Coefficent: ";
	cin >> b1;
	line1.setYcofficent(b1);
	cout << " " << endl;

	while (cin.fail()) {

		cout << "Invalid Input Please Re-enter Your Number" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> b1;
		line1.setYcofficent(b1);
		cout << " " << endl;
	}

	cout << "Enter the C Coefficent: ";
	cin >> c1;
	line1.setXcofficent(c1);
	cout << " " << endl;

	while (cin.fail()) {

		cout << "Invalid Input Please Re-enter Your Number" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> c1;
		line1.setXcofficent(c1);
		cout << " " << endl;
	}

	cout << "Enter the X Coefficent: ";
	cin >> a2;
	line2.setXcofficent(a2);
	cout << " " << endl;

	while (cin.fail()) {

		cout << "Invalid Input Please Re-enter Your Number" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> a2;
		line2.setXcofficent(a2);
		cout << " " << endl;
	}

	cout << "Enter the Y Coefficent: ";
	cin >> b2;
	line2.setYcofficent(b2);
	cout << " " << endl;

	while (cin.fail()) {

		cout << "Invalid Input Please Re-enter Your Number" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> b2;
		line2.setYcofficent(b2);
		cout << " " << endl;
	}

	cout << "Enter the C Coefficent: ";
	cin >> c2;
	line2.setXcofficent(c2);
	cout << " " << endl;

	while (cin.fail()) {

		cout << "Invalid Input Please Re-enter Your Number" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> c2;
		line2.setXcofficent(c2);
		cout << " " << endl;
	}

	//Function Call 
	line1.slopeFunction(line1.getXcofficent(), line2.getXcofficent(), line1.getYcofficent(), line2.getYcofficent(), line1.getCcofficent(), line2.getCcofficent());
	line1.equalFunction(line1.getXcofficent(), line2.getXcofficent(), line1.getYcofficent(), line2.getYcofficent(), line1.getCcofficent(), line2.getCcofficent());

	system("pause");

	return 0;

}

	   	  