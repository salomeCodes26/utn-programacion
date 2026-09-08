#include <iostream>
using namespace std;

int main(){
    int secreto = 25;
    int numero;
    int intentos = 0;

    cout << "Adivine el numero (1 a 50): ";
    cin >> numero;

    while(numero != secreto)
{
    intentos++;
    if(numero < secreto)
{
    cout << "El numero es mayor " << endl;
}
else
{
    cout << "El numero es mejor " << endl;
}

    cout << "Intente nuevamente: ";
    cin >> numero;
}

intentos++;

cout << "Acertaste!" << endl;
cout << "Cantidad de intentos: " << intentos << endl;

return 0;

}
