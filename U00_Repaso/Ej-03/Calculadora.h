#ifndef REPASO_CALCULADORA_H
#define REPASO_CALCULADORA_H


template<class T, class P>
class Calculadora{
public:
    T sumar(T, T);
    T restar(T, T);
    P dividir(T, T);
    T multiplicar(T, T);
};

template<class T, class P>
T Calculadora<T, P>::sumar(T a, T b) {
    return a + b;
}

template<class T, class P>
T Calculadora<T, P>::restar(T a, T b) {
    return a - b;
}

template<class T, class P>
P Calculadora<T, P>::dividir(T a, T b) {
    if(b==0)
        throw 404;
    return (P)a / b;
}

template<class T, class P>
T Calculadora<T, P>::multiplicar(T a, T b) {
    return a * b;
}

#endif //REPASO_CALCULADORA_H
