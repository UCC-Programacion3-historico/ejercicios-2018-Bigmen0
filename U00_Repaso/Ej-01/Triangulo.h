#ifndef REPASO_TRIANGULO_H
#define REPASO_TRIANGULO_H


class Triangulo:public Geometria{
protected:
    float angulo;
public:
    Triangulo(float an, float al, float ang, Color col):Geometria(an,al,col){angulo=ang;};
    float getAngulo();
};


#endif //REPASO_TRIANGULO_H
