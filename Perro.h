//
// Created by lufe0 y Gonzo Feb2024.
//
#ifndef PERRO_H
#define PERRO_H

#include <string>
#include <cstdio>
#include <iostream>
#include "Propietario.h"

class Perro {
private:
    int edad;
    std::string nombre;
    std::string raza;
    std::string tamanio;
    std::string color;
    Propietario* pPropietario;

public:
    Perro();
    Perro(std::string nombre, int edad, std::string raza, std::string color, std::string tamanio);
~Perro(); //Destructor
    void ladrar();
    Propietario * getPropietario();

        // El método agregarPropietario en la clase Perro está asignando un nuevo objeto de tipo Propietario a la variable miembro pPropietario. Este objeto Propietario se crea dinámicamente utilizando el operador new y se inicializa con los parámetros nombre y docIdentidad pasados al método.
    void agregarPropietario(std::string nombre, std::string docIdentidad);

    // Sirve para relacionar dos clases cuando ya se tiene un objeto
    void setPropietario(Propietario * pPropietario);


    int getEdad();
    void setEdad(int edad);
    std::string getRaza();
    void setRaza(std::string raza);
    std::string getNombre();
    void setNombre(std::string nombre);
    std::string getTamanio();
    void setTamanio(std::string tamanio);
    std::string getColor();
    void setColor(std::string color);
};
#endif
