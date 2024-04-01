#include <iostream>
#include "Archivo_Principal.cpp"
using namespace std;

void figGeo() {
    int ladoCuadrado, alturaTriangulo;
    char opcion;
    
    cout<<endl<<"     *********** BIENVENIDO A FIGURAS GEOMETRICAS ***********"<<endl;
    cout<<"En este ejemplo, las figuras se crean utilizando caracteres ASCII"<<endl<<endl<<endl;

	do{
    cout << "Ingrese la altura del cuadrado: ";
    cin >> ladoCuadrado;

    cout << "Ingrese la altura del triangulo: ";
    cin >> alturaTriangulo;

    cout << endl << "Cuadrado:" << endl<<endl;
    for (int i = 0; i < ladoCuadrado; ++i) {
        for (int j = 0; j < ladoCuadrado; ++j) {
            cout << " *";
        }
        cout <<endl;
    }

    cout << endl << "TRIANGULO:" << endl<<endl;
     for (int i = 1; i <= alturaTriangulo; ++i) {
       
        for (int j = 1; j <= alturaTriangulo - i; ++j) {
            cout << " ";
        }
                for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }
        cout << endl;
    }
    
    cout << endl << "DESEA GENERAR OTRAS FIGURAS? (S/N): ";
        cin >> opcion;
        cout << endl;
        
    } while (opcion == 'S' || opcion == 's');

    cout << "HASTA LUEGO :) " << endl;



    void Archivo_Principal();

}
