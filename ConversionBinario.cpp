//parte realizada por Rodrigo Zavala
#include <iostream>
#include <stack>

using namespace std;

// Funci�n para convertir decimal a binario
void decimalToBinary(int num) {
    stack<int> binaryStack;
    
    // Convertir a binario
    while (num > 0) {
        int rem = num % 2;
        binaryStack.push(rem);
        num /= 2;
    }
    
    // Imprimir el n�mero binario
    cout << "El n�mero binario es: ";
    while (!binaryStack.empty()) {
        cout << binaryStack.top();
        binaryStack.pop();
    }
    cout << endl;
}

int main_Binarios() {
    int num;
    cout << "Introduce un n�mero decimal: ";
    cin >> num;
    
    decimalToBinary(num);
    
    return 0;
}

