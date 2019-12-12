//
// Created by alumno on 11/9/2019.
//

#ifndef PROGRAMACION3_NODO_H
#define PROGRAMACION3_NODO_H

#endif //PROGRAMACION3_NODO_H


template<class T>
class Nodo{
private:
    T dato;
    int prioridad;
    Nodo<T> *siguiente;
public:
    T getDato()
    {
        return dato;
    }
    void setDato(T d)
    {
        dato=d;
    }
    Nodo<T> *getSiguiente()
    {
        return siguiente;
    }

    void setSiguiente(Nodo<T> *s)
    {
        siguiente=s;
    }

    int getPrioridad()
    {
        return prioridad;
    }

    void setPrioridad(int a)
    {
        prioridad=a;
    }
};