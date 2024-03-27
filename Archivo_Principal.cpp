#include "Operacion.cpp"
#include "Si_par.cpp"
#include "Conversiones.cpp"
#include <iostream>

using namespace std;

int main(){
	
	int num1, num2, ne;
	float num3;
	int opc;
	Operacion op;
	Si_par si_no;
	Conversiones con;
	
	while(true){
		
		cout<<"\n	---------------------MENU---------------- "<<endl;
		
		//Del ejercicio 1 al ejercicio 7 fueron hechos por 
		//Robin Daniel Rodriguez Geronimo 7691-23-3006
		//Al unir todos los archivos cada intengrante unio su codigo en el switch
		
		cout<<"\n1.	Suma, Resta, Multiplicacion y Division de dos numeros.";
		cout<<"\n2.	Determinar si un numero es par o impar.";
		cout<<"\n3.	Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa. ";
		cout<<"\n4.	Determinar si una palabra o un numero es palindromo. ";
		cout<<"\n5.	Conversion de numeros arabigos a romanos (minimo 1,000). ";
		cout<<"\n6.	Conversion de numeros enteros a letras. ";
		cout<<"\n7.	Conversion de numeros enteros con decimal a letras. ";
		cout<<"\n8. ";
		cout<<"\n9. ";
		cout<<"\n10. ";
		cout<<"\n11. ";
		cout<<"\n12. ";
		cout<<"\n13. ";
		cout<<"\n14. ";
		cout<<"\n15. ";
		cout<<"\n16. ";
		cout<<"\n17. ";
		cout<<"\n18. ";
		cout<<"\n19. ";
		cout<<"\n20. ";
		cout<<"\n21.	Salir"<<endl;
		cout<<"\n	Seleccione una Opcion: ";
		cin>>opc;
		
		switch(opc){
			case 1:
				system("cls");
				cout<<"\tOperaciones Matematicas"<<endl;
				cout<<"\nDigite un numero: ";
				cin>>num1;
				cout<<"\nDigite otro numero: ";
				cin>>num2;
				
				op = Operacion(num1, num2);
				op.sumar();
				op.restar();
				op.multiplicar();
				op.dividir();
				cout<<"\n";
				system("pause");
				system("cls");
				break;
				
			case 2:
				system("cls");
				cout<<"\tNumero par o impar"<<endl;
				cout<<"\nDigite un numero: ";
				cin>>num1;
				
				si_no = Si_par(num1);
				si_no.determinar();
				cout<<"\n";
				system("pause");
				system("cls");
				break;
			case 3:
				system("cls");
				con.menu();
				cout<<"\n	Seleccione una opcion: ";
				cin>>ne;
				cout<<"\nDigite un numero: ";
				cin>>num3;
		
				if(ne == 1){
					con = Conversiones(num3);
					con.conversion1();
				}
				if (ne == 2){
					con = Conversiones(num3);
					con.conversion2();
				}if(ne == 3){
					con = Conversiones(num3);
					con.conversion3();
				}
				if (ne == 4){
					con = Conversiones(num3);
					con.conversion4();
				}
				if(ne == 5){
					con = Conversiones(num3);
					con.conversion5();
				}
				if (ne == 6){
					con = Conversiones(num3);
					con.conversion6();
				}
				cout<<"\n";
				system("pause");
				system("cls");
				break;
			case 4:
				system("pause");
				system("cls");
				break;
			case 5:
				system("pause");
				system("cls");
				break;
			case 6:
				system("pause");
				system("cls");
				break;
			case 7:
				system("pause");
				system("cls");
				break;
			case 8:
				system("pause");
				system("cls");
				break;
			case 9:
				system("pause");
				system("cls");
				break;
			case 10:
				system("pause");
				system("cls");
				break;
			case 11:
				system("pause");
				system("cls");
				break;
			case 12:
				system("pause");
				system("cls");
				break;
			case 13:
				system("pause");
				system("cls");
				break;
			case 14:
				system("pause");
				system("cls");
				break;
			case 15:
				system("pause");
				system("cls");
				break;
			case 16:
				system("pause");
				system("cls");
				break;
			case 17:
				system("pause");
				system("cls");
				break;
			case 18:
				system("pause");
				system("cls");
				break;
			case 19:
				system("pause");
				system("cls");
				break;
			case 20:
				system("pause");
				system("cls");
				break;
			case 21:
				return 0;
			default:
				system("cls");
				cout<<"Opcion no valida..."<<endl;
				system("pause");
				system("cls");
				break;
				
			
		}
	}
	
	return 0;
}
