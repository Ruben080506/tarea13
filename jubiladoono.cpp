//3) Diseñe el programa que lee el nombre completo de una persona y su edad. Si la edad es mayor a 65, entonces se trata de un jubilado (Realizado en clases).


#include <iostream>
#include <string>

using namespace std;

int main() {
    string nombreCompleto;
    int edad;

    cout << "Ingrese su nombre completo: ";
    getline(cin, nombreCompleto);

    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad > 65) {
        cout << nombreCompleto << " , estas jubilado/a." << endl;
    } else {
        cout << nombreCompleto << " , no estas jubilado/a." << endl;
    }

    return 0;
}