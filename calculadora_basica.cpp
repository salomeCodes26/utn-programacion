#include <iostream>
using namespace std;

int main()
{
  float numero1;
  float numero2;
  int opcion;

  cout << "Ingrese primer numero: ";
  cin >> numero1;

  cout << "Ingrese segundo numero: ";
  cin >> numero2;

  cout << "1 - suma" << endl;
  cout << "2 - resta" << endl;
  cout << "3 - multiplicacion" << endl;
  cout << "4 - division" << endl;

  cout << "Ingrese una opcion: ";
  cout >> opcion;

  swich (opcion)
  {
    case1:
      cout << "Resultado: " << numero1 + numero2 << endl;
      break;

    case 2:
      cout << "Resultado: " << numero1 - numero2 << endl;
      break;

    case 3:
      cout << "Resultado: " << numero1 * numero2 << endl;
      break;

    case 4:
      cout << "Resultado: " << numero1 / numero2 <<n endl;
      break;

    default:
      cout << "Opcion no valida" << endl;
  }

return 0;
}