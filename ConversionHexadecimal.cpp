//parte realizada por Rodrigo Zavala
#include <iostream>
#include <string>

using namespace std;

// Funci�n para convertir decimal a hexadecimal
string decimalToHexadecimal(int num) {
    string hex = "";
    string hexChars = "0123456789ABCDEF";

    // Convertir a hexadecimal
    while (num > 0) {
        int rem = num % 16;
        hex = hexChars[rem] + hex;
        num /= 16;
    }

    return hex;
}

int main_Hexadecimal() {
    int num;
    cout << "Introduce un n�mero decimal: ";
    cin >> num;

    // Verificar si el n�mero es negativo
    if (num < 0) {
        cout << "No se pueden convertir n�meros negativos a hexadecimal." << endl;
        return 1;
    }

    string hexadecimal = decimalToHexadecimal(num);

    cout << "El n�mero hexadecimal es: " << hexadecimal << endl;

    return 0;
}

