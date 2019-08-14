#include <iostream>

using namespace std;


int contar(char *arr, char le) {
        if(*arr=='\0')
        {
            return 0;
        }
    return (((*arr)==le)+contar(arr+1,le));
    }

void mostrar(char *arr)
{
    if(*arr!='\0'){
        if(*arr==' ')
        {
            cout<<*arr;
            mostrar(arr+1);
        }
        else
        {
            cout<<*arr<<' ';
            mostrar(arr+1);
        }
    }
    else
    {
        cout<<endl;
    }

}

void invertir(char *arr)
{
    if(*arr!='\0'){
        if(*arr==' ')
        {
            invertir(arr+1);
            cout<<*arr;
        }
        else
        {
            invertir(arr+1);
            cout<<*arr<<' ';
        }
    }

}

int main() {
    char a[]="Hola mundo lindo";
        cout << "Hay " << contar(a, 'o') << " os en el arreglo " << endl;
    mostrar(a);
    invertir(a);
    return 0;
}