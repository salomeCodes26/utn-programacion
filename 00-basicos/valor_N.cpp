#include <iostream>
using namespace std;

int main(){

    int N;
    int vector[25];

    cout << "Ingrese N: ";
    cin >> N;

    for(int i = 0; i < N; i++)
    { 
      vector[i] = (i + 1) * 2;
    }
    
    cout << "Contenido del vector: ";

    for (int i = 0; i < N; i++)
    {
        cout << vector[i] << " ";
    }

    return 0;

}
