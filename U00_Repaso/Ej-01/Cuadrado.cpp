#include "Cuadrado.h"
float Cuadrado::getDiagonal() {
    return 1.41421356237*alto;
}

float Cuadrado::getSuperficie() {
    return alto*alto;
}

float Cuadrado::getPerimetro() {
    return alto*4;
}