/*
Proyecto Final Avance
Atributos: ubicacion, telefono, pedidos totales 
Rodrigo Escandon A01704287
*/
#include <iostream>
using namespace std;

class Bodega
{
private:
    string ubicacion;
    string telefono;

public:
    Bodega() {}

    Bodega(string u, string t)
    {
        ubicacion = u;
        telefono = t;
    }

    // Metodos de clase //
    // Métodos para cambiar atributos
    void cambiarUbicacion(string u);
    void cambiarTelefono(string t);

    // Métodos para acceder a los atributos //
    string conseguirUbicacion();
    string conseguirTelefono();
    void imprimirInformacion();
};

void Bodega::cambiarUbicacion(string u)
{
    ubicacion = u;
};

void Bodega::cambiarTelefono(string t)
{
    telefono = t;
};

string Bodega::conseguirUbicacion()
{
    return ubicacion;
};

string Bodega::conseguirTelefono()
{
    return telefono;
};

void Bodega::imprimirInformacion()
{
    std::cout << "-------------------------------------------------" << endl;
    std::cout << "Teléfono: " << telefono << endl;
    std::cout << "Ubicación: " << ubicacion << endl;
    std::cout << endl;
};