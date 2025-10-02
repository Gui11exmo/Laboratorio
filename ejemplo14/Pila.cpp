#include "Pila.hpp"
using namespace std;

Pila::Pila() {
    ultimo = nullptr;
    longitud = 0;
}

Pila::~Pila() {
    pnodoPila aux;
    while (ultimo) {
        aux = ultimo;
        ultimo = ultimo->siguiente;
        delete aux;
    }
}

void Pila::insertar(int v) {
    pnodoPila nuevo = new NodoPila(v, ultimo);
    ultimo = nuevo;
    longitud++;
}

int Pila::extraer() {
    if (!ultimo)
        return 0;

    pnodoPila nodo = ultimo;
    int v = nodo->valor;
    ultimo = nodo->siguiente;
    delete nodo;
    longitud--;
    return v;
}

int Pila::cima() const {
    if (!ultimo)
        return 0;
    return ultimo->valor;
}

void Pila::mostrar() const {
    pnodoPila aux = ultimo;
    cout << "El contenido de la pila es : ";
    while (aux) {
        cout <<"-> "<< aux->valor;
        aux = aux->siguiente;
    }
    cout << endl;
}

int Pila::getLongitud() const {
    return longitud;
}