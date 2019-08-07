#include "Triangulo.h"
float Triangulo::getAngulo() {
    return angulo;
}

float Triangulo::getSuperficie() {
    return ancho*alto/2;
}

float Triangulo::getPerimetro(){
    return ancho+alto*sin(angulo)*2;
}