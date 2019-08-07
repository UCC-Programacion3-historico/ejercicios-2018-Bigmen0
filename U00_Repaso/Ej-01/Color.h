#ifndef REPASO_COLOR_H
#define REPASO_COLOR_H


class Color {
protected:
    int rojo;
    int verde;
    int azul;
public:
    Color();
    Color(int,int,int);
    void getcolor(int*,int*,int*);
    void tenirColor(int,int,int);
    Color operator=(const Color);
    int getR(){return rojo;};
    int getV(){return verde;};
    int getA(){return azul;};
};


#endif //REPASO_COLOR_H
