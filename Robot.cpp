//
// Created by shazam on 15/06/22.
//

#include "Robot.h"

//using namespace std;

Robot::Robot(double x, double y){
    this->x = x;
    this->y = y;
}

Robot::~Robot(){

}

void Robot::destroyWorld(){
    std::cout << "DESTROOOY" << std::endl;
}

void Robot::kick(){
    std::cout << "KICKED" << std::endl;
}

void Robot::move(double posX, double posY){
    std::cout << "Moved from " << this->x << "," << this->y << " to " << posX << "," << posY << std::endl;
    setX(posX);
    setY(posY);
}

void Robot::seeWorld(){}

// setAttribute(attribute)
void Robot::setX(double x){
    this->x = x;
}

void Robot::setY(double y){
    this->y = y;
}
double Robot::getX(){
    return this->x;
}
double Robot::getY(){
    return this->y;
}
