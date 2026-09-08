#include <iostream>
using namespace std;
int main() 
{
  string nombre1;
  string nombre2;
  string nombre3;

  int edad1;
  int edad2;
  int edad3;

  cout << "Ingrese el nombre y edad de la persona 1: ";
  cin >> nombre1 >> edad1;

  cout << "Ingrese el nombre y edad de la persona 2: ";
  cin >> nombre2 >> edad2;

  cout << "Ingrese el nombre y edad de la persona 3: ";
  cin >> nombre3 >> edad3;

  if(edad1 > edad2 && edad1 > edad3)
  {
    cout << "La persona mayor es " << nombre1
    << " y tiene " << edad1 << " anios. " << endl;
  }
  else if(edad2 > edad1 && edad2 > edad3)
  {
    cout << "La persona mayor es " << nombre2
    << " y tiene " << edad2 << " anios. " << endl;
  }
  else 
  {
    cout << "La persona mayor es " << nombre3 
    << " y tiene " << edad3 << " anios. " << endl;
  }
  
    return 0;
}
