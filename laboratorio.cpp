#include "laboratorio.h"
#include <fstream>

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

void Laboratorio::respaldar_tabla()
{
    ofstream archivo("computadoras_tabla.txt");
    if (archivo.is_open())
    {
        archivo << left;
        archivo << setw(12) << "OS";
        archivo << setw(15) << "Equipo";
        archivo << setw(6) << "Ram";
        archivo << setw(14) << "Almacenamiento";
        archivo << endl;

        for (size_t i = 0; i < contador; i++)
    {
        Computadora &compu  = arreglo[i];
        archivo << compu;
    }

    }
    archivo.close();
}