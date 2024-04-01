#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include "Archivo_Principal.cpp"
using namespace std;

void multiplicacionManual(int multiplicando, int multiplicador) {


    string strMultiplicando = to_string(multiplicando);
    string strMultiplicador = to_string(multiplicador);

    int maxLength = max(strMultiplicando.size(), strMultiplicador.size() + 1);

    int total = 0;
    string lineaSeparadora(maxLength, '-');

    cout << right << setw(maxLength) << strMultiplicando << endl;
    cout << "*" << setw(maxLength - 1) << strMultiplicador << endl;
    cout << lineaSeparadora << endl;

    int fila = 0;
    for (int i = strMultiplicador.size() - 1; i >= 0; --i) {
        int digitoMultiplicador = strMultiplicador[i] - '0';
        int productoParcial = multiplicando * digitoMultiplicador;
        total += productoParcial * pow(10, fila);

        cout << right << setw(maxLength - (strMultiplicador.size() - i - 1)) << productoParcial << endl;
        fila++;
    }

    cout << lineaSeparadora << endl;
    cout << total<<" --> Total" << endl;
}

int crearManual() {
	    int multiplicando, multiplicador;
	    char opcion;
	
	cout<<endl<<"***** BIENVENIDO A LA REPRESENTACION GRAFICA DE LA MULTIPLICACION *****"<<endl;
	cout<<"     En la parte inferior puede realizar una multiplicacion basica"<<endl;

	do{
    cout <<endl<< "Ingrese el multiplicando: ";
    cin >> multiplicando;

    cout << "Ingrese el multiplicador: ";
    cin >> multiplicador;
    cout<<endl;

    multiplicacionManual(multiplicando, multiplicador);
    
    	cout<<endl<<"*****************************************************"<<endl;
		cout << endl << "Desea calcular otros numeros? (S/N): ";
        cin >> opcion;
        
    } while (opcion == 'S' || opcion == 's');
 		
 		cout<<"HASTA PRONTO :)"<<endl;

void Archivo_Principal();

}