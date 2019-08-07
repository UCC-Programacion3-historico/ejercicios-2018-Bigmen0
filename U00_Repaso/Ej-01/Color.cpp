#include "Color.h"
Color::Color(int r, int v, int a) {
    rojo=r%256;
    verde=v%256;
    azul=a%256;
}

void Color::getcolor(int* a, int* v, int* r) {
    *a=azul;
    *v=verde;
    *r=rojo;
}

void Color::tenirColor(int r=rojo, int v=verde, int a=azul) {
    rojo=r%256;
    verde=v%256;
    azul=a%256;
}

Color Color::operator=(Color c) {
    rojo=c.rojo;
    verde=c.verde;
    azul=c.azul;
}