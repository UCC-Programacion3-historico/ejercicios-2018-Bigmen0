#ifndef COLA_H
#define COLA_H

#include "nodo.h"

/**
 * Clase que implementa una Cola generica, ya que puede
 * almacenar cualquier tipo de dato T
 * @tparam T cualquier tipo de dato
 */
template<class T>
class Cola {
private:
    Nodo<T> *frente, *fondo;

public:
    Cola();

    ~Cola();

    void encolar(T dato, int prio);

    T desencolar();

    bool esVacia();

    T peek();
};


/**
 * Constructor de la clase Cola
 * @tparam T
 */
template<class T>
Cola<T>::Cola() {
    frente = nullptr;
    fondo = nullptr;
}


/**
 * Destructor de la clase Cola, se encarga de liberar la memoria de todos los nodos
 * utilizados en la Cola
 * @tparam T
 */
template<class T>
Cola<T>::~Cola() {}


/**
 * Inserta un dato en la Cola
 * @tparam T
 * @param dato  dato a insertar
 */
template<class T>
void Cola<T>::encolar(T dato, int prio) {
    auto *nuevo = new Nodo<T>();
    nuevo->setDato(dato);
    nuevo->setSiguiente(nullptr);
    nuevo->setPrioridad(prio);
    Nodo<T> aux=frente;
    if (fondo == nullptr) {
        frente = nuevo;
    } else {
        while(nuevo->getPrioridad()<aux.getPrioridad() && aux.getSiguiente()!= nullptr)
        {
            aux=aux->getSiguiente();
        }
        Nodo<T> aux2=aux.getSiguiente();
        aux->setSiguiente(nuevo);
        nuevo->setSiguiente(aux2);
    }

    fondo = nuevo;
}


/**
 * Obtener el dato de la Cola
 * @tparam T
 * @return dato almacenado en el nodo
 */
template<class T>
T Cola<T>::desencolar() {
    Nodo<T> *aBorrar;
    T aux = frente->getDato();
    if (frente == nullptr) {
        throw 404;
    }
    aBorrar = frente;
    frente = frente->getSiguiente();
    if(frente== nullptr){
        fondo= nullptr;
    }

    delete aBorrar;
    return aux;
}

/**
 * Responde si la Cola se encuentra Vacía
 * @tparam T
 * @return
 */
template<class T>
bool Cola<T>::esVacia() {

}

template <class T>
T Cola<T>::peek() {
    if(frente== nullptr)
        throw 404;

    return frente->getDato();

}

#endif //LISTA_H