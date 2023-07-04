//1) Diseñe el programa que calcule los valores de x para la ecuación cuadrática (Realizado en clases).


#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, x1, x2;

    cout << "Ingresa el valor de a: ";
    cin >> a;
    cout << "Ingresa el valor de b: ";
    cin >> b;
    cout << "Ingresa el valor de c: ";
    cin >> c;

    double discriminante = pow(b, 2) - 4 * a * c;

    if (discriminante < 0) {
        cout << "La ecuación no tiene soluciones reales." << endl;
    } else if (discriminante == 0) {
        x1 = x2 = -b / (2 * a);
        cout << "La solución única es x = " << x1 << endl;
    } else {
        x1 = (-b + sqrt(discriminante)) / (2 * a);
        x2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "Las dos soluciones son:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    return 0;
}