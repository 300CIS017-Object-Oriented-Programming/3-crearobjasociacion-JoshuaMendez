#include <iostream>
#include "Perro.h"
#include "Propietario.h"
#include "Raza.h"

int main() {

    Raza mastinNapolitano("Mastin Napolitano", "Italia");
    Raza maltes("Maltes", "Italia");

    // Instanciar
    Perro firulais;
    firulais.setNombre("Firulais");
    firulais.setColor("Negro");
    firulais.setEdad(5);
    firulais.setTamanio("Grande");
    firulais.setRaza("Mastin napolitano");
    firulais.setpRaza(&mastinNapolitano);

    //Agregar un nuevo pPropietario a Firulais
    firulais.agregarPropietario("Carlos Zapata", "102842313");

    // Consultar el nombre del pPropietario del perro Firulais
    cout<< "El nombre del pPropietario del perro "<<firulais.getNombre() << " es " << firulais.getPropietario()->getNombre()<<endl;

    Perro gonzo("Gonzo", 100, "Chihuahua", "Rojo", "Grande");
    gonzo.ladrar();

    Propietario gonzalo("Gonzalo");

    gonzalo.setdocIdentidad("Cedula");
    gonzalo.setEdad(100);
    gonzalo.mostrarInfo();

    gonzo.agregarPropietario("Joshua", "Cedula");

    cout << "docIdentidad pPropietario " << gonzo.getPropietario()->getdocIdentidad() << endl;
    cout << "Edad pPropietario " << gonzo.getPropietario()->getEdad() << endl;

    cout << "Nombre Veterinario " << gonzo.getVeterinario()->getNombre() << " Anios de Experiencia " << gonzo.getVeterinario()->getaniosExperiencia() << endl;
}