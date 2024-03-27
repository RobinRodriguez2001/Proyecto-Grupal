#include <iostream>

using namespace std;

class Calculadora {
public:
    double sumar(double a, double b) {
        return a + b;
    }

    double restar(double a, double b) {
        return a - b;
    }

    double multiplicar(double a, double b) {
        return a * b;
    }

    double dividir(double a, double b) {
        if (b != 0)
            return a / b;
        else {
            cout << "Error: No se puede dividir por cero." << endl;
            return 0;
        }
    }
};

int main_calculadora() {
    Calculadora calc;

    double num1, num2;

    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    cout << "Suma: " << calc.sumar(num1, num2) << endl;
    cout << "Resta: " << calc.restar(num1, num2) << endl;
    cout << "Multiplicación: " << calc.multiplicar(num1, num2) << endl;
    cout << "División: " << calc.dividir(num1, num2) << endl;

    return 0;
}

