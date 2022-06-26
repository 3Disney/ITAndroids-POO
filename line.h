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
    Line(Point, Point);
    ~Line();

    //functions:
    bool parallelWith(Line l);
    bool isEqualTo(Line l);
    Point intersectWith(Line l);

    //getter:
    Point getp1(Line l);
    Point getp2(Line l);
private:
    Point _p1;
    Point _p2;
    // line: X = p1 + (p2-p1)k

};


#endif //POO1_LINE_H
