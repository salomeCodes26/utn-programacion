#include <iostream>
using namespace std;

int main(){
    int lado1;
    int lado2;
    int lado3;

    cout <<"Ingrese lado1: ";
    cin >> lado1;

    cout << "Ingrese lado2: ";
    cin >> lado2;

    cout << "Ingrese lado3: ";
    cin >> lado3;

    if(lado1 > lado2 && lado1 > lado3)
    {
     if (lado1 * lado1 == (lado2 * lado2) + (lado3 * lado3))
    {
     cout << "Es un triangulo rectangulo" << endl;
    }
     else 
    {
      cout <<"No es un triangulo rectangulo" << endl;
    }
    }
    else if(lado2 > lado1 && lado2 > lado3)
    {
      if(lado2 * lado2 == (lado1 * lado1)+(lado3 * lado3))
    { 
        cout << "Es un triangulo rectangulo" << endl;
    }
    }
    else 
    {
        cout << "No es un triangulo rectangulo" << endl;
    }
    {
        if(lado3 * lado3 == (lado1 * lado1) + (lado2 * lado2))  
    {
      cout << "Es un triangulo rectangulo" << endl;
    }
    else 
    {
        cout << "No es un triangulo rectangulo" << endl;
    }
    }
    return 0;
}