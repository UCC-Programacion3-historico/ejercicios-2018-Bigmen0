#include "Color.h"
Color::Color(int r, int v, int a) {
    rojo=r%256;
    verde=v%256;
    azul=a%256;
}

Color::Color()
{
    rojo=0;
    verde=0;
    azul=0;
}

void Color::getcolor(int* a, int* v, int* r) {
    *a=azul;
    *v=verde;
    *r=rojo;
}

void Color::tenirColor(int r = -1, int v = -1, int a = -1) {
    if (r!=-1)
        rojo=r%256;
    if (v!=-1)
        verde=v%256;
    if (a!=-1)
        azul=a%256;
}

Color Color::operator=(const Color c) {
    rojo=c.rojo;
    verde=c.verde;
    azul=c.azul;
}