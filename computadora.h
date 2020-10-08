#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
using namespace std;

class Computadora
{
private:
    string sistemaOperativo;
    string nombreDelEquipo;
    int ram;
    int discoDuro;

public:
    Computadora(const string &sistemaOperativo, const string &nombreDelEquipo, int ram, int discoDuro);

};


#endif