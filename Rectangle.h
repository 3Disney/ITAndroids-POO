//
// Created by shazam on 25/06/22.
//

#ifndef POO2_RECTANGLE_H
#define POO2_RECTANGLE_H
#include<iostream>

using namespace std;

class Shape {
public:
    void setWidth(int w) { width = w; }
    void setHeight(int h) { height = h; }
protected:
    int width;
    int height;
private:
    int c;
};

class PaintCost {
public:
    int getCost(int area) { return area * 70; }
};

class Rectangle : public Shape, public PaintCost {
public:
    int getArea() {
        return width * height;
    }
    int priceToPaint(){
        return getCost(getArea());
    }
};

int main() {
    Rectangle rect;

    rect.setWidth(5);
    rect.setHeight(7);

    cout << "Area total: " << rect.getArea() << "." << endl;
    // 5(width) x 7(height) = 35

    cout << "Custo total para pintar: "<< rect.priceToPaint() << "." << endl;
    // 35(area) x 70(price) = 2450

    return 0;
}

#endif //POO2_RECTANGLE_H
