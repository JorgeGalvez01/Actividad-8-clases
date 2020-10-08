#include <iostream>
#include "computadora.h"
#include "laboratorio.h"

using namespace std;

int main()
{
    Computadora compu01;
    compu01.setSistemaOperativo("Windows 10");
    compu01.setNombreDelEquipo("HP Pavilon");
    compu01.setRam(8);
    compu01.setAlmacenamiento(1000);

    Computadora compu02;
    compu02.setSistemaOperativo("MacOS");
    compu02.setNombreDelEquipo("MacBook Pro");
    compu02.setRam(16);
    compu02.setAlmacenamiento(512);

    
    Laboratorio labo;
    labo.agregarFinal(compu01);
    labo.agregarFinal(compu02);

    labo.mostrar();

    return 0;
}