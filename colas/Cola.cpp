#include "Cola.hpp"
#include <iostream>
using namespace std;

Cola::Cola()
{
    primero = NULL;
    ultimo = NULL;
    longitud = 0;
}

void Cola::insertar(int v)
{
    pnodoCola nuevo = new NodoCola(v);
    if (ultimo)
        ultimo->siguiente = nuevo;
    ultimo = nuevo;
    if (!primero)
        primero = nuevo;
    longitud++;
}

int Cola::eliminar()
{
    if (!primero)
        return 0;

    pnodoCola nodo = primero;
    int v = nodo->valor;

    primero = nodo->siguiente;
    if (!primero)
        ultimo = NULL;

    delete nodo;
    longitud--;
    return v;
}

void Cola::mostrar()
{
    pnodoCola aux = primero;
    cout << "El contenido de la cola es: ";
    while (aux)
    {
        cout << "-> " << aux->valor << " ";
        aux = aux->siguiente;
    }
    cout << endl;
}

int Cola::verPrimero()
{
    return primero->valor;
}

Cola::~Cola()
{
    while (primero)
        eliminar();
}
