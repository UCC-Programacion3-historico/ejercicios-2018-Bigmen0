#include <iostream>
#include "Pila.h"
#include "Cola.h"
#include "string.h"

using namespace std;
/*  Ejercicio N°2.
Utilizando una pila y una cola, realizar una función que reciba una cadena y devuelva el
        valor lógico verdadero si dicha cadena es un palidromo. No se deben tener en cuenta los
        espacios y signos de puntuación.
*/

bool palindromo(char* a)
{
    Cola<char> c;
    Pila<char> p;

    for(int i=0;a[i]!='/0';i++)
    {
        if(a[i!=' ']){
            c.encolar(a[i]);
            p.push(a[i]);
        }
    }

    for(int i=0;a[i]!='/0';i++){
        if(c.desencolar()!=p.pop())
        {
            return false;
        }
    }

    return true;
}

int main() {
    cout<<"anita lava la tina: "<<palindromo("anita lava la tina")<<endl;
    cout<<"hola q ase: "<<palindromo("hola q ase")<<endl;
    cout<<"la ruta nos aporto otro paso natural: "<<palindromo("la ruta nos aporto otro paso natural")<<endl;

}