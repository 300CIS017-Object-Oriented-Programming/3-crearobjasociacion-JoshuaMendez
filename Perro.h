//
// Created by lufe0 y Gonzo Feb2024.
//
#ifndef PERRO_H
#define PERRO_H

#include <string>
#include <cstdio>
#include <iostream>
#include "Propietario.h"
#include "Veterinario.h"

class Perro {
private:
    int edad;
    string nombre;
    string raza;
    string tamanio;
    string color;
    Propietario* pPropietario;
    Veterinario* pVeterinario;

public:
    Perro();
    Perro(string _nombre, int _edad, string _raza, string _color, string _tamanio);
~Perro(); //Destructor
    void ladrar();
    Propietario * getPropietario();
    Veterinario * getVeterinario();

        // El método agregarPropietario en la clase Perro está asignando un nuevo objeto de tipo Propietario a la variable miembro pPropietario. Este objeto Propietario se crea dinámicamente utilizando el operador new y se inicializa con los parámetros nombre y docIdentidad pasados al método.
    void agregarPropietario(string nombre, string docIdentidad);

    // Sirve para relacionar dos clases cuando ya se tiene un objeto
    void setPropietario(Propietario * pPropietario);


    int getEdad();
    void setEdad(int edad);
    string getRaza();
    void setRaza(string raza);
    string getNombre();
    void setNombre(string nombre);
    string getTamanio();
    void setTamanio(string tamanio);
    string getColor();
    void setColor(string color);
    void Perro::asociarVeterinario(string nombreVeterinario, int aniosExperiencia);
};
#endif
