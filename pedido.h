/*
Proyetco Final Avance
Programar 3 clases
Atributos: bodega, cliente, dia de entrega, dia de salida.
Rodrigo Escandon A01704287
*/
#include <iostream>
using namespace std;
#include "bodega.h"

class Pedido
{
private:
    Cliente cliente;
    Bodega bodega;
    int diaEntrega;
    int mesEntrega;
    int añoEntrega;

public:
    Pedido() {}

    Pedido(Cliente c, Bodega b, int d, int m, int a)
    {

        cliente = c;
        bodega = b;
        diaEntrega = d;
        mesEntrega = m;
        añoEntrega = a;
    }

    // Metodos de clase //
    // Métodos para cambiar atributos
    void cambiarCliente(Cliente c);
    void cambiarBodega(Bodega b);
    void cambiarDiaDeEntrega(int d);
    void cambiarMesDeEntrega(int m);
    void cambiarAñoDeEntrega(int a);

    // Métodos para acceder a los atributos //
    Cliente conseguirCliente();
    Bodega conseguirBodega();
    int conseguirDiaEntrega();
    int conseguirMesEntrega();
    int conseguirAñoEntrega();
    void imprimirInformacion();
};

void Pedido::cambiarCliente(Cliente c){
    cliente = c;
};

void Pedido::cambiarBodega(Bodega b){
    bodega = b;
};

void Pedido::cambiarDiaDeEntrega(int d){
    diaEntrega = d;
};

void Pedido::cambiarMesDeEntrega(int m){
    mesEntrega = m;
};

void Pedido::cambiarAñoDeEntrega(int a){
    añoEntrega = a;
};

Cliente Pedido::conseguirCliente(){
    return cliente;
};

Bodega Pedido::conseguirBodega(){
    return bodega;
};

int Pedido::conseguirDiaEntrega(){
    return diaEntrega;
};

int Pedido::conseguirMesEntrega(){
    return mesEntrega;
};

int Pedido::conseguirAñoEntrega(){
    return añoEntrega;
};

void Pedido::imprimirInformacion()
{
    std::cout << "-------------------------------------------------" << endl;
    std::cout << "Nombre de cliente: " << cliente.conseguirNombreDeEmpresa() << endl;
    std::cout << "Sacado de la bodega de: " << bodega.conseguirUbicacion() << endl;
    std::cout << "Día de entrega: " << diaEntrega << endl;
    std::cout << "Mes de entrega: " << mesEntrega << endl;
    std::cout << "Año de entrega: " << añoEntrega << endl;
    std::cout << endl;
};