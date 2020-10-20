#ifndef LABORATORIO_H
#define LABORATORIO_H

#include "computadora.h"

class Laboratorio
{
private:
    Computadora arreglo[5];
    size_t contador;
public:
    Laboratorio();
    void agregarFinal(const Computadora &compu);
    void mostrar();

    void respaldar_tabla();
    void respaldar();
    void recuperar();

    friend Laboratorio& operator <<(Laboratorio &l, const Computadora &compu)
    {
        l.agregarFinal(compu);
        return l;
    }
};
#endif