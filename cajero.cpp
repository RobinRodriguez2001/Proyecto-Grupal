#include <iostream>
#include <cstdlib> // Necesario para la función system()

using namespace std;

class CajeroAutomatico {
private:
    double saldo;

public:
    CajeroAutomatico(double saldoInicial) : saldo(saldoInicial) {}

    void verificarSaldo() {
        cout << "Tu saldo actual es: $" << saldo << endl;
    }

    void depositar(double cantidad) {
        if (cantidad > 0) {
            saldo += cantidad;
            cout << "Se depositaron $" << cantidad << " con éxito." << endl;
        } else {
            cout << "No se puede depositar una cantidad negativa." << endl;
        }
    }

    void retirar(double cantidad) {
        if (cantidad > 0) {
            if (saldo >= cantidad) {
                saldo -= cantidad;
                cout << "Retiraste $" << cantidad << " con éxito." << endl;
            } else {
                cout << "Fondos insuficientes." << endl;
            }
        } else {
            cout << "No se puede retirar una cantidad negativa." << endl;
        }
    }
};

int main_cajero() {
    double saldoInicial;
    cout << "Ingrese el saldo inicial: ";
    cin >> saldoInicial;

    CajeroAutomatico cajero(saldoInicial);

    char opcion;

    do {
        system("cls"); // Limpiar la pantalla en Windows
        cout << "Seleccione una opción:" << endl;
        cout << "1. Verificar saldo" << endl;
        cout << "2. Depositar" << endl;
        cout << "3. Retirar" << endl;
        cout << "4. Salir" << endl;
        cout << "Opción: ";
        cin >> opcion;

        switch (opcion) {
            case '1':
                system("cls"); // Limpiar la pantalla antes de mostrar el saldo
                cajero.verificarSaldo();
                break;
            case '2': {
                double cantidadDeposito;
                cout << "Ingrese la cantidad que desea depositar: ";
                cin >> cantidadDeposito;
                cajero.depositar(cantidadDeposito);
                break;
            }
            case '3': {
                double cantidadRetiro;
                cout << "Ingrese la cantidad que desea retirar: ";
                cin >> cantidadRetiro;
                cajero.retirar(cantidadRetiro);
                break;
            }
            case '4':
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
                break;
        }

        cout << "Presione Enter para continuar...";
        cin.ignore(); // Esperar a que el usuario presione Enter para continuar
        cin.get();

    } while (opcion != '4');

    return 0;
}

