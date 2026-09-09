#include <iostream>
using namespace std;
int main(){
    int numero;
    int suma = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    for(int i = 1; i <= numero; i++)
    {
        suma = suma + i;
    }

    cout << "La suma es: " << suma << endl;

    return 0;
}
