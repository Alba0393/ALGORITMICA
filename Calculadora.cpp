#include <iostream>
using namespace std;
int main(){
    float num1, num2;
    char operacion;
    cout << "Ingrese el primer valor: " << endl;
    cin >> num1;
    cout << "Ingrese el segundo valor: " << endl;
    cin >> num2;
    cout << "Ingrese el tipo de operacion que desea realizar:" << endl;
    cin >> operacion;
    if (operacion == '+'){
        cout << "El resultado de la suma es: " << num1 + num2 << endl;
    }
    else if (operacion == '-'){
        cout << "El resultado de la resta es: " << num1 - num2 << endl;
    }
    else if (operacion == '*'){
        cout << "El resultado de la multiplicacion es: " << num1 * num2 << endl;
    }
    else if (operacion == '/'){
        cout << "El resultado de la division es: " << num1 / num2 << endl;
    }
    else{
        cout << "Operacion no valida" << endl;
    }
}