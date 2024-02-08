//
// Created by lufe y Gonzo Feb2024.
//

#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <string>

using namespace std;

class Propietario {
private:
    string nombre;
    string docIdentidad;
    int edad;
public:
    Propietario() = default; //Agrega constructor por defecto sin cuerpo
    Propietario(string nombre);
    Propietario(string nombre, string docIdentidad);
    string mostrarInfo();
    string getNombre();
    void setNombre(string nombre);
    void setdocIdentidad(string i);
    void setEdad(int i);
    int getEdad();
    string getdocIdentidad();



};


#endif //PROPIETARIO_H
