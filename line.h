//
// Created by shazam on 15/06/22.
//

#ifndef POO1_LINE_H
#define POO1_LINE_H

#include <iostream>
using namespace std;
#include "point.h"

class Line {
public:
    //constructor and destructor:
    Line(Point p1, Point p2);
    ~Line();

    //functions:
    bool parallelWith(Line l);
    bool isEqualTo(Line l);
    Point intersectWith(Line l);
private:
    double _p1;
    double _p2;
    // line: X = p1 + (p2-p1)k
};


#endif //POO1_LINE_H
