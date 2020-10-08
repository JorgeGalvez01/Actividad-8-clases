#include "computadora.h"

Computadora::Computadora(const string &sistemaOperativo, const string &nombreDelEquipo, int ram, int discoduro)
{
    this->sistemaOperativo = sistemaOperativo;
    this->nombreDelEquipo = nombreDelEquipo;
    this->ram = ram;
    this->discoDuro = discoDuro;
}

