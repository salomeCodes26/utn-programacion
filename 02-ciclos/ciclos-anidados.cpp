#include <iostream>
using namespace std;

int main(){
 
    int escalones;

    cout << "Ingrese la cantidad de escalones: ";
    cin >> escalones;

    int i = 1;

    while(i <= escalones)
      {
        int j = 1;

        while(j <= i)
        {
            cout << "#";
            j ++;
        }
        cout << endl;
        i ++;
       }
       
    return 0;
}
