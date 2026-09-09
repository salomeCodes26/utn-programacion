#include <iostream>
using namespace std;

int main(){

     int N;

     cout << "Ingrese N (menor a 25): ";
     cin >> N;

     int vector[25];

     for (int i = 0;i < N; i++)
     {
        vector[i] = (i + 1) * 2;
     }

     cout << " Contenido del vector:" << endl;

     for (int i = 0; i < N; i++)
       {
          cout << vector[i] << " ";
       }

    return 0;
}
