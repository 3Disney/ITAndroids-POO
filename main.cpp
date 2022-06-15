#include <iostream>
#include "line.h"
#include "point.h"

using namespace std;

int main() {
    double x, y;
    Point p1(0, 0), p2(0, 0);
    Line l1(p1, p2), l2(p1, p2);

    cout << "---------------------------------------------" << endl;
    cout << "Program to find the intersection of two lines" << endl;
    cout << "---------------------------------------------" << endl;

    cout << "Type in two points of the first line" << endl;
    cin >> x >> y;
    p1 = Point(x, y);
    cin >> x >> y;
    p2 = Point(x, y);
    l1 = Line(p1, p2);

    cout << "Type in two points of the second line << endl;
    cin >> x >> y;
    p1 = Point(x, y);
    cin >> x >> y;
    p2 = Point(x, y);
    l2 = Line(p1, p2);

    if (l1.parallelWith(l2)) {
        if (l1.isEqualTo(l2))
            cout << "The intersection is the line you gave\n";
        else
            cout << "There is no intersection\n";
    } else {
        cout << "The intersection is a point\n";
        cout << "And its coordinates are: ";
        p1 = l1.intersectWith(l2);
        cout << p1.getX() << p1.getY() << "\n";
    }

    return 0;
}