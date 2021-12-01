/*
Proyetco Final Avance
Programar 3 clases
Atributos: telefono, nombre de empresa, correo, y ubicacion, pedidos totales
Rodrigo Escandon A01704287
*/
#include <iostream>
using namespace std;

class Cliente
{
private:
    string telefono;
    string nombre;
    string correoElectronico;
    string ubicacion;

public:
    // Constructor
    Cliente(
        string n,
        string c,
        string t,
        string u)
    {
        telefono = t;
        nombre = n;
        correoElectronico = c;
        ubicacion = u;
    };

    Cliente() {}

    // Metodos de clase //
    // Métodos para cambiar atributos
    void cambiarTelefono(string t);
    void cambiarNombreDeEmpresa(string n);
    void cambiarCorreoElectronico(string c);
    void cambiarUbicacion(string u);

    // Métodos para acceder a los atributos //
    string conseguirTelefono();
    string conseguirNombreDeEmpresa();
    string conseguirCorreoElectronico();
    string conseguirUbicacion();

    // Otros métodos //
    void imprimirInformacion();
};

void Cliente::cambiarTelefono(string t)
{
    telefono = t;
};

void Cliente::cambiarNombreDeEmpresa(string n)
{
    nombre = n;
};

void Cliente::cambiarCorreoElectronico(string c)
{
    correoElectronico = c;
};

void Cliente::cambiarUbicacion(string u)
{
    ubicacion = u;
};

string Cliente::conseguirTelefono()
{
    return telefono;
};

string Cliente::conseguirNombreDeEmpresa()
{
    return nombre;
};

string Cliente::conseguirCorreoElectronico()
{
    return correoElectronico;
};

string Cliente::conseguirUbicacion()
{
    return ubicacion;
};

void Cliente::imprimirInformacion()
{
    std::cout << "-------------------------------------------------" << endl;
    std::cout << "Nombre de empresa: " << nombre << endl;
    std::cout << "Teléfono: " << telefono << endl;
    std::cout << "Correo: " << correoElectronico << endl;
    std::cout << "Ubicación: " << ubicacion << endl;
    std::cout << endl;
};