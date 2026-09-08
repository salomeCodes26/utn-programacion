#include <iostream>
using namespace std;

int main ()
{
    int A;
    int B;
    int suma;
    int resta;
    int producto;

    cout << "Ingrese el valor de A: ";
    cin >> A;

    cout << "Ingrese el valor de B: ";
    cin >> B;

    suma = A + B;
    resta = A - B;
    producto = A * B;

    cout << "La suma es: " << suma << endl;
    cout << "La resta es: " << resta << endl;
    cout << "El producto es: " << producto << endl;

    return 0;
}