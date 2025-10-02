#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "Persona.hpp"

using namespace std;

int main() {
    srand(time(nullptr));  

    vector<Persona*> personas;
    vector<int> edadesUsadas;

    while (personas.size() < 10) {
        int edad = 18 + rand() % 10; 

        bool repetida = false;
        for (int e : edadesUsadas) {
            if (e == edad) {
                repetida = true;
                break;
            }
        }
        if (!repetida) {
            Persona* p = new Persona(edad);
            personas.push_back(p);
            edadesUsadas.push_back(edad);
        }
    }

    cout << "Personas generadas:\n";
    for (Persona* p : personas) {
        p->mostrar();
    }

    for (Persona* p : personas) {
        delete p;
    }

    return 0;
}
