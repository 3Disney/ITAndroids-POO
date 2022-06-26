//
// Created by victo on 21/06/2022.
//
#include "line.h"
#include <cmath>
Line::Line(Point p1, Point p2){
    this->_p1 = p1;
    this->_p2 = p2;
}

Line::~Line(){}

Point Line::getp1(Line l) { return _p1; }
Point Line::getp2(Line l) { return _p2; }

bool Line::parallelWith(Line l)
{
    Point p21 = getp1(l);
    Point p22 = getp2(l);
    Point p11 = _p1;
    Point p12 = _p2;
    double m1 = ( p12.getY() - p11.getY() ) / ( p12.getX() - p12.getX() );
    double m2 = ( p22.getY() - p21.getY() ) / ( p22.getX() - p22.getX() );
    double epsilon = 0.00001;

    if( fabs(m2 - m1) < epsilon)
        return true;
    else return false;
}
