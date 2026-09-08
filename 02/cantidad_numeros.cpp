#include <iostream>
using namespace std;
int main(){
    int numero;
    
    cout << "Ingrese hasta que numero desea contar: ";
    cin >> numero;
 
    for(int i = 1; i <= numero; i++)
    {
        cout << i << endl;
    }

    return 0;

}
