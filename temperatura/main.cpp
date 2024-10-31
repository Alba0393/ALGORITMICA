#include <iostream>

using namespace std;

int main ()
{
    float celsius, fah;
    cout<<"grados celsius: ";
    cin>>celsius;

    fah=(celsius*9/5)+32;
    cout<<celsius<<"°C son"<<fah<<"°F"<<endl;

    return 0;

}
