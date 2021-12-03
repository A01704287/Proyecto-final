/*
Proyetco Final Avance
Programar 3 clases
Atributos: especie, edad, tam
Rodrigo Escandon A01704287
*/
#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <thread>

// Clases utilizadas:
#include "cliente.h"
#include "pedido.h"

using namespace std;

vector<Cliente> clientes;
vector<Bodega> bodegas;
vector<Pedido> pedidos;

// Declarar funciones para evitar errores al compilar
void menu();


void registrarClientes()
{
    string nombre;
    string correo;
    string telefono;
    string ubicacion;

    int numeroClientes;
    cout << "Ingrese el número de clientes a registrar:" << endl;
    cin >> numeroClientes;

    for (int i = 0; i < numeroClientes; i++)
    {
        cout << "Ingrese el nombre: " << endl;
        cin >> nombre;
        cout << "Ingrese el correo: " << endl;
        cin >> correo;
        cout << "Ingrese el telefono: " << endl;
        cin >> telefono;
        cout << "Ingrese la ubicación: " << endl;
        cin >> ubicacion;

        Cliente clienteIngresado(nombre, correo, telefono, ubicacion);
        clientes.push_back(clienteIngresado);
    }
}

void imprimirClientes()
{
    int numeroClientes = clientes.size();
    for (int i = 0; i < numeroClientes; i++)
    {
        clientes.at(i).imprimirInformacion();
        cout << "Número de cliente: " << i << endl;
    }

}

void registrarBodegas()
{
    string telefono;
    string ubicacion;

    int numeroBodegas;
    cout << "Ingrese el número de bodegas a registrar:" << endl;
    cin >> numeroBodegas;

    for (int i = 0; i < numeroBodegas; i++)
    {
        cout << "Ingrese el telefono: " << endl;
        cin >> telefono;
        cout << "Ingrese la ubicación: " << endl;
        cin >> ubicacion;

        Bodega bodegaIngresada(telefono, ubicacion);
        bodegas.push_back(bodegaIngresada);
    }
}

void imprimirBodegas()
{
    int numeroBodegas = bodegas.size();
    for (int i = 0; i < numeroBodegas; i++)
    {
        bodegas.at(i).imprimirInformacion();
        cout << "Número de bodega: " << i << endl;
    }
}

void registrarPedidos()
{
    Cliente cliente;
    Bodega bodega;
    int diaEntrega;
    int mesEntrega;
    int anoEntrega;
    int input;

    int numeroPedidos;
    cout << "Ingrese el número de pedidos a registrar:" << endl;
    cin >> numeroPedidos;

    for (int i = 0; i < numeroPedidos; i++)
    {
        // Ingresar el cliente
        imprimirClientes();
        cout << "Ingrese numero el/la cliente: " << endl;
        cin >> input;
        cliente = clientes.at(input);

        // Ingresarla bodega
        imprimirBodegas();
        cout << "Ingrese numero la bodega: " << endl;
        cin >> input;
        bodega = bodegas.at(input);

        // Ingresar los demás datos
        cout << "Ingrese el día de entrega: " << endl;
        cin >> diaEntrega;
        cout << "Ingrese el mes de entrega: " << endl;
        cin >> mesEntrega;
        cout << "Ingrese el ano de entrega: " << endl;
        cin >> anoEntrega;

        Pedido pedido(cliente, bodega, diaEntrega, mesEntrega, anoEntrega);
        pedidos.push_back(pedido);
    }
}

void imprimirPedidos()
{
    int numeroPedidos = pedidos.size();
    for (int i = 0; i < numeroPedidos; i++)
    {
        pedidos.at(i).imprimirInformacion();
        cout << "Número de pedido: " << i << endl;
    }
}

void controlDeClientes()
{
    int input;
    cout << "[1] Ingrese clientes" << endl;
    cout << "[2] Imprima clientes" << endl;
    cout << "[3] Salir del menú" << endl;
    cin >> input;

    switch (input)
    {
    case 1:
        registrarClientes();
        controlDeClientes();
        break;
    case 2:
        imprimirClientes();
        controlDeClientes();
        break;
    case 3:
        menu();
        break;
    default:
        cout << "Ingrese un número válido" << endl;
        controlDeClientes();
        break;
    }
}

void controlDeBodegas()
{
    int input;
    cout << "[1] Ingrese bodegas" << endl;
    cout << "[2] Imprima bodegas" << endl;
    cout << "[3] Salir del menú" << endl;
    cin >> input;
    switch (input)
    {
    case 1:
        registrarBodegas();
        controlDeBodegas();
        break;
    case 2:
        imprimirBodegas();
        controlDeBodegas();
        break;
    case 3:
        menu();
        break;
    default:
        cout << "Ingrese un número válido" << endl;
        controlDeBodegas();
        break;
    }
}

void controlDePedidos()
{
    int input;
    cout << "[1] Ingrese pedidos" << endl;
    cout << "[2] Imprima pedidos" << endl;
    cout << "[3] Salir del menú" << endl;
    cin >> input;
    switch (input)
    {
    case 1:
        registrarPedidos();
        controlDePedidos();
        break;
    case 2:
        imprimirPedidos();
        controlDePedidos();
        break;
    case 3:
        menu();
        break;
    default:
        cout << "Ingrese un número válido" << endl;
        controlDePedidos();
        break;
    }
}

void limpiarConsola()
{
    // Funciona en sistemas UNIX y Windows 10 en adelante
    printf("\033c");
}


void menu()
{
    limpiarConsola();
    int input;
    cout << "Bienvenido al sistema de la distribuidora" << endl;
    cout << "[1] Ingrese al Control de clientes" << endl;
    cout << "[2] Ingrese al Control de pedidos" << endl;
    cout << "[3] Ingrese al Control de bodegas" << endl;
    cout << "[4] Salir del programa" << endl;
    cout << "Ingrese la opción" << endl;
    cin >> input;

    switch (input)
    {
    case 1:
        controlDeClientes();
        menu();
        break;
    case 2:
        controlDePedidos();
        menu();
    case 3:
        controlDeBodegas();
        menu();
        break;
    case 4:
        return;
        break;
    default:
        cout << "Ingrese un número válido" << endl;
        menu();
        break;
    }
}

int main()
{
    // Driver code
    menu();
    return 1;
}