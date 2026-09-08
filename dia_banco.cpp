#include <iostream>
using namespace std;
int main()
{
   int dia;
   int hora;

   cout << "Ingrese dia (1=lunes, 2=martes, 3=miercoles, 4=jueves, 5=viernes, 6=sabado, 7=domingo): ";
   cin >> dia;

   cout << "Ingrese la hora: ";
   cin >> hora;

   if(dia >= 1 && dia <= 5 && hora >= 10 && hora < 15)
   {
    cout << "El banco esta abierto" << endl;
   }
   else 
   {
    cout << "El banco esta cerrado" << endl;
   }

    return 0;
    
}