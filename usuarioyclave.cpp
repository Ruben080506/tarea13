//2) Diseñe el programa que lee un usuario y su clave. Si son correctos se permite el acceso al sistema, de lo contrario, se prohíbe el ingreso (Realizado en clases)..


#include <iostream>
#include <string>

using namespace std;

int main() {
    string usuario_correcto = "rubensinho";
    string clave_correcta = "1234";
    string usuario_ingresado, clave_ingresada;

    cout << "Ingresa tu usuario: ";
    cin >> usuario_ingresado;
    cout << "Ingresa tu clave: ";
    cin >> clave_ingresada;

    if (usuario_ingresado == usuario_correcto & clave_ingresada == clave_correcta) {
        cout << "Bienvenido al sistema, " << usuario_correcto << "!" << endl;
    } else {
        cout << "Usuario o clave incorrectos. Acceso denegado." << endl;
    }

    return 0;
}