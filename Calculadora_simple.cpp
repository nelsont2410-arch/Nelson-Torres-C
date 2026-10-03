#include <iostream>
using namespace std;
int main() {
    double num1, num2;
    char operacion;
    cout << "Ingrese el primer numero: \n";
    cin >> num1;
    cout << "Ingrese el segundo numero: \n";
    cin >> num2;
    cout << "Ingrese la operacion (+, -, *, /): \n";
    cin >> operacion;
    double resultado;
    switch (operacion) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            resultado = num1 / num2;
            break;
        default:
            cout << "Operacion no valida." << endl;
            return 1;
    }
    cout << "El resultado es: " << resultado << endl;

    return 0;
}