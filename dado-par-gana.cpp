//8) Diseñe el programa que simule el lanzamiento de un dado. Si el dado muestra un valor PAR, entonces gana, caso contrario pierde (Investigue el uso de números aleatorios en C++).

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); //  generar números aleatorios
    
    int dado = rand() % 6 + 1; // generar número aleatorio entre 1 y 6
    
    cout << "El dado muestra: " << dado << endl;
    
    if (dado % 2 == 0) {
        cout << "¡Ganas! El número es par." << endl;
    } else {
        cout << "Pierdes. El número es impar." << endl;
    }
    
    return 0;
}