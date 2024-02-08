#ifndef VETERINARIO_H
#define VETERINARIO_H

#include <string>
#include <cstdio>
#include <iostream>
#include "Propietario.h"
#include "Perro.h"

using namespace std;

class Veterinario {
private:
    string nombre;
    int aniosExperiencia;
public:
    Veterinario() = default;
    Veterinario(string nombre, int aniosExperiencia);

    string getNombre();
    int getaniosExperiencia();
};

#endif
