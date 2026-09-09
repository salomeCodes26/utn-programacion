#include <iostream>
#include <string>
using namespace std;

int main(){

    string palabra;

      cout << "Ingrese una palabra: ";
      cin >> palabra;

      while (palabra == "hola")
      {
        cout << "hola!" << endl;
        cout << "Ingrese una palabra: ";
        cin >> palabra;
      }
      cout << "Adios!" << endl;

    return 0;
}
