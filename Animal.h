//
// Created by shazam on 25/06/22.
//

#ifndef POO2_ANIMAL_H
#define POO2_ANIMAL_H

#include<iostream>

using namespace std;

class Animal{
public:
    virtual void eat() = 0;
    // sintaxe para declaração de método virtual puro:
    // virtual tipoDeRetornoDoMetodo nomeDoMetodo = 0;
};

class Zebra : public Animal {
    public:
    void eat() override;
};

void Zebra::eat(){ // implementação do método eat na classe Zebra
    cout << "Zebra is eating grass." << endl;
}

class Lion : public Animal {
public:
    void eat() override;
};

void Lion::eat(){ // implementação do método eat na classe Lion
    cout << "Lion is eating meat." << endl;
}

int main() {
    Zebra z;
    Lion l;

    z.eat(); // Zebra is eating grass.
    l.eat(); // Lion is eating meat.
    return 0;
}

#endif //POO2_ANIMAL_H
