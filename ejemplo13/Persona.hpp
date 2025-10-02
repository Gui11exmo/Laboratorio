#ifndef PERSONA_HPP
#define PERSONA_HPP

#include <iostream>
#include <cstring>
#include <cstdlib>

class Persona {
private:
    bool genero;       
    int edad;
    char dni[10];     

    static int contador; //para que no haya dnis duplicados

    void generarDNI();    

public:
    Persona(int edad);
    ~Persona();

    int getEdad() const;
    bool esMujer() const;
    void setEdad(int nuevaEdad);
    void mostrar() const;
};

#endif // PERSONA_HPP
