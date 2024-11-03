//Double suma y mult//
#include <iostream>
using namespace std;

int main() {
    double num = 0.0;
    double suma = 0.0;
    double mult = 1.0;

    cout << "Ingrese un numero diferente a 0: " << endl;
    cin >> num;

    while (num != 0) {
        suma = suma + num;
        mult = mult * num;
        cout << "Tu numero es: " << num << endl;
        cout << "La suma de los numeros es: " << suma << endl;
        cout << "La multiplicacion de los numeros es: " << mult << endl;
        cout << "Ingrese un numero diferente a 0: " << endl;
        cin >> num;
    }
}