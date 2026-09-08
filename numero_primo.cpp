#include <iostream>
using namespace std;

int main(){

    int numero;
    bool esPrimo = true;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if(numero <= 1)
    {
        esPrimo = false;
    }
    else 
    {
        int i = 2;

        while(i < numero)
        {
            if(numero % i == 0)
            {
                esPrimo = false;
            }
            i++;
         }
     }

    if(esPrimo)
    {
        cout << "Es primo" << endl;
    }
    else 
    {
        cout << "No es primo" << endl;
    }
    
  return 0;
}