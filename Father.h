//
// Created by shazam on 25/06/22.
//

#ifndef POO2_FATHER_H
#define POO2_FATHER_H

using namespace std;

class Father {
public:
    char data1;
    char getData1() {return this->data1;}
    char getData2() {return this->data2;}
    char getData3() {return this->data3;}
    void setPrivateData(char x) {this->data3 = x;}
protected:
    char data2;
private:
    char data3;
};

class PublicSon : public Father { // herança pública
public:
    PublicSon(char a, char b, char c) {
        this->data1 = a;
        // data1 (public no Son) ainda é acessível dentro de Son

        this->data2 = b;
        // data2 (proteted no Son) ainda é acessível dentro de Son

        //this->data3 = c;
        //(private no Father) não é possível acessá-lo

        this->setPrivateData(c);
        //função setPrivateData é acessível pois é public no Son
    }
};

class ProtectedSon : protected Father { // herança protegida
public:
    ProtectedSon(char a, char b, char c) {
        this->data1 = a;
        // data1 (protected no Son) ainda é acessível dentro de Son

        this->data2 = b;
        // data2 (protected no Son) ainda é acessível dentro de Son

        //this->data3 = c;
        // (private no Father) não é possível acessá-lo

        this->setPrivateData(c);
        //função setPrivateData é acessível pois é protected no Son
    }

    char getThroughSonData1() {return this->data1;}
    char getThroughSonData2() {return this->data2;}
    // char getThroughSonData3() {return this->data3;}
    // não é possível alterar data3, pois é private no Father
    char enterFather() {return this->getData3();}
};

class PrivateSon : private Father { // herança privada
public:
    PrivateSon(char a, char b, char c) {
        this->data1 = a;
        // data1 (private no Son) ainda é acessível dentro de Son

        this->data2 = b;
        // data2 (private no Son) ainda é acessível dentro de Son

        //this->data3 = c;
        // (private no Father) não é possível acessá-lo

        this->setPrivateData(c);
        //função setPrivateData é acessível pois é private no Son
    }

    char getThroughSonData1() {return this->data1;}
    char getThroughSonData2() {return this->data2;}
    // char getThroughSonData3() {return this->data3;}
    // inacessível pois data3 é private no Father
    char enterFather() {return this->getData3();}
};

#endif //POO2_FATHER_H
