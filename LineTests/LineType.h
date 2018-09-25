#pragma once


//Building the Class
class lineType {


private:
	int aCo;
	int xCord;
	int bCo;
	int yCord;
	int cCo; 

public:

	//Constructor
	lineType() {

	}

	//Mutators 
	void setXcofficent(int a) {

		aCo = a;
	}

	void setXcord(int x) {

		xCord = x;
	}

	void setYcofficent(int b){

		bCo = b;
	}

	void setYcord(int y) {

		yCord = y;
	}

	void setCcofficent(int c) {

		cCo = c;
	}

	int getXcofficent() {

		return aCo;
	}

	int getXcord() {

		return xCord;
	}

	int getYcofficent() {

		return bCo;
	}

	int getYcord() {

		return yCord;
	}

	int getCcofficent() {

		return cCo;
	}

	//Method Calls 
	int slopeFunction(int a1, int a2, int b1, int b2, int c1, int c2);
	int equalFunction(int a1, int a2, int b1, int b2, int c1, int c2);
	int parallelFunction(int slope);
	int perpendicularFunction(int slope, int x1, int x2, int y1, int y2);
};
