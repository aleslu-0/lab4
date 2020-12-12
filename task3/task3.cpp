
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
void Polyline::add_P(Point2D P) {
    if (ind >= size) {
        cout << "no" << endl;
        full = true;
    }
    else {
        arr[ind] = P;
        ind++;
    }
}
void Polyline::rem_P(Point2D P) {

}
void add(Polyline &a) {
    int amount;
    cout << "How many points do you want to add?";
    cin >> amount;
    for (int k = 0; k < amount; k++) {

        float p_x;
        float p_y;
        cin >> p_x;
        cin >> p_y;
        Point2D p1(p_x, p_y);
        a.add_P(p1);
        if (a.full == true) {
            break;
        }
        cout << a.arr[k].x << " " << a.arr[k].y << endl;
    }
}


int main()
{    
    int x;
    cout << "How big u want ur array?";
    cin >> x;
    Polyline a(x);
    while (true) {        
        int inp ;
        cout << "1. Add" << endl;
        cout << "2. Remove" << endl;
        cin >> inp;
        if (inp == 1) {
            add(a);
        }
        if (inp == 2) {
            
        
        }
        

    }
    //add(a);
   
}
