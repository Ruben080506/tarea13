// 10) Para pagar un determinado impuesto se debe ser mayor de 16 años y tener unos ingresos iguales o 
//superiores a 1000 dólares mensuales. Diseñe el algoritmo en c++ que pregunte al usuario su edad
// y sus ingresos mensuales y muestre por pantalla si el usuario tiene que pagar o no impuestos.

#include <iostream>
using namespace std;

int main() {
    int edad;
    float ingresos;
    
    cout << "Ingrese su edad: ";
    cin >> edad;
    
    cout << "Ingrese sus ingresos mensuales: ";
    cin >> ingresos;
    
    if (edad > 16 && ingresos >= 1000) {
        cout << "Debe pagar impuestos." << endl;
    } else {
        cout << "No debe pagar impuestos." << endl;
    }
    
    return 0;
}