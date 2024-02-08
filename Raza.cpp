#include "Raza.h"

Raza::Raza() {}
Raza::Raza(string _nombre, string _paisOrigen) : nombre(_nombre), paisOrigen(_paisOrigen) {}

string Raza::getNombre() { return nombre; }
string Raza::getpaisOrigen() { return paisOrigen; }

void Raza::setNombre(string _nombre) { nombre = _nombre; }
void Raza::setpaisOrigen(string _paisOrigen) { paisOrigen = _paisOrigen; }