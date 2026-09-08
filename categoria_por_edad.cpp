#include <iostream>
using namespace std;

int main(){

    int edad;
    int menor;
    int cadete;
    int juvenil;
    int mayor;

    cout << "Ingrese la edad: ";
    cin >> edad;

    if(edad <= 12)
    {
      cout << "menor" << menor << endl;
    }
    else if(edad >= 13 && edad <= 18)
    {
      cout << "cadete" << cadete << endl;
    }
    else if(edad >= 19 && edad <= 26)
    {
      cout << "juvenil" << juvenil << endl;
    }
    else 
    {
        cout << "mayor" << mayor << endl;
    }

    return 0;
}