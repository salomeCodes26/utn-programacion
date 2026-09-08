#include <iostream>
using namespace std;

int main()
{
    float lado;
    float perimetro;
    float area;

    cout << "Ingrese el lado del cuadrado: ";
    cin >> lado;

    perimetro = lado * 4;
    area = lado * lado;

    cout << "El perimetro es: " << perimetro << endl;
    cout << "El area es: " << area << endl;
     
    return 0;
}