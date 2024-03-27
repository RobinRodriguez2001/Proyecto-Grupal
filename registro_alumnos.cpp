#include <iostream>
#include <vector>
#include <cstdlib> // Para la función system()

using namespace std;

class Alumno {
private:
    string nombre;
    int edad;
    string curso;

public:
    Alumno(string n, int e, string c) : nombre(n), edad(e), curso(c) {}

    void mostrarInformacion() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Curso: " << curso << endl;
    }
};

int main_registro_alumnos() {
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

    return 0;
}

