#include <iostream>
#include "computadora.h"
#include "laboratorio.h"

using namespace std;

int main()
{
    Laboratorio labo;

    Computadora compu01;
    compu01.setSistemaOperativo("Windows 10");
    compu01.setNombreDelEquipo("HP Pavilon");
    compu01.setRam(8);
    compu01.setAlmacenamiento(1000);
    labo << compu01;

    Computadora compu02;
    compu02.setSistemaOperativo("MacOS");
    compu02.setNombreDelEquipo("MacBook Pro");
    compu02.setRam(16);
    compu02.setAlmacenamiento(512);
    labo << compu02;
    
    Computadora compu03;
    cin >> compu03;
    labo << compu03;

    labo.mostrar();

    labo.respaldar_tabla();
    labo.respaldar();

    
    return 0;
}