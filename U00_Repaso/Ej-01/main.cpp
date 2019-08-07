#include <iostream>
#include "Circulo.h"
#include "Cuadrado.h"
#include "Triangulo.h"

using namespace std;

int main() {
    Color rojo(255, 0, 0);
    Color verde(0, 255, 0);
    Color azul(0, 0, 255);
    Circulo cir(2, rojo);
    Cuadrado cuad(5, verde);
    Triangulo tri(3, 2, 1.56, azul);

    cout << "Circulo: " << endl;
    cout << "Perimetro: " << cir.getPerimetro() << endl;
    cout << "Superficie: " << cir.getSuperficie() << endl;
    cout << "Radio: " << cir.getRadio() << endl;
    cout << "Color: " << cir.getColor().getR() << " " << cir.getColor().getV() << " " << cir.getColor().getA() << endl;
    cout << endl;

    cout << "Cuadrado: " << endl;
    cout << "Perimetro: " << cuad.getPerimetro() << endl;
    cout << "Superficie: " << cuad.getSuperficie() << endl;
    cout << "Diagonal: " << cuad.getDiagonal() << endl;
    cout << "Color: " << cuad.getColor().getR() << " " << cuad.getColor().getV() << " " << cuad.getColor().getA()
         << endl;
    cout << endl;

    cout << "Triangulo: " << endl;
    cout << "Perimetro: " << tri.getPerimetro() << endl;
    cout << "Superficie: " << tri.getSuperficie() << endl;
    cout << "Angulo: " << tri.getAngulo() << endl;
    cout << "Color: " << tri.getColor().getR() << " " << tri.getColor().getV() << " " << tri.getColor().getA() << endl;
    cout << endl;

    cout << "Ejercicio 00/01\n" << endl;
    return 0;
}