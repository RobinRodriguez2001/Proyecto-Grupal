//parte realizada por Rodrigo Zavala
//funciona con las flechas del teclado
#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

const int SCREEN_WIDTH = 80;
const int SCREEN_HEIGHT = 24;

struct Point {
    int x;
    int y;
};

void clearScreen() {
    system("cls");
}

void drawPoint(Point p) {
    COORD coord;
    coord.X = p.x;
    coord.Y = p.y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    cout << "*";
}

int main_punto() {
    Point point = {SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2};

    while (true) {
        clearScreen();
        drawPoint(point);

        if (_kbhit()) {
            char key = _getch();
            switch (key) {
                case 72: // Up arrow
                    if (point.y > 0) point.y--;
                    break;
                case 80: // Down arrow
                    if (point.y < SCREEN_HEIGHT - 1) point.y++;
                    break;
                case 75: // Left arrow
                    if (point.x > 0) point.x--;
                    break;
                case 77: // Right arrow
                    if (point.x < SCREEN_WIDTH - 1) point.x++;
                    break;
                case 'q':
                    return 0;
            }
        }

        Sleep(100);
    }

    return 0;
}

