#include "Veterinario.h"


Veterinario::Veterinario() {}

Veterinario::Veterinario(string _nombre, int _aniosExperiencia) : nombre(_nombre), aniosExperiencia(_aniosExperiencia) {}

string Veterinario::getNombre() {
    return nombre;
}

int Veterinario::getaniosExperiencia() {
    return aniosExperiencia;
}