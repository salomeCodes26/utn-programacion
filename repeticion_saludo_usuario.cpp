#include <iostream>
using namespace std;
int main(){
    int cantidad;

    cout << "Ingrese cantidad de saludos: ";
    cin >> cantidad;

    for(int i = 1; i <= cantidad; i++)
    {
        cout << " Hola usuario" << endl;
    }

    return 0;

}