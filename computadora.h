#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
#include <iomanip>

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

    friend ostream& operator <<(ostream &out, Computadora const &compu)
    {
        out << left;
        out << setw (12) << compu.sistemaOperativo;
        out << setw (15) << compu.nombreDelEquipo;
        out << setw (6) << compu.ram;
        out << setw (14) << compu.almacenamiento;
        out << endl;

        return out;
    }
};


#endif