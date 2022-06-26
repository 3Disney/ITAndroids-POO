//
// Created by shazam on 15/06/22.
//

#ifndef POO1_POINT_H
#define POO1_POINT_H

#include <iostream>
using namespace std;

class Point {
public:
    //constructor and destructor:
    Point(){};
    Point(double x, double y);
    ~Point();

    //getter
    double getX();
    double getY();
private:
    //variables:
    double _x;
    double _y;
};

#endif //POO1_POINT_H
