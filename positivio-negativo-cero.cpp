//7) Diseñe el programa que determina si un número ingresado por teclado es positivo, o es negativo, o es cero(Realizado en clases).

#include <iostream>
using namespace std;

int main() {
    float numero;
    
    cout << "Ingrese un número: ";
    cin >> numero;
    
    if (numero > 0) {
        cout << "El número es positivo" << endl;
    } else if (numero < 0) {
        cout << "El número es negativo" << endl;
    } else {
        cout << "El número es cero" << endl;
    }
    
    return 0;
}