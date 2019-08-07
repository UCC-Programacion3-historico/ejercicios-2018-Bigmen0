#include <iostream>
#include "Calculadora.h"

using namespace std;

int main() {
    Calculadora<int,float> miCalc;
    cout<<miCalc.dividir(10,3)<<endl;
    cout<<miCalc.multiplicar(4,8)<<endl;
    cout<<miCalc.sumar(2,3)<<endl;
    cout<<miCalc.restar(49,34)<<endl;
    cout << "Ejercicio 00/02\n" << endl;
    return 0;
}