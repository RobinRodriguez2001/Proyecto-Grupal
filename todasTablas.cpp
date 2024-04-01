#include <iostream>
#include <math.h>
#include "Archivo_Principal.cpp"

using namespace std;

char opcion;

void todasTablas(){
	
	cout<<endl<<"************** BIENVENIDO A TABLAS DEL 1 AL 10 **************"<<endl;
	cout<<"   En la parte inferior apareceran desplegadas las mismas"<<endl;
	
	do{
	for (int i = 1; i<=10; i++){
		cout<<endl<<"* * * * * * * * * * * * * * * * * * "<<endl<<endl;
		cout<<"LA TABLA DEL "<< i <<endl<<endl;
		
		for (int m=0; m<=10; m++){
			cout << i << " X "<< m<< " = "<<i*m<<endl;

		}
		
		}
		cout << endl << "Desea rehacer las tablas? (S/N): ";
        cin >> opcion;
        cout << endl;
        
    } while (opcion == 'S' || opcion == 's');
 		
 		cout<<"HASTA PRONTO :)"<<endl;
 			
    void Archivo_Principal();
}