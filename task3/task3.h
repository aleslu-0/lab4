#pragma once
#include <string>
using namespace std;

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

class Polyline {
public:
	Point2D* arr;
	int size;
	int ind;
	bool full;

	Polyline(int size) {
		arr = new Point2D[size];
		this->size = size;
		ind = 0;
		full = false;
	}
	~Polyline() {
		delete[] arr;
	}
	void add_P(Point2D P);

	void rem_P(Point2D P);

};