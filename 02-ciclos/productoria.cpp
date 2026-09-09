#include <iostream>
using namespace std;

int main()
{
    int numero;
    int producto = 1;

    cout << "Ingrese un numero (0 para salir): ";
    cin >> numero;
 
    while(numero != 0)
    {
        producto = producto * numero;

        cout << "Ingrese un numero (0 para salir): ";
        cin >> numero;
    }

    cout << "La productoria es: " << producto << endl;

return 0;

}
