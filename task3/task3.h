#pragma once
#include <string>
using namespace std;

class Polyline {
public:

};

class Point2D {
public:
	float x, y;

	Point2D operator+(const Point2D& p);
	Point2D& operator=(const Point2D& p);
	bool operator==(const Point2D& p);

	Point2D() {
		x = 0.0;
		y = 0.0;
	}
	Point2D(const float& nx, const float& ny) {
		x = nx;
		y = ny;
	}
	float Distance(float p1, float p2);

	string Location();
};