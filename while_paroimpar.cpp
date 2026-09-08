#include<iostream>
using namespace std;
int main(){
    int numero;

    cout << "Ingrese un numero (0 para salir): ";
    cin >> numero;

    while (numero != 0)
    {
        if (numero % 2 == 0)
        {
            cout << "Es par" << endl;
        }
        else 
        {
            cout << "Es impar" << endl;
        }
        cout << "Ingrese otro numero (0 para salir): ";
        cin >> numero;
    }
       
    cout << "Fin del programa" << endl;

    return 0;
}