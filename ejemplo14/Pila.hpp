#ifndef PILA_HPP
#define PILA_HPP

#include "NodoPila.hpp"
#include <iostream>

class Pila {
public:
    Pila();
    ~Pila();

    void insertar(int v);
    int extraer();
    int cima() const;
    void mostrar() const;
    int getLongitud() const;

private:
    pnodoPila ultimo;
    int longitud;
};

#endif // PILA_HPP