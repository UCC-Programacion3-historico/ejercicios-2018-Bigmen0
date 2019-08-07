#include "Circulo.h"

float Circulo::getRadio() {
    return radio;
}

float Circulo::getPerimetro() {
    return 2*3.1416*radio;
}

float Circulo::getSuperficie() {
    return 3.1416*radio*radio;
}