#ifndef REPASO_GEOMETRIA_H
#define REPASO_GEOMETRIA_H


#include "Color.h"

class Geometria {
protected:
    float ancho;
    float alto;
    Color col;
public:
    Geometria(float,float,Color);
    virtual float getSuperficie()=0;
    virtual float getPerimetro()=0;
    Color getColor();
};
#endif //REPASO_GEOMETRIA_H
