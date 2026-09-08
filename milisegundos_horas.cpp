#include <iostream>
using namespace std;

int main()
{
    float milisegundos;
    float horas;

    cout << "Ingrese la cantidad de milisegundos: ";
    cin >> milisegundos;

    horas = milisegundos / 3600000;

    cout << "La cantidad de horas es: " << horas << endl;

    return 0;
}