
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
        cout << "Full" << endl;
        full = true;
    }
    else {
        arr[ind] = P;
        ind++;
    }
}
void Polyline::rem_P() {
    if (ind == 0) {
        cout << "Empty." << endl;
    }
    else {
        ind--;
        Point2D* ptr = &arr[ind];
        ptr = nullptr;
        cout << "Point removed" << endl;
    }

}
bool Polyline::check_P(float x, float y) {
    for (int k = 0; k < ind; k++) {
        if (arr[k].x == x) {
            if (arr[k].y == y) {
                return true;
            }
        }
    }
    return false;
}
int Polyline::total_P() {
    return ind;
}
float Polyline::length_P() {
    float length = 0;
    for (int k = 0; k < ind - 1; k++) {
        length += arr[k].Distance(arr[k+1].x, arr[k+1].y);
    }
    return length;
}
void Polyline::print_P() {
    for (int k = 0; k < ind; k++) {
        cout << arr[k].Location() << endl;
    }
}
void Polyline::operator delete(void *p)noexcept {
    free(p);
}
int add(Polyline &a) {
    int amount;
    cout << "How many points do you want to add?" << endl;
    cin >> amount;
    if (cin.fail()) {
        cout << "WRONG!" << endl;
        cin.clear();
        cin.ignore(1, '\n');
        return 0;
    }
    for (int k = 0; k < amount; k++) {
        float p_x;
        float p_y;
        cout << "Enter x: " << endl;
        cin >> p_x;
        if (cin.fail()) {
            cout << "WRONG!" << endl;
            cin.clear();
            cin.ignore(1, '\n');
            break;
        }
        cout << "Enter y:" << endl;
        cin >> p_y;
        if (cin.fail()) {
            cout << "WRONG!" << endl;
            cin.clear();
            cin.ignore(1, '\n');
            break;
        }

        Point2D p1(p_x, p_y);
        a.add_P(p1);
        if (a.full == true) {
            break;
        }
        cout << "Point has values: " << "[" << a.arr[k].x << ", " << a.arr[k].y << "]" << endl;          
    }
    return 0;
}
void remove(Polyline& a) {
    a.rem_P();
}
bool check(Polyline &a) {
    float x, y;
    cout << "X: ";
    cin >> x;
    if (cin.fail()) {
        cout << "WRONG!" << endl;
        cin.clear();
        cin.ignore(1, '\n');
        return false;
    }
    cout << "Y: ";
    cin >> y;
    if (cin.fail()) {
        cout << "WRONG!" << endl;
        cin.clear();
        cin.ignore(1, '\n');
        return false;
    }
    bool res;
    res = a.check_P(x, y);
    return res;
}
int total(Polyline &a) {
    int res;
    res = a.total_P();
    return res;
}
float length(Polyline& a) {
    int res;
    res = a.length_P();
    return res;
}
void print(Polyline& a) {
    a.print_P();
}

int main()
{       
    int x;
    cout << "How large do you want your array?" << endl;
    cin >> x;
    if (cin.fail()) {
        cout << "WRONG!" << endl;
        cin.clear();
        cin.ignore(1, '\n');
        main();
    }
    Polyline a(x);

    while (true) {            
        int inp ;
        cout << "1. Add" << endl;
        cout << "2. Remove" << endl;
        cout << "3. Check" << endl;
        cout << "4. Total" << endl;
        cout << "5. Length" << endl;
        cout << "6. Print" << endl;
        cin >> inp;
        if (inp == 1) {
            add(a);
        }
        else if (inp == 2) {            
            remove(a);
        }
        else if (inp == 3) {
            cout << boolalpha << check(a) << endl;
        }
        else if (inp == 4) {
            cout << total(a) << endl;
        }
        else if (inp == 5) {
            cout << length(a) << endl;
        }
        else if (inp == 6) {
            print(a);
        }
        else {
            cout << "Wrong input." << endl;
        }
        
    }
    return 0;
    //add(a);
   
}
