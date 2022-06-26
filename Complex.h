//
// Created by shazam on 25/06/22.
//

#ifndef POO2_COMPLEX_H
#define POO2_COMPLEX_H

#include "Number.h"

class Complex : Number {
public:

    //getters
    double getRe();
    double get()
    Complex sum(Complex a, Complex b) override;
    Complex mul(Complex a, Complex b) override;
    Complex div(Complex a, Complex b) override;
    Complex sub(Complex a, Complex b) override;

private:
    double _re; //real
    double _im; //imaginary

};

#endif //POO2_COMPLEX_H
