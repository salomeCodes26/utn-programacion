#include <iostream>
using namespace std;

int main()
{
    int numero;
    int quintaParte;
    int resto;
    int septimaParte;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    quintaParte = numero / 5;
    resto = numero % 5;
    septimaParte = quintaParte / 7;

    cout << "La quinta parte es: " << quintaParte << endl;
    cout << "El resto de la division por 5 es: " << resto << endl;
    cout << "La septima parte de la quinta parte es: " << septimaParte << endl;

    return 0;
}