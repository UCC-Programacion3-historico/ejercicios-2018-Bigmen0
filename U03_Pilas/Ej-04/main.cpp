#include <iostream>
#include "../Pila/Pila.h"


bool comparar(char a , char b){
    return int(b)==(int(a)+1);
}

int main() {
    char arr[100];
    Pila<char> p;
    cout<<"Ingrese ecuacion"<<endl;
    cin>>arr;

    for(int i=0;arr[i]!='/0';i++)
    {
        if(arr[i]=='(' || arr[i]=='{' || arr[i]=='[')
        {
            p.push(arr[i]);
        }
        if(arr[i]==')' || arr[i]=='}' || arr[i]==']')
        {
            if(comparar(arr[i],p.peek()))
            {
                p.pop;
            }
            else
                throw 404;
        }
    }
    cout<<"No hay errores!"<<endl;
    std::cout << "Ejercicio 03/04\n" << std::endl;
    return 0;
}