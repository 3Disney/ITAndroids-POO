//
// Created by shazam on 25/06/22.
//

#ifndef POO2_SUBJECT_H
#define POO2_SUBJECT_H
#include <iostream>

using namespace std;

class Subject {
protected:
    double b1Grade;
    double b2Grade;
    double examGrade;

public:
    Subject(double b1Grade, double b2Grade, double examGrade);

    virtual double computeGrade(){};
    // declaração de um método virtual, isto é, um método que pode
    // assumir outra implementação na classe derivada
};

Subject::Subject(double b1Grade, double b2Grade, double examGrade){
    this->b1Grade = b1Grade;
    this->b2Grade = b2Grade;
    this->examGrade = examGrade;
}

/**********************************************************************************/

class Hum01 : public Subject {
public:
    Hum01(double b1Grade, double b2Grade, double examGrade);

    double computeGrade() override;
    // sintaxe que indica que você irá sobrescrever/alterar a implementação do
    // método virtual
};

Hum01::Hum01(double b1Grade, double b2Grade, double examGrade) : Subject(b1Grade, b2Grade, examGrade){
// Como a classe-pai Subject não possui um construtor default explícito,
// mas sim um construtor fruto de uma sobrecarga de método, para poder
// instanciar objetos na classe-filha, você precisa inicializar o
// construtor da classe pai, conforme feito acima
}

double Hum01::computeGrade(){
    // implementação própria da classe Hum01 para o método herdado computeGrade
    return (this->b1Grade*0.4 + this->b2Grade*0.4 + this->examGrade*0.2);
}

/**********************************************************************************/

class Ces10 : public Subject {
public:
    Ces10(double b1Grade, double b2Grade, double examGrade);
    // como não queremos alterar a implementação do método computeGrade
    // nesta classe, você não deve menciona-lo aqui no header.
    // Inclusive, se você fizer isso, o C++ esperará que você faça uma
    // implementação específica para este método nesta classe.

    double computeGrade() override;
};

Ces10::Ces10(double b1Grade, double b2Grade, double examGrade) : Subject(b1Grade, b2Grade, examGrade){}

double Ces10::computeGrade() {
    return 0.1 * this->b1Grade + 0.9*this->b2Grade;
}

/**********************************************************************************/


int main() {
    Ces10 ces10(10.0, 10.0, 10.0);
    Hum01 hum01(6.5, 7.0, 5.0);

    cout << "CES-10 final grade: " << ces10.computeGrade() << endl;
    // CES-10 final grade: 10.0 = (10.0 + 10.0 + 10.0)/3;

    cout << "HUM-01 final grade: " << hum01.computeGrade() << endl;
    // HUM-01 final grade: 6.4 = (6.5*0.4 + 7.0*0.4 + 5.0*0.2);

    return 0;
}

#endif //POO2_SUBJECT_H
