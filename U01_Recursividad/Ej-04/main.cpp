#include <iostream>
#include "mcd.h"

int main() {
    std::cout << "Ejercicio 01/04\n" << std::endl;


    std::cout << "Ingrese A seguido de B" << std::endl;

    int a,b;

    std::cin>>a;

    std::cin>>b;

    if(a<b || b<0 || a<0)
    {
        throw 404;
    }

    std::cout << "El Minimo comun divisor de "<<a<<" y "<<b<<" es " <<mcd(a,b)<< std::endl;


    return 0;
}