#include <iostream>
#include "Archivo_Principal.cpp"
using namespace std;

void tablaMultiplicar() {
    int numero;
    char opcion;
    
    cout <<endl<<"*********** BIENVENIDO A CREAR TABLAS DE MULTIPLICAR ***********" << endl;
        cout << "              (Solo se permiten numeros del 1 al 12)" << endl << endl;
        
    do {        
        
        do {
            cout << "Ingrese el numero para generar la tabla: ";
            cin >> numero;
            cout << endl;
        } while (numero < 1 || numero > 12);
        
        for (int i = 1; i <= 10; i++) {
            cout << numero << " X " << i << " = " << numero * i << endl;
        }
        
        cout << endl << "DESEA GENERAR OTRA TABLA? (S/N): ";
        cin >> opcion;
        cout << endl;
        
    } while (opcion == 'S' || opcion == 's');

    cout << "HASTA LUEGO :) " << endl;

    void Archivo_Principal();
}
