//Promedio 3 calificaciónes//
#include <iostream>
using namespace std;
int main(){
    float calificacion1, calificacion2, calificacion3, promedio;
    cout << "Ingrese su calificacion 1: " << endl;
    cin >> calificacion1;
    cout << "Ingrese su calificacion 2: " << endl;
    cin >> calificacion2;
    cout << "Ingrese su calificacion 3: " << endl;
    cin >> calificacion3;
    promedio = (calificacion1 + calificacion2 + calificacion3) / 3;
    if(promedio >= 7){
        cout << "Tu promedio es: "<< promedio << endl << "Aprobaste!!" << endl;
        }
        else{
            cout << "Tu promedio es: "<< promedio << endl << "Reprobaste" << endl;
        }
}
