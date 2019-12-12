#include <iostream>
#include "ackerman.h"

int main() {
    std::cout << "Ejercicio 01/03\n" << std::endl;

    std::cout<<"Ingrese numeros de ackerman (M seguido de N): "<<std::endl;
    int acM, acN;
    std::cin>>acM;
    std::cin>>acN;

    std::cout<<"El Ackerman de "<<acM<<" y "<<acN<<" es "<<ackerman(acM,acN);
    return 0;
}