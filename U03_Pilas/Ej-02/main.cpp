#include <iostream>
#include "../Pila/Pila.h"
template <class T>
bool pIguales(Pila<T> a, Pila <T> b)
{

    while(a.esVacia() || b.esVacia())
    {
        if(a.peek()==b.peek())
        {
            a.pop();
            b.pop();
        }
        else
            return false;


    }

    if (a.esVacia()&&b.esVacia())
        return true;

    return false;
}


int main() {
    std::cout << "Ejercicio 03/02\n" << std::endl;
    return 0;
}