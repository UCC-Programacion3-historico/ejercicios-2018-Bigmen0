#include <iostream>

using namespace std;

int main() {
    cout << "Ejercicio 00/04\n" << endl;
    cout<<"Ingrese segundos: "<<endl;
    int in, min, hor;
    cin>>in;

    hor=in/3600;
    in-=hor*3600;
    min=in/60;
    in-=min*60;
    cout<<hor<<" horas "<<min<<" minutos "<<in<<" segundos."<<endl;
    return 0;
}