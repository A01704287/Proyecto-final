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
    int anoEntrega;

public:
    Pedido() {}

    Pedido(Cliente c, Bodega b, int d, int m, int a)
    {

        cliente = c;
        bodega = b;
        diaEntrega = d;
        mesEntrega = m;
        anoEntrega = a;
    }

    // Metodos de clase //
    // Métodos para cambiar atributos
    void cambiarCliente(Cliente c);
    void cambiarBodega(Bodega b);
    void cambiarDiaDeEntrega(int d);
    void cambiarMesDeEntrega(int m);
    void cambiarAnoDeEntrega(int a);

    // Métodos para acceder a los atributos //
    Cliente conseguirCliente();
    Bodega conseguirBodega();
    int conseguirDiaEntrega();
    int conseguirMesEntrega();
    int conseguirAnoEntrega();
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

void Pedido::cambiarAnoDeEntrega(int a){
    anoEntrega = a;
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

int Pedido::conseguirAnoEntrega(){
    return anoEntrega;
};

void Pedido::imprimirInformacion()
{
    std::cout << "-------------------------------------------------" << endl;
    std::cout << "Nombre de cliente: " << cliente.conseguirNombreDeEmpresa() << endl;
    std::cout << "Sacado de la bodega de: " << bodega.conseguirUbicacion() << endl;
    std::cout << "Día de entrega: " << diaEntrega << endl;
    std::cout << "Mes de entrega: " << mesEntrega << endl;
    std::cout << "Year de entrega: " << anoEntrega << endl;
    std::cout << endl;
};