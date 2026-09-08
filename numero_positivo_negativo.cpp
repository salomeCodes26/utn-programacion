#include <iostream>
using namespace std;

int main()
{
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if(numero >= 0)
    { 
      cout << "El numero es POSITIVO" << endl;
    }
    else
    {
        cout << "El numero es NEGATIVO" << endl;
    }

return 0;

}