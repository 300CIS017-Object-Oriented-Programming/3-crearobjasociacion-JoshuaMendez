//
// Created by lufe y Gonzo Feb2024.
//

#include "Propietario.h"

//TODO Agrege el constructor por defecto y agrege un constructor con dos parametros


Propietario::Propietario(string nombre, string docIdentidad) {
 this->nombre = nombre;
 this->docIdentidad = docIdentidad;
}

string Propietario::mostrarInfo() {
    printf("%s\n %s\n %d\n", nombre, docIdentidad, edad);
    return nombre;
}

string Propietario::getNombre()  {
    return nombre;
}

int Propietario::getEdad()  {
    return edad;
}

string Propietario::getdocIdentidad() {
    return docIdentidad;
}

void Propietario::setNombre(string nombre) {
    this->nombre = nombre;
}

Propietario::Propietario(string nombre) {
    this->nombre = nombre;
}

void Propietario::setdocIdentidad(string i) {
    docIdentidad = i;
}
void Propietario::setEdad(int i) {
    edad = i;
}