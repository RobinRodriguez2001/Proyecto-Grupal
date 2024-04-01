#include <iostream>
#include <iomanip>

using namespace std;

void imprimirMultiplicacion(int multiplicando, int multiplicador) {
    int resultado = multiplicando * multiplicador;
    
    cout << "   " << setw(4) << multiplicando << endl;
    cout << "X  " << setw(4) << multiplicador << endl;
    cout << "---------" << endl;
    cout << "   " << setw(4) << multiplicando * (multiplicador % 10) << endl;
    cout << "  " << setw(5) << (multiplicando * (multiplicador / 10) % 10) * 10 << endl;
    cout << "+ " << setw(5) << (multiplicando * (multiplicador / 100)) * 100 << endl;
    cout << "---------" << endl;
    cout << "   " << setw(4) << resultado << endl;
}

int main_multiplicacion() {
    int multiplicando, multiplicador;

    cout << "Ingrese el multiplicando: ";
    cin >> multiplicando;

    cout << "Ingrese el multiplicador: ";
    cin >> multiplicador;

    imprimirMultiplicacion(multiplicando, multiplicador);

    return 0;
}

