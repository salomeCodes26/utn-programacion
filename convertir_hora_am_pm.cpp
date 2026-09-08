#include <iostream> 
using namespace std;

int main()
{
int hora;
int horas;
int minutos;

cout << "Ingrese la hora en formato 24 hs: ";
cin >> hora ;

horas = hora / 100;
minutos = hora % 100; 

if(horas >=12)
{
    if(horas > 12)
    {
        horas = horas - 12;
    }
    cout << horas << ":" << minutos << "PM" << endl;
}
else
{
    cout << horas << ":" << minutos << "AM" << endl;
}
return 0;
}