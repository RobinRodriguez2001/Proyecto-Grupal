#include <iostream>

using namespace std;

class ConversorTemperatura {
public:
    double celsiusToFahrenheit(double celsius) {
        return (celsius * 9 / 5) + 32;
    }

    double celsiusToKelvin(double celsius) {
        return celsius + 273.15;
    }
};

int main_temperaturas() {
    ConversorTemperatura conversor;

    double tempCelsius;

    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> tempCelsius;

    cout << "Temperatura en grados Celsius: " << tempCelsius << endl;
    cout << "Temperatura en grados Fahrenheit: " << conversor.celsiusToFahrenheit(tempCelsius) << endl;
    cout << "Temperatura en grados Kelvin: " << conversor.celsiusToKelvin(tempCelsius) << endl;

    return 0;
}

