#include <iostream>
#include "../Cola/Cola.h"

class producto{
public:
    std::string nombre;
    float precio;
};
class cliente
{
public:
    Cola<producto> productos;
    bool esEmbarazada;
};

int main() {
    Cola<cliente> c;
    int cantEmbarazadas=0, contador=0, cantGastada=0;
    cliente aux;
    /*TODO hacer algo para ingresar los clientes.
     * */

    while(!c.esVacia())
    {
        aux=c.desencolar();
        if(aux.esEmbarazada)
            cantEmbarazadas++;
        while(!aux.productos.esVacia())
        {
            contador++;
            cantGastada+=aux.productos.desencolar().precio;
        }
        std::cout<<"El cliente compro "<<contador<<" productos gastando $"<<cantGastada<<std::endl;
        contador=0;
        cantGastada=0;
    }
    std::cout<<"Hubo "<<cantEmbarazadas<<" mujeres embarazadas."<<std::endl;
    return 0;
}