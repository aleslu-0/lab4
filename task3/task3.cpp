
#include <iostream>
#include <task3.h>
#include <math.h>
using namespace std;

Point2D Point2D::operator+(const Point2D& p) {
    Point2D P;
    P.x = this->x + p.x;
    P.y = this->y + p.y;
    return P;
}
Point2D& Point2D::operator=(const Point2D& p) {
    x = p.x;
    y = p.y;
    return *this;
}
bool Point2D::operator==(const Point2D& p) {
    return (x == p.x && y == p.y);
}
float Point2D::Distance(float px, float py) {
    float a = px - x;
    float b = py - y;
    float dist = sqrt(pow(a, 2) + pow(b, 2));
    return dist;
}
string Point2D::Location() {
    string sx = to_string(x);
    string sy = to_string(y);
    string p = "[" + sx + "," + sy + "]";
    return p;
}

int main()
{
    std::cout << "Hello World!\n";
}
