//6) Diseñe el programa que transforma una temperatura centígrada positiva en su equivalente Farenheit y Kelvin (Realizado en clases).

#include <iostream>

using namespace std;

int main() {
    float celsius, fahrenheit, kelvin;

    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9/5) + 32;
    kelvin = celsius + 273.15;

    cout << "La temperatura en grados Fahrenheit es: " << fahrenheit << endl;
    cout << "La temperatura en grados Kelvin es: " << kelvin << endl;

    return 0;
}
