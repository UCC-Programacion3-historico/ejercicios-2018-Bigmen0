#include <iostream>
#include "../Pila/Pila.h"

int main() {
    char arr[100];
    Pila<char> p;
    std::cout<<"Ingrese Palabra"<<std::endl;
    std::cin>>arr;

    for(int i=0;arr[i]!='\0';i++)
    {
        p.push(arr[i]);
    }

    while(!p.esVacia())
    {
        std::cout<<p.pop();
    }
    std::cout<<std::endl;
    std::cout << "Ejercicio 03/01\n" << std::endl;
    return 0;
}