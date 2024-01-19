#include "Agenda.hpp"
#include <iostream>

int main(){
    //objetos de la clase
     Contacto<std::string> contacto1("Pedro","73004115","noobpwner@gmail.com");
     Contacto<std::string> contacto2("Hugo","83110671","pepegrillo@gmail.com");
     Contacto<std::string> contacto3("Luis","88921670","chupondemanguera@gmail.com");

     //Crear un objeto

     Agenda<std::string> agenda;

     //Agregar Contactos a la agenda

     try{
        agenda.agregarContacto(contacto1);
        agenda.agregarContacto(contacto2);
        agenda.agregarContacto(contacto3);
     } catch(const std::exception& e){
        std::cerr <<"Error al agregar contacto."<< e.what()<<std::endl;
     };
     

    //mostrar contactos por nombre
     std::cout<< "Sus contactos son: " <<std::endl;
     agenda.mostrarContactos();

     //Buscar contactos por nombre

     //Eliminar contacto
     try{
        agenda.eliminarContacto("73004115");

     } catch(const std::exception& e){
        std::cerr<<"Error al eliminar contacto: "<<e.what()<<std::endl;

    //mostrar contacto

    std::cout<<"Contactos en la agenda: "<<std::endl;
    agenda.mostrarContactos();
     }
}