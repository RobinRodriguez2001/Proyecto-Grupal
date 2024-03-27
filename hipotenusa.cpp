#include <iostream>
#include <cmath>

using namespace std;

class TrianguloRectangulo {
private:
    double cateto1;
    double cateto2;

public:
    TrianguloRectangulo(double c1, double c2) : cateto1(c1), cateto2(c2) {}

    double calcularHipotenusa() {
        return sqrt(cateto1 * cateto1 + cateto2 * cateto2);
    }

    void setCateto1(double c1) {
        cateto1 = c1;
    }

    void setCateto2(double c2) {
        cateto2 = c2;
    }
};

main_hipotenusa() {
    double cateto1, cateto2;

    cout << "Ingrese la longitud del primer cateto: ";
    cin >> cateto1;

    cout << "Ingrese la longitud del segundo cateto: ";
    cin >> cateto2;

    TrianguloRectangulo triangulo(cateto1, cateto2);

    double hipotenusa = triangulo.calcularHipotenusa();

    cout << "La longitud de la hipotenusa es: " << hipotenusa << endl;

    return 0;
}

