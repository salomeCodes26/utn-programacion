#include <iostream>
using namespace std;

int main()
{   
    float lado1;
    float lado2;
    float lado3;

    cout << "Ingrese el primer lado: ";
    cin >> lado1;

    cout << "Ingrese el segundo lado: ";
    cin >> lado2;

    cout << "Ingrese el tercer lado: ";
    cin >> lado3;

    if(lado1 + lado2 > lado3 &&
       lado1 + lado3 > lado2 &&
       lado2 + lado3 > lado1)
    {
    cout << "Forman triangulo" << endl;
    }     
    else 
    {
        cout << "No forman triangulo" << endl;
    }
    return 0;
}
