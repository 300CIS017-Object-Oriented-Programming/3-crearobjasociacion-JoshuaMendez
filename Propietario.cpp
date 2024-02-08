//
// Created by lufe y Gonzo Feb2024.
//

#include "Propietario.h"

//TODO Agrege el constructor por defecto y agrege un constructor con dos parametros


Propietario::Propietario(std::string nombre, std::string docIdentidad) {
 this->nombre = nombre;
 this->docIdentidad = docIdentidad;
}

std::string Propietario::mostrarInfo() {
    printf("%s\n %s\n %d\n", nombre, docIdentidad, edad);
    return nombre;
}

std::string Propietario::getNombre()  {
    return nombre;
}

int Propietario::getEdad()  {
    return edad;
}

std::string Propietario::getdocIdentidad() {
    return docIdentidad;
}

void Propietario::setNombre(std::string nombre) {
    this->nombre = nombre;
}

Propietario::Propietario(std::string nombre) {
    this->nombre = nombre;
}

void Propietario::setdocIdentidad(std::string i) {
    docIdentidad = i;
}
void Propietario::setEdad(int i) {
    edad = i;
}