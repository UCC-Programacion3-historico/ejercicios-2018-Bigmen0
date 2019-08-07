#ifndef REPASO_CUADRADO_H
#define REPASO_CUADRADO_H


#include "Geometria.h"
#include "Color.h"

class Cuadrado: public Geometria {
public:
    Cuadrado(float a, Color c):Geometria(a,a,c){};
    float getSuperficie();
    float getPerimetro();
    float getDiagonal();
};


#endif //REPASO_CUADRADO_H
