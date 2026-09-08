#include <iostream>
using namespace std;

int main(){
    int anio;

    cout << "Ingrese un anio: ";
    cin >> anio;

    if(anio % 4 == 0)
    {
     if(anio % 100 == 0)
    {
    if(anio % 400 == 0)
     {
     cout << "Es bisiesto" << endl;
     }
    else 
     {
      cout << "No es bisiesto" << endl;
     }
    }
    else 
     {
      cout << "Es bisiesto" << endl;
     }
     }
     else 
       {
        cout << "No es bisiesto" << endl;
       }

return 0;
}
