#include <iostream>
#include "sumatoria.h"
using namespace std;
int main() {
    std::cout << "Ejercicio 01/02\n" << std::endl;
    int *arr;
    int size;
    cout << "Ingrese tamaño del arreglo: " << endl;
    cin>>size;

    arr=new int[size];

    cout<<"Ingrese elementos: "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"["<<i<<"]: "<<endl;
        cin>>arr[i];
    }

    cout<<"La suma es igual a "<<sumatoria(arr, size)<<endl;
    return 0;
}