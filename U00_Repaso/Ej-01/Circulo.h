#ifndef REPASO_CIRCULO_H
#define REPASO_CIRCULO_H

#include "Geometria.h"
#include "Color.h"

class Circulo: public Geometria{
private:
    float radio;
public:
    Circulo(float rad, Color col):Geometria(2*rad,2*rad, col){radio=rad;};
    float getRadio();
    float getSuperficie();
    float getPerimetro();
};


#endif //REPASO_CIRCULO_H
