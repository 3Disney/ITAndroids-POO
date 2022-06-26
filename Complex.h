//
// Created by shazam on 25/06/22.
//

#ifndef POO2_COMPLEX_H
#define POO2_COMPLEX_H

#include "Number.h"

class Complex : Number {
    Complex sum(Complex a, Complex b);
    Complex mul(Complex a, Complex b);
    Complex div(Complex a, Complex b);
    Complex sub(Complex a, Complex b);
};

#endif //POO2_COMPLEX_H
