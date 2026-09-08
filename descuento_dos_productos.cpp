#include <iostream>
using namespace std;

int main()
{
   float producto1;
   float producto2;
   float total;
   float descuento;

   cout << "Ingrese el precio del primer producto: ";
   cin >> producto1;

   cout << "Ingrese el precio del segundo producto: ";
   cin >> producto2;

   total = producto1 + producto2;

   if(total >= 10000)
   {
     if(producto1 < producto2)

     descuento = producto1 * 0.30;
   }
    else 
    {
     descuento = producto2 * 0.30;
    }

     total = total - descuento;

    cout << "Total a pagar es: " << total << endl;

    return 0;
}