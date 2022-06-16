//
// Created by shazam on 15/06/22.
//

#ifndef POO1_ROBOT_H
#define POO1_ROBOT_H

#include "iostream"


class Robot {
public:
    // methods
    Robot(double x, double y);
    ~Robot();

    void destroyWorld();
    void kick();
    void move(double posX, double posY);
    void seeWorld();

    // setAttribute(attribute)
    void setX(double x);
    void setY(double y);
    double getX();
    double getY();

private:
    // attributes
    double x;
    double y;
};

#endif //POO1_ROBOT_H
