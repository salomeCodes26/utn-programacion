#include <iostream>
using namespace std;

int main(){
    int dia;
    int mes;
  
    cout <<"Ingrese el dia: ";
    cin >> dia;

    cout <<"Ingrese el mes: ";
    cin >> mes;

    if((mes == 3 && dia >= 21) || ( mes == 4 && dia <= 19)) 
    {
      cout << "Aries" << endl;
    }
    else if((mes == 4 && dia >= 20) || ( mes == 5 && dia <= 20))
    {
      cout << "Tauro" << endl;
    }
    else if((mes == 5 && dia >= 21) || ( mes == 6 && dia <= 20))
    {
      cout << "Geminis" << endl;
    }
    else if((mes == 6 && dia >= 21) || ( mes == 7 && dia <= 21))
    {
      cout << "Cancer" << endl;
    }
    else if((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22))
    {
      cout << "Leo" << endl;
    }
    else if((mes == 8 && dia >= 23) || (mes == 9 && dia <=22))
    {
      cout << "Virgo" << endl;
    }
    else if((mes == 9 && dia >= 23) || (mes == 10 && dia <=22))
    {
      cout << "Libra" << endl;
    }
    else if((mes == 10 && dia >= 23) || (mes == 11 && dia <=21))
    {
      cout << "Escorpio" << endl;
    }
    else if((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21))
    {
      cout << "Sagitario" << endl;
    }
    else if((mes == 12 && dia >= 22) || (mes == 1 && dia <=19))
    {
      cout << "Capricornio" << endl;
    }
    else if((mes == 1 && dia >= 20) || (mes == 2 && dia <=18))
    {
      cout << "Acuario" << endl;
    }
    else 
    {
      cout << "Piscis" << endl;
    }
 
return 0;
}