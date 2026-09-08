#include <iostream>
using namespace std;

int main()
{
    float horas;
    float milisegundos;

    cout << " Ingrese la cantidad de horas: ";
    cin << horas;

    milisegundos = horas * 3600000;

    cout << "La cantidad de milisegundos es: " << milisegundos << endl;

    return 0;
}