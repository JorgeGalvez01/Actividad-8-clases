#include "laboratorio.h"

Laboratorio::Laboratorio()
{
    contador = 0;
}

void Laboratorio::agregarFinal(const Computadora &compu)
{
    if (contador < 5)
    {
        arreglo[contador] = compu;
        contador++;
    }
    else
    {
        cout << "Arreglo lleno" << endl;
    }
}

void Laboratorio::mostrar()
{
    cout << left;
    cout << setw(12) << "OS";
    cout << setw(15) << "Equipo";
    cout << setw(6) << "Ram";
    cout << setw(14) << "Almacenamiento";

    cout << endl;

    for (size_t i = 0; i < contador; i++)
    {
        Computadora &compu  = arreglo[i];
        cout << compu;
        /*cout <<"Sistema operativo: " << compu.getSistemaOperativo() << endl; 
        cout <<"Nombre del equipo: " << compu.getNombreDelEquipo() << endl; 
        cout <<"Ram: " << compu.getRam() << endl; 
        cout <<"Almacenamiento: " << compu.getAlmacenamiento() << endl;
        cout << endl;*/
    }
    
}