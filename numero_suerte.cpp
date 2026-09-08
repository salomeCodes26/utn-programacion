#include <iostream>
using namespace std;

int main()
{
  int numero;

  cout << "Ingrese un numero: ";
  cin >> numero;

  if((numero > 0 && numero % 2 != 0 && numero % 3 == 0)
      || numero == 20
      || numero == 80)
  {
    cout << "Es un numero de la suerte" << endl;
  }
   else 
   {
    cout << "No es un numero de la suerte " << endl;
   }
    return 0;
    
}