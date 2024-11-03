#include <iostream>
using namespace std;

int main() {3
    string password;
    do {
        cout << "Ingrese contrasena: ";
        cin >> password;
        if (password != "x") {
            cout << "Contrasena incorrecta!" << endl;
        }
    } while (password != "x");
    cout << "Contrasena correcta!" << endl;
    return 0;
}
