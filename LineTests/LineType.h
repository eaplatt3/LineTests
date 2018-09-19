#pragma once

class lineType {


private:
	int aCo;
	int xCord;
	int bCo;
	int yCord;
	int cCo; 

public:

	lineType(int a, int x, int b, int y, int c) {

		aCo = a;
		xCord = x;
		bCo = b;
		yCord = y;
		cCo = c;
	}

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

	int slopeFunction(int a1, int a2, int b1, int b2, int c1, int c2);
	int equalFunction(int a1, int a2, int b1, int b2, int c1, int c2);
	int parallelFunction(int a1, int a2, int b1, int b2, int c1, int c2, int slope);
	int perpendicularFunction(int a1, int a2, int b1, int b2, int c1, int c2);
};
