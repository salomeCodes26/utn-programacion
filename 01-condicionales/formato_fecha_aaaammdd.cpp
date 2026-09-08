#include <iostream>
using namespace std;

int main()
{
    int dia;
    int mes;
    int anio;
    int fecha;

    cout << "Ingrese el dia: ";
    cin >> dia;

    cout << "Ingrese el mes: ";
    cin >> mes;

    cout << "Ingrese el anio: ";
    cin >> anio;

    fecha = anio * 10000 + mes * 100 + dia;

    cout << "La fecha formada es: " << fecha << endl;

    return 0;
    
}
