//
// Created by shazam on 25/06/22.
//

#ifndef POO2_NUMBER_H
#define POO2_NUMBER_H

class Number {
    virtual Number sum(Number a, Number b) = 0;
    virtual Number div(Number a, Number b) = 0;
    virtual Number mul(Number a, Number b) = 0;
    virtual Number sub(Number a, Number b) = 0;

    // add other methods here (sqrt, pot, etc)
};

#endif //POO2_NUMBER_H
