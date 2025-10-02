#include "Persona.hpp"
#include <ctime>
#include <sstream>
#include <set>

using namespace std;

int Persona::contador = 0; 
const char letrasDNI[] = "TRWAGMYFPDXBNJZSQVHLCKE";
static set<int> dniUsados;

Persona::Persona(int edad) {
    this->edad = edad;
    genero = rand() % 2;
    generarDNI();
}

Persona::~Persona() {
}

void Persona::generarDNI() {
    int numero;
    do {
        numero = 10000000 + rand() % 90000000;
    } while (dniUsados.count(numero));

    dniUsados.insert(numero);

    char letra = letrasDNI[numero % 23];

    stringstream ss;
    ss << numero << letra;
    string temp = ss.str();

    strncpy(dni, temp.c_str(), sizeof(dni));
    dni[sizeof(dni) - 1] = '\0';
}


int Persona::getEdad() const {
    return edad;
}

bool Persona::esMujer() const {
    return genero;
}

void Persona::setEdad(int nuevaEdad) {
    edad = nuevaEdad;
}

void Persona::mostrar() const {
    cout << "DNI: " << dni
              << " | Genero: " << (genero ? "Mujer" : "Hombre")
              << " | Edad: " << edad << endl;
}
