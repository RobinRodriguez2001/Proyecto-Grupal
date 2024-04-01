#include "Operacion.cpp"
#include "Si_par.cpp"
#include "Conversiones.cpp"

#include "Palabra_pol.cpp"
#include "Ara_rom.cpp"
#include "Num_let.cpp"
#include "Con_dec.cpp"
#include "Tabla_mul.cpp"

#include "cajero.cpp"
#include "hipotenusa.cpp"
#include "calculadora.cpp"
#include "area y perimetro.cpp"
#include "registro_alumnos.cpp"
#include "temperaturas.cpp"

#include <iostream>
#include <string.h>

using namespace std;

int main() {

    int num1, num2, ne, opc;
    float num3;
    string num4;
    
    Operacion op;
    Si_par si_no;
    Palabra_pol pal;
    Conversiones con;
    Ara_rom ara;
    Num_let conver;
    Con_dec numedec;
	Tabla_mul num_mul;
    CajeroAutomatico cajero(0);
    TrianguloRectangulo triangulo(0, 0);
    Calculadora calc;
    Rectangulo rect(0, 0);
    Alumno alumno("", 0, "");
    ConversorTemperatura conversor;

    while (true) {
        cout << "\n--------------------- MENU ----------------\n" << endl;

        cout << "1. Suma, Resta, Multiplicacion y Division de dos numeros." << endl;
        cout << "2. Determinar si un numero es par o impar." << endl;
        cout << "3. Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa." << endl;
        cout << "4. Determinar si una palabra o un numero es palindromo." << endl;
        cout << "5. Conversion de numeros arabigos a romanos (minimo 1,000)." << endl;
        cout << "6. Conversion de numeros enteros a letras." << endl;
        cout << "7. Conversion de numeros enteros con decimal a letras." << endl;
        cout << "8. Tabla de Multiplicar de n Numeros." << endl;
        cout << "9. Tabla de Multiplicar del 1 al 10 Numeros" << endl;
        cout << "10. " << endl;
        cout << "11. " << endl;
        cout << "12. " << endl;
        cout << "13. " << endl;
        cout << "14. " << endl;
        cout << "15. Cajero Automatico" << endl;
        cout << "16. Calcular Hipotenusa" << endl;
        cout << "17. Calculadora" << endl;
        cout << "18. Calcular Area y Perimetro de un Rectangulo" << endl;
        cout << "19. Registro de Alumnos" << endl;
        cout << "20. Conversor de Temperatura" << endl;
        cout << "21. Salir\n\n";

        cout << "    Seleccione una Opcion: ";
        cin >> opc;
        
        
/*		Inicializacion DE LA PARTE DE LOS 9 PROGRAMAS HECHOS POR 
		ROBIN DANIEL RODRIGUEZ GERONIMO 7691-23-3006
		Cada programa implementado en el switch fue hecho por
		ROBIN RODRIGUEZ	los problemas fueron repartidos de forma
		Equivalente sin envargo son las 9 y 30 y aun hay una parte de
		un integrante que no cumplio y no podemos esperar a que 
		sea media noche para entregarlo, se dio aviso correspondiente sobre 
	 	estre proyecto para lo cual no hay excusa	
*/

        switch (opc) {
            case 1:
    
                system("cls");
                cout << "\tOperaciones Matematicas" << endl;
                cout << "\nDigite un numero: ";
                cin >> num1;
                cout << "\nDigite otro numero: ";
                cin >> num2;

                op = Operacion(num1, num2);
                op.sumar();
                op.restar();
                op.multiplicar();
                op.dividir();
                cout << endl;
                system("pause");
                system("cls");
                break;

            case 2:
                system("cls");
                cout << "\tNumero par o impar" << endl;
                cout << "\nDigite un numero: ";
                cin >> num1;

                si_no = Si_par(num1);
                si_no.determinar();
                cout << endl;
                system("pause");
                system("cls");
                break;

            case 3:
                system("cls");
                con.menu();
                cout << "\nSeleccione una opcion: ";
                cin >> ne;
                cout << "\nDigite un numero: ";
                cin >> num3;

                if (ne == 1) {
                    con = Conversiones(num3);
                    con.conversion1();
                } else if (ne == 2) {
                    con = Conversiones(num3);
                    con.conversion2();
                } else if (ne == 3) {
                    con = Conversiones(num3);
                    con.conversion3();
                } else if (ne == 4) {
                    con = Conversiones(num3);
                    con.conversion4();
                } else if (ne == 5) {
                    con = Conversiones(num3);
                    con.conversion5();
                } else if (ne == 6) {
                    con = Conversiones(num3);
                    con.conversion6();
                }
                cout << endl;
                system("pause");
                system("cls");
                break;

            case 4:
            	system("cls");
            	cout<<"Palabra Polindroma\n";
            	cout<<"\nDigite una palabra o numero: ";
            	cin>>num4;
            	pal = Palabra_pol(num4);
            	pal.determinar();
                system("pause");
                system("cls");
                break;

            case 5:
            	system("cls");
            	cout<<"Conversion de numeros Arabigos a Romanos\n";
            	cout << "\nIngresa un numero entre [1-3999] para convertirlo a romano: ";
				cin >> num1;
				ara = Ara_rom(num1);
				ara.determinar();
                system("pause");
                system("cls");
                break;

            case 6:
            	system("cls");
            	cout<<"Convertir numeros a letras\n";
            	cout<<"\nIngrese un numero en un rango de 1 a 999: ";
            	cin>>num1;
            	conver = Num_let(num1);
            	conver.convertir();
                system("pause");
                system("cls");
                break;

            case 7:
            	system("cls");
            	cout<<"Convertir numeros decimales a letras\n";
			    cout<<"Ingrese un numero decimal: ";
            	double numero;
			    cin >> numero;
            	numedec = Con_dec(numero);
            	numedec.Conve();
                system("pause");
                system("cls");
                break;
//	FINALIZACION DE LA PARTE DE LOS 7 PROGRAMAS HECHOS POR 
//	ROBIN DANIEL RODRIGUEZ GERONIMO 7691-23-3006

            case 8:
                system("cls");
            	cout<<"Tabla de multiplicar de n numeros\n";
			    cout<<"Ingrese un numero de la tabla de multiplicar: ";
			    cin >> num1;
            	num_mul = Tabla_mul(num1);
            	num_mul.mostrar();
                system("pause");
                system("cls");
                break;

            case 9:
                system("cls");
            	cout<<"Tabla de multiplicar del 1 al 10.\n";
            	num_mul = Tabla_mul(num1);
            	num_mul.todas_las_tablas();
                system("pause");
                system("cls");
                break;

/*	FINALIZACION DE LA PARTE DE LOS 9 PROGRAMAS HECHOS POR 
	ROBIN DANIEL RODRIGUEZ GERONIMO 7691-23-3006
	Cada programa implementado en el switch fue hecho por
	ROBIN RODRIGUEZ	los problemas fueron repartidos de forma
	Equivalente sin envargo son las 9 y 30 y aun hay una parte de
	un integrante que no cumplio y no podemos esperar a que 
	sea media noche para entregarlo, se dio aviso correspondiente sobre 
 	estre proyecto para lo cual no hay excusa	*/

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
//parte realiaza por Rodrigo Zavala desde el 15 al 20
            case 15:
                {
                    system("pause");
                    system("cls");
                    // Implementación para la opción 15 (Cajero Automático)
                    cout << "\tCajero Automático" << endl;
                    cout << "Ingrese el saldo inicial: ";
                    cin >> num1;
                    cajero = CajeroAutomatico(num1);

                    char opcion;
                    do {
                        system("cls");
                        cout << "Seleccione una opción:" << endl;
                        cout << "1. Verificar saldo" << endl;
                        cout << "2. Depositar" << endl;
                        cout << "3. Retirar" << endl;
                        cout << "4. Salir" << endl;
                        cout << "Opción: ";
                        cin >> opcion;

                        switch (opcion) {
                            case '1':
                                system("cls");
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
					
					system("pause");
					system("cls");
                    break;
                }
//parte realiaza por Rodrigo Zavala desde el 15 al 20
            case 16:
                {
                    system("pause");
                    system("cls");
                    // Implementación para la opción 16 (Calcular Hipotenusa)
                    cout << "\tCalcular Hipotenusa" << endl;
                    double cateto1, cateto2;

                    cout << "Ingrese la longitud del primer cateto: ";
                    cin >> cateto1;

                    cout << "Ingrese la longitud del segundo cateto: ";
                    cin >> cateto2;

                    triangulo = TrianguloRectangulo(cateto1, cateto2);

                    double hipotenusa = triangulo.calcularHipotenusa();

                    cout << "La longitud de la hipotenusa es: " << hipotenusa << endl;
					
					system("pause");
					system("cls");
                    break;
                }
//parte realiaza por Rodrigo Zavala desde el 15 al 20
            case 17:
                {
                    system("pause");
                    system("cls");
                    // Implementación para la opción 17 (Calculadora)
                    cout << "\tCalculadora" << endl;
                    double num1, num2;

                    cout << "Ingrese el primer número: ";
                    cin >> num1;

                    cout << "Ingrese el segundo número: ";
                    cin >> num2;

                    cout << "Suma: " << calc.sumar(num1, num2) << endl;
                    cout << "Resta: " << calc.restar(num1, num2) << endl;
                    cout << "Multiplicación: " << calc.multiplicar(num1, num2) << endl;
                    cout << "División: " << calc.dividir(num1, num2) << endl;
					system("pause");
					system("cls");
                    break;
                }
//parte realiaza por Rodrigo Zavala desde el 15 al 20
            case 18:
                {
                    system("pause");
                    system("cls");
                    // Implementación para la opción 18 (Calcular Área y Perímetro de un Rectángulo)
                    cout << "\tCalcular Área y Perímetro de un Rectángulo" << endl;
                    double longitud, ancho;
                    cout << "Ingrese la longitud del rectángulo: ";
                    cin >> longitud;
                    cout << "Ingrese el ancho del rectángulo: ";
                    cin >> ancho;

                    rect = Rectangulo(longitud, ancho);

                    cout << "El área del rectángulo es: " << rect.calcularArea() << endl;
                    cout << "El perímetro del rectángulo es: " << rect.calcularPerimetro() << endl;
					
					system("pause");
					system("cls");
                    break;
                }
//parte realiaza por Rodrigo Zavala desde el 15 al 20
            case 19:
                {
                    system("pause");
                    system("cls");
                    // Implementación para la opción 19 (Registro de Alumnos)
                    cout << "\tRegistro de Alumnos" << endl;
                    vector<Alumno> clase;

                    int numAlumnos;
                    cout << "Ingrese el número de alumnos: ";
                    cin >> numAlumnos;

                    cin.ignore(); // Limpiar el buffer de entrada

                    for (int i = 0; i < numAlumnos; ++i) {
                        system("cls"); // Limpiar la pantalla antes de pedir los datos del alumno
                        string nombreCompleto, curso;
                        int edad;

                        cout << "Ingrese el nombre completo del alumno " << i + 1 << ": ";
                        getline(cin, nombreCompleto);

                        cout << "Ingrese la edad del alumno " << i + 1 << ": ";
                        cin >> edad;

                        cout << "Ingrese el curso del alumno " << i + 1 << ": ";
                        cin >> curso;

                        clase.push_back(Alumno(nombreCompleto, edad, curso));

                        cin.ignore(); // Limpiar el buffer de entrada
                    }

                    system("cls"); // Limpiar la pantalla antes de mostrar la información de los alumnos

                    cout << "Información de los alumnos:" << endl;
                    for (vector<Alumno>::const_iterator it = clase.begin(); it != clase.end(); ++it) {
                        it->mostrarInformacion();
                        cout << endl;
                    }
					system("pause");
					system("cls");
                    break;
                }
//parte realiaza por Rodrigo Zavala desde el 15 al 20
            case 20:
                {
                    system("pause");
                    system("cls");
                    // Implementación para la opción 20 (Conversor de Temperatura)
                    cout << "\tConversor de Temperatura" << endl;
                    double tempCelsius;

                    cout << "Ingrese la temperatura en grados Celsius: ";
                    cin >> tempCelsius;

                    cout << "Temperatura en grados Celsius: " << tempCelsius << endl;
                    cout << "Temperatura en grados Fahrenheit: " << conversor.celsiusToFahrenheit(tempCelsius) << endl;
                    cout << "Temperatura en grados Kelvin: " << conversor.celsiusToKelvin(tempCelsius) << endl;
					system("pause");
					system("cls");
                    break;
                }

            case 21:
                return 0;

            default:
                system("cls");
                cout << "Opcion no valida..." << endl;
                system("pause");
                system("cls");
                break;
        }
    }
    return 0;
}

