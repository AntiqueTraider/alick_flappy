#include <iostream>
#include <windows.h>
#include <math.h>
#include <time.h>
#include <conio.h>
using namespace std;

class Graphics {

public:
	virtual void printHurdle() = 0;
	virtual void printBird() = 0;
	virtual void printRoad() = 0;
	virtual void printScore() = 0;
	int getHeight() {
		return screenHeigth;
	}
	int getWidth() {
		return screenWidth;
	}

	Graphics() {
		screenHeigth = 20;
		screenWidth = 20;
	}
	Graphics(int h, int w) {
		screenHeigth = h;
		screenWidth = w;
	}
private:
	int screenWidth;
	int screenHeigth;
};