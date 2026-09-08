#include <iostream>
using namespace std;

int main(){

    int diaNacimiento;
    int mesNacimiento;
    int anioNacimiento;
    int anioActual;
    int edad;

    cout << "Ingrese el dia de nacimiento: ";
    cin >> diaNacimiento;

    cout << "Ingrese el mes de nacimiento: ";
    cin >> mesNacimiento;

    cout << "Ingrese el anio de nacimiento: ";
    cin >> anioNacimiento;

    cout << "Ingrese el anio actual: ";
    cin >> anioActual;

    edad = 2026 - anioNacimiento;

    if(mesNacimiento > 5)
    {
        edad = edad - 1;
    }
    else if(mesNacimiento == 5 && diaNacimiento > 30)
    {
        edad = edad - 1;
    }
    if(edad >=18)
    {
        cout << "Mayor de edad" << endl;
    }
    else 
    {
        cout << "Menor de edad" << endl;
    }

    return 0;

    }