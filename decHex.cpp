#include <iostream>
#include <sstream>
#include <string>
#include "Archivo_Principal.cpp"
using namespace std;

string decimalAHexadecimal(int numeroDecimal) {
    stringstream ss;
    ss << hex << numeroDecimal;
    return ss.str();
}

void decHex() {
    int numeroDecimal;
    char opcion;
   	cout<<endl<<"       ***** BIENVENIDO AL CALCULO DE NUMERO DECIMAL A HEXADECIMAL *****"<<endl;
	cout << "RECUERDA QUE: Un numero decimal es como cualquier numero comun como 10, 5, 20 O 100."<<endl<<endl;
	
	do{
    cout << "Ingrese un numero decimal: ";
    cin >> numeroDecimal;

    string hexadecimal = decimalAHexadecimal(numeroDecimal);
    cout << "El numero hexadecimal es: " << hexadecimal << endl;
    
		cout<<endl<<"*************************************************************"<<endl;
		cout << endl << "Desea calcular otro numero? (S/N): ";
        cin >> opcion;
        cout << endl;
        
    } while (opcion == 'S' || opcion == 's');
 		
 		cout<<"HASTA PRONTO :)"<<endl;    

    void Archivo_Principal();
}