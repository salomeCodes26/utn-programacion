#include <iostream>
using namespace std;

int main(){

    int numero;
    int primero;
    int segundo;
    int penultimo;
    int ultimo;

    cout << "Ingrese un numero: ";
    cin >> numero;

    primero = numero / 10000;
    ultimo = numero % 10;

    segundo = (numero / 1000) % 10;
    penultimo = (numero / 10 ) % 10;

    if(primero == ultimo && segundo == penultimo)
    {
        cout << "Es capicua" << endl;
    }
    else {
        cout <<"No es capicua" << endl;
    }

    return 0;
}
