#include <iostream>
#include "Perro.h"
#include "Propietario.h"

int main() {

    // Instanciar
    Perro firulais;
    firulais.setNombre("Firulais");
    firulais.setColor("Negro");
    firulais.setEdad(5);
    firulais.setTamanio("Grande");
    firulais.setRaza("Mastin napolitano");

    //Agregar un nuevo pPropietario a Firulais
    firulais.agregarPropietario("Carlos Zapata", "102842313");

    // Consultar el nombre del pPropietario del perro Firulais
    std::cout<< "El nombre del pPropietario del perro "<<firulais.getNombre() << " es " << firulais.getPropietario()->getNombre()<<std::endl;

    Perro gonzo("Gonzo", 100, "Chihuahua", "Rojo", "Grande");
    gonzo.ladrar();

    Propietario gonzalo("Gonzalo");

    gonzalo.setdocIdentidad("Cedula");
    gonzalo.setEdad(100);
    gonzalo.mostrarInfo();

    gonzo.agregarPropietario("Joshua", "Cedula");

    std::cout << "docIdentidad pPropietario "<< gonzo.getPropietario()->getdocIdentidad() << std::endl;
    std::cout << "Edad pPropietario" << gonzo.getPropietario()->getEdad() << std::endl;
}
