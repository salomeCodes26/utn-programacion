#include <iostream>
using namespace std;

int main(){
    char sexo;
    int edad;
    int aportes;

    cout << "Ingrese el sexo (M para mujer, H para hombre): ";
    cin >> sexo;

    cout << "Ingrese su edad: ";
    cin >> edad;

    cout << "Ingrese los anios de aportes: ";
    cin >> aportes;

    if(sexo == 'M')
    {
        if(edad >= 60 && aportes >= 30)
    {
        cout << "Puede jubilarse" << endl;
    }
    else
    {
        cout << "No puede jubilarse" << endl;
    } 
    }
    else if (sexo == 'H')
    {
     if(edad >= 65 && aportes >= 30)
     {
        cout << "Puede jubilarse" << endl;
     }
     else 
       {
        cout << "No puede jubilarse" << endl;
       }
     }
    else 
    {
      cout << "Sexo invalido" << endl;
    }

    return 0;
    
    }