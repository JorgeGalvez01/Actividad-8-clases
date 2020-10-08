#include "computadora.h"

#include <iostream>
using namespace std;

Computadora::Computadora(const string &sistemaOperativo, const string &nombreDelEquipo, int ram, int discoduro)
{
    this->sistemaOperativo = sistemaOperativo;
    this->nombreDelEquipo = nombreDelEquipo;
    this->ram = ram;
    this->discoDuro = discoDuro;
}

void Computadora::setSistemaOperativo(const string &valor)
{
    sistemaOperativo = valor;
}
string Computadora::getSistemaOperativo()
{
    return sistemaOperativo;
}

void Computadora::setNombreDelEquipo(const string &valor)
{
    nombreDelEquipo = valor;
}
string Computadora::getNombreDelEquipo()
{
    return nombreDelEquipo;
}

void Computadora::setRam(int valor)
{
    ram = valor;
}
int Computadora::getRam()
{
    return ram;
}

void Computadora::setDiscoDuro(int valor)
{
    discoDuro = valor;
}
int Computadora::getDiscoDuro()
{
    return discoDuro;
}