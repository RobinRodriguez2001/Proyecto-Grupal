#include "Palabra.cpp"
#include <iostream>
using namespace std;

class Palabra_pol : public Palabra_polindroma {
public:
    // Constructores
    Palabra_pol() : Palabra_polindroma() {}

    Palabra_pol(string pal_pol) : Palabra_polindroma(pal_pol) {}

    // Métodos
    // Set (modificar)
    void setpal_pol(string pal_pol) { palabra = pal_pol; }

    // Get (mostrar)
    string getpal_pol() { return palabra; }

    // Método para determinar si la palabra es palíndroma
    void determinar() {
        bool esPalindroma = true;
        for (int i = 0; i < palabra.length() / 2; i++) {
            if (palabra[i] != palabra[palabra.length() - 1 - i]) {
                esPalindroma = false;
                break;
            }
        }

        if (esPalindroma)
            cout << "\nLa palabra '" << palabra << "' es palindroma." << endl;
        else
            cout << "\nLa palabra '" << palabra << "' no es palindroma." << endl;
    }
};
   


