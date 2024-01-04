#include <iostream>
#include "sum.hpp"

int main(){
    int num1=5;
    int num2=3;
    int result = sum(num1,num2);

    std::cout << "El resultado de la suma del numero " << num1 << " y el numero " << num2 << " es " << result << std::endl;
    return 0;
}