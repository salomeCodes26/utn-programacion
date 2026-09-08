#include <iostream>
using namespace std;

int main(){
    float nota1;
    float nota2;
    float nota3;
    float promedio;

    cout << "Ingrese la primera nota: ";
    cin >> nota1;

    cout << "Ingrese la segunda nota: ";
    cin >> nota2;

    cout << "Ingrese la tercer nota: ";
    cin >> nota3;

    promedio = (nota1 + nota2 + nota3) /3;

    cout << "El promedio es: " << promedio << endl;

    if(promedio < 4)
    {
        cout << "Insuficiente" << endl;
    }
    else if(promedio < 6)
    {
        cout << "Regular " << endl;
    }
    else if(promedio < 8)
    {
        cout << "Bien" << endl;
    }
    else if(promedio < 9)
    {
        cout << "Muy bien" << endl;
    }
    else
    {
      cout << "Muy sobresaliente" << endl;
    }
 
    return 0;
}
