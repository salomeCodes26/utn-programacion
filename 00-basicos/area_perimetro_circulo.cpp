#include <iostream>
using namespace std;

int main ()
{
    float radio;
    float area;
    float perimetro;
    float pi = 3.1416;

    cout << "Ingrese el radio del circulo: ";
    cin >> radio;

    area = pi * radio * radio;
    perimetro = 2 * pi * radio;

    cout << "El area del circulo es: " << area << endl;
    cout << "El perimetro del circulo es:" << perimetro << endl;

    return 0;
}
