#include <iostream>
using namespace std;

int main()
{
    float sueldoNeto;
    float sueldoFinal;
    float salarioFamiliar;
    float antiguedad;

    int hijos;
    int aniosTrabajados;

    cout << "Ingrese el sueldo neto: ";
    cin >> sueldoNeto;

    cout << "Ingrese la cantidad de hijos: ";
    cin >> hijos;

    cout << "Ingrese los anios trabajados: ";
    cin >> aniosTrabajados;
    
    salarioFamiliar = hijos * 30000;
    antiguedad = aniosTrabajados * 22000;

    sueldoFinal = sueldoNeto + salarioFamiliar + antiguedad;

    cout << "El sueldo mensual es: " << sueldoFinal << endl;

    return 0;
}
