#include <iostream>
using namespace std;
int main(){
    int num, password=123;
    do{
        cout << "Usuario: Admin" << endl << "Ingrese contrasena: " << endl;
        cin >> num;
        if(num != password){
            cout << "Contrasena incorrecta!" << endl;
        }
    } while(num != password);
    cout << "Contrasena correcta!" << endl;
    return 0;
}

