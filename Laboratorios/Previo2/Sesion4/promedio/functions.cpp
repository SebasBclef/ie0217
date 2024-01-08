#include "functions.hpp"
#include <iostream>

void Promedio(Student s1, Student s2) {
    double promedio = (s1.marks + s2.marks) / 2;

    std::cout << "Promedio de notas: " << promedio << std::endl;
}