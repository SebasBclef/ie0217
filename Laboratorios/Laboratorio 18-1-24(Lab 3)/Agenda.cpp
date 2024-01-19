#include "Agenda.hpp"

template <typename T>

void Agenda<T>::agregarContacto(const Contacto<T>& contacto){
    //
    typename std::list<Contacto <T> >:: const_iterator it;
    for(it= contactos.begin(); it != contactos.end(); ++it){
        if (it -> getTelefono()==contacto.getTelefono()){
            throw std::invalid_argument("Ya existe un contacto con este numero.");
        }
    }
//Se agrega el contacto
    contactos.push_back(contacto);
}

template <typename T>
void Agenda<T>::eliminarContacto(const T& telefono){
    typename std::list<Contacto <T> >:: const_iterator it;
    for(it= contactos.begin(); it != contactos.end(); ++it){
        if (it -> getTelefono() == telefono){
            contactos.erase(it);
        }
    }

    throw std::out_of_range("No se encuentra un contacto con ese numero");
}

template<typename T>
void Agenda<T>::mostrarContactos() const{
    typename std::list<Contacto <T> >:: const_iterator it;
    for (it=contactos.begin(); it != contactos.end(); ++it){
        std::cout<<"Nombre: \n"<<it->getNombre()<<""
                 <<"\n Telefono: \n"<<it->getTelefono()<<""
                 <<"\n Email: \n"<<it->getEmail()<<std::endl;
    }
}

template <typename T>
bool Agenda<T>::buscarContactos(const T& criterio) const {
    bool encontrado = false;

    typename std::list<Contacto<T>>::const_iterator it;
    for (it = contactos.begin(); it != contactos.end(); ++it) {
        // Aquí puedes agregar la lógica para verificar si el contacto cumple con el criterio
        if (std::equal_to<T>{}(it->getNombre(), criterio) ||
            std::equal_to<T>{}(it->getTelefono(), criterio) ||
            std::equal_to<T>{}(it->getEmail(), criterio)) {
            std::cout << "Nombre: " << it->getNombre() << "\n"
                      << "Telefono: " << it->getTelefono() << "\n"
                      << "Email: " << it->getEmail() << std::endl;

            encontrado = true;
        }
    }

    if (!encontrado) {
        std::cout << "No se encontraron contactos con el criterio de búsqueda." << std::endl;
    }

    return encontrado; // Retornar el resultado de la búsqueda
}

