#ifndef RAZA_H
#define RAZA_H

#include <string>
#include <iostream>

using namespace std;

class Raza {
private:
    string nombre;
    string paisOrigen;

public:
    Raza();
    Raza(string _nombre, string _paisOrigen);
    
    string getNombre();
    string getpaisOrigen();

    void setNombre(string _nombre);
    void setpaisOrigen(string _paisOrigen);
    
};
#endif
