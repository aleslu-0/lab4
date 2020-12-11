using namespace std;
#include <iostream>
#include <string>
#include <iomanip>
#include <task2.h>


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

float Point2D::Distance(float px, float py){
    float a = px - x;
    float b = py - y;
    float dist = sqrt(pow(a, 2) + pow(b,2));
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
    Point2D P(2.0, 2.0);
    Point2D P2(4.0, 4.0);    
    //1.
    float res = P.Distance(P2.x, P2.y);

    cout << "The distance between the points is: " << res << endl;

    //2
    Point2D copyP = P;

    //3
    cout << "The new point has the values: " << copyP.x << "," << copyP.y << endl;
    //Same values as P, which it was copied from.

    //toString
    cout << "Point P has the location: " << P.Location() << endl;

    //4.
    Point2D newP;
    newP.x = P.x + P2.x;
    newP.y = P.y + P2.y;
    cout << "New point has these values: " << newP.x << "," << newP.y << endl;

    //5. From new Point to first Point
    cout << "Distance from new point to first point: " << P.Distance(newP.x, newP.y) << endl;

    cout << "All points: " << P.x << "," << P.y << " " << copyP.x << "," << copyP.y << " " << P2.x << "," <<  P2.y << " " << newP.x << "," << newP.y;

    return 0;
}
