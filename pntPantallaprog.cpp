#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <conio.h>
#include "Archivo_Principal.cpp"
using namespace std;

void ShowConsoleCursor(bool showFlag) {
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = showFlag;
    SetConsoleCursorInfo(out, &cursorInfo);
}

void puntoPantalla() {
    srand(time(nullptr));

    ShowConsoleCursor(false);

    while (!kbhit()) { 
        int x = rand() % 80;
        int y = rand() % 25;

        system("cls");

        COORD pos = { static_cast<SHORT>(x), static_cast<SHORT>(y) };
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

        cout << ".";

        Sleep(100);
    }


    ShowConsoleCursor(true);

    getch();
}

void pntPantallaprog() {
    char inicio, opcion;

    cout << endl << "***** BIENVENIDO AL PUNTO EN TODA LA PANTALLA *****" << endl << endl;
    cout << "     INSTRUCCIONES:" << endl;
    cout << "       - Presiona ENTER para iniciar el programa" << endl;
    cout << "       - Presiona CUALQUIER TECLA para detener el programa" << endl;
    cout << "       - Presiona S para salir del programa" << endl;	

    do {
        cin.ignore(1000, '\n');
        cin.get(inicio);
        system("cls");
        puntoPantalla();
        cout << "       - Presiona ENTER para iniciar el programa" << endl;
    	cout << "       - Presiona CUALQUIER TECLA para detener el programa" << endl;
    	cout << "       - Presiona S para salir del programa" << endl;	
        cin.get(opcion);
    } while (opcion != 'S' && opcion != 's');

    cout << "HASTA PRONTO :)" << endl;

    void Archivo_Principal();
}
