//9) Diseñe el programa que simula el lanzamiento de dos dados. El usuario gana si la sumatoria de los dados es 11 o 7.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Semilla para generar números aleatorios
    
    int dado1 = rand() % 6 + 1; // Generar número aleatorio entre 1 y 6 para el primer dado
    int dado2 = rand() % 6 + 1; // Generar número aleatorio entre 1 y 6 para el segundo dado
    
    int suma = dado1 + dado2;
    
    cout << "Primer dado: " << dado1 << endl;
    cout << "Segundo dado: " << dado2 << endl;
    
    if (suma == 11 || suma == 7) {
        cout << "¡Ganas! La suma de los dados es " << suma << "." << endl;
    } else {
        cout << "Pierdes. La suma de los dados es " << suma << "." << endl;
    }
    
    return 0;
}