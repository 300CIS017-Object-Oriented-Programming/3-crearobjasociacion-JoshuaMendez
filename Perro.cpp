#include "Perro.h"
#include <iostream>


// Ejemplo de constructor por defecto con lista inicializadora
// Perro::Perro() : edad(0), raza(""), tamanio(""), color("") {}

// Ejemplo de constructor por defecto iniciando los atributos en el cuerpo del constructor
Perro::Perro() {
    this->edad = 0;
    this->raza = "";
    this->tamanio = "";
    this->color = "";
}

void Perro::ladrar() {
    std::cout << "Guau Guau" << std::endl;
}

void Perro::agregarPropietario(std::string nombre, std::string docIdentidad) {
    // Asocia a la variable de instancia pPropietario un nuevo pPropietario
    // Es memoria dinámica, en el destructor se debe liberar
    this->pPropietario = new Propietario(nombre, docIdentidad);
}

void Perro::setPropietario(Propietario *pPropietario) {
    this->pPropietario = pPropietario;
}

void Perro::setpRaza(Raza *pRaza) {
    this->pRaza = pRaza;
}

Propietario *Perro::getPropietario() {
    return this->pPropietario;
}

Veterinario *Perro::getVeterinario() {
    return this->pVeterinario;
}

Raza *Perro::getpRaza() {
    return this->pRaza;
}

int Perro::getEdad() {
    return edad;
}

void Perro::setEdad(int edad) {
    this->edad = edad;
}

std::string Perro::getRaza() {
    return raza;
}

void Perro::setRaza(std::string raza) {
    this->raza = raza;
}

std::string Perro::getTamanio() {
    return tamanio;
}

void Perro::setTamanio(std::string tamanio) {
    this->tamanio = tamanio;
}

std::string Perro::getNombre() {
    return nombre;
}

void Perro::setNombre(std::string nombre) {
    this->nombre = nombre;
}

std::string Perro::getColor() {
    return color;
}

void Perro::setColor(std::string color) {
    this->color = color;
}

Perro::~Perro() {
    delete pPropietario;
}

Perro::Perro(std::string _nombre, int _edad, std::string _raza, std::string _color, std::string _tamanio) : nombre(_nombre), edad(_edad), raza(_raza), color(_color), tamanio(_tamanio) {}

void Perro::asociarVeterinario(std::string nombreVeterinario, int aniosExperiencia) {
    pVeterinario = new Veterinario(nombreVeterinario, aniosExperiencia);
}