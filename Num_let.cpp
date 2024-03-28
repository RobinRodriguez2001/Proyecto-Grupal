#include "Con_let.cpp"
#include <iostream>
using namespace std;

class Num_let : public Con_let {
public:
    // Constructores
    Num_let() : Con_let() {}

    Num_let(int nu) : Con_let(nu) {}

    // Métodos
    // Set (modificar)
    void setnu(int nu) {numero = nu; }
    

    // Get (mostrar)
    double getnu() { return numero; }

    // Método para convertir numeros a letras
    	string convertirUnidades(int num) {
	    	string unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
	    	return unidades[num];
		}
	
	// Función para convertir decenas a letras
		string convertirDecenas(int num) {
		    string decenas[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
		    return decenas[num];
		}
	
	// Función para convertir números del 11 al 19 a letras
		string convertirEspeciales(int num) {
		    string especiales[] = {"once", "doce", "trece", "catorce", "quince", "dieciseis", "diecisiete", "dieciocho", "diecinueve"};
		    return especiales[num - 11];
		}
	
	// Función para convertir números enteros a letras
	string convertirNumeroALetras(int num) {
	    if (num >= 1 && num <= 9) {
	        return convertirUnidades(num);
	    } else if (num >= 11 && num <= 19) {
	        return convertirEspeciales(num);
	    } else if (num >= 20 && num <= 99) {
	        int decena = num / 10;
	        int unidad = num % 10;
	        if (unidad == 0) {
	            return convertirDecenas(decena);
	        } else {
	            return convertirDecenas(decena) + " y " + convertirUnidades(unidad);
	        }
	    } else if (num == 100) {
	        return "cien";
	    } else if (num > 100 && num <= 999) {
	        int centena = num / 100;
	        int resto = num % 100;
	        if (resto == 0) {
	            return convertirUnidades(centena) + "cientos";
	        } else {
	            return convertirUnidades(centena) + "cientos " + convertirNumeroALetras(resto);
	        }
	    } else {
	        return "Numero fuera de rango.";
	    	}
		}
	
	void convertir() {
		
		if (numero > 0 && numero < 1000) {
	        cout << "El numero " << numero << " en letras es: " << convertirNumeroALetras(numero) << endl;
	    } else {
	        cout << "Numero fuera de rango." << endl;
	    }
		cout<<"\n";
	}
};
   
