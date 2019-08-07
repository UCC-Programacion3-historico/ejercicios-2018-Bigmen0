#include "Geometria.h"
Geometria::Geometria(float an, float al, Color c) {
    ancho=an;
    alto=al;
    col=c;
}


Color Geometria::getColor() {
    Color aux=col;
    return aux;
}