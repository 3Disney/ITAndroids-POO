//
// Created by shazam on 25/06/22.
//

#ifndef POO2_MATRIX_H
#define POO2_MATRIX_H

#include "Number.h"

class Matrix : Number{
    Matrix sum(Matrix a, Matrix b);
    Matrix mul(Matrix a, Matrix b);
    Matrix div(Matrix a, Matrix b);
    Matrix ssub(Matrix a, Matrix b);
};

#endif //POO2_MATRIX_H
