#include <iostream>

using namespace std;

class Rectangulo {
private:
    double longitud;
    double ancho;

public:
    Rectangulo(double l, double a) : longitud(l), ancho(a) {}

    double calcularArea() {
        return longitud * ancho;
    }

    double calcularPerimetro() {
        return 2 * (longitud + ancho);
    }
};

int main_area_y_perimetro() {
    double longitud, ancho;
    cout << "Ingrese la longitud del rectángulo: ";
    cin >> longitud;
    cout << "Ingrese el ancho del rectángulo: ";
    cin >> ancho;

    Rectangulo rect(longitud, ancho);

    cout << "El área del rectángulo es: " << rect.calcularArea() << endl;
    cout << "El perímetro del rectángulo es: " << rect.calcularPerimetro() << endl;

    return 0;
}

