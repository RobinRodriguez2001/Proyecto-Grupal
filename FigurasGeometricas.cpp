//parte realizada por Rodrigo Zavala
#include <iostream>

using namespace std;

// Función para dibujar un triángulo
void drawTriangle(int height) {
    for (int i = 1; i <= height; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Función para dibujar un cuadrado
void drawSquare(int side) {
    for (int i = 0; i < side; ++i) {
        for (int j = 0; j < side; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Función para dibujar un rectángulo
void drawRectangle(int width, int height) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main_Geometrica () {
    int choice;
    cout << "Seleccione la figura geométrica: \n";
    cout << "1. Triangulo\n";
    cout << "2. Cuadrado\n";
    cout << "3. Rectángulo\n";
    cin >> choice;

    switch (choice) {
        case 1:
            int triangleHeight;
            cout << "Ingrese la altura del triángulo: ";
            cin >> triangleHeight;
            drawTriangle(triangleHeight);
            break;
        case 2:
            int squareSide;
            cout << "Ingrese el tamaño del lado del cuadrado: ";
            cin >> squareSide;
            drawSquare(squareSide);
            break;
        case 3:
            int rectangleWidth, rectangleHeight;
            cout << "Ingrese el ancho del rectángulo: ";
            cin >> rectangleWidth;
            cout << "Ingrese la altura del rectángulo: ";
            cin >> rectangleHeight;
            drawRectangle(rectangleWidth, rectangleHeight);
            break;
        default:
            cout << "Opción inválida.\n";
            break;
    }

    return 0;
}

