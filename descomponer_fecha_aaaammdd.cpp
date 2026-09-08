#include <iostream>
using namespace std;

int main()
{
    int fecha;
    int anio;
    int mes;
    int dia;

    cout << "Ingrese la fecha en formato AAAAMMDD: ";
    cin >> fecha;

    anio = fecha / 10000;
    mes = (fecha % 10000) / 100;
    dia = fecha % 100;

    cout << "Anio: " << anio << endl;
    cout << "Mes: " << mes << endl;
    cout << "Dia: " << dia << endl;

    return 0;
}