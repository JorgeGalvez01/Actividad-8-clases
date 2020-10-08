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
    int almacenamiento;

public:
    Computadora();
    Computadora(const string &sistemaOperativo, const string &nombreDelEquipo, int ram, int almacenamiento);

    void setSistemaOperativo(const string &valor);
    string getSistemaOperativo();

    void setNombreDelEquipo(const string &valor);
    string getNombreDelEquipo();

    void setRam(int valor);
    int getRam();

    void setAlmacenamiento(int valor);
    int getAlmacenamiento();
};


#endif