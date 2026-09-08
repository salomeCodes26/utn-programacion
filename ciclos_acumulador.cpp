#include <iostream>
using namespace std;

int main(){

    int numero;

    int cantidadPares = 0;
    int cantidadImpares = 0;

    int sumaPares = 0;
    int sumaImpares = 0;

    cout << "Ingrese un numero(0 para salir): ",
    cin >> numero;

    while(numero != 0)
    {
        if(numero % 2 == 0)
        {
            cantidadPares++;
            sumaPares = sumaPares + numero;
        }
        else 
        {
            cantidadImpares++;
            sumaImpares = sumaImpares + numero;
        }
         
        cout << " Ingrese un numero(0 para salir): ";
        cin >> numero;

        cout << "Cantidad de pares: " << cantidadPares << endl;
        cout << "Cantidad de impares: " << cantidadImpares << endl;

        cout << "Suma de pares: " << sumaPares << endl;
        cout << "Suma de impares: " << sumaImpares << endl;

        return 0;

    }










}