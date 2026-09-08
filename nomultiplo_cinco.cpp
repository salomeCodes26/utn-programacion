#include <iostream>
using namespace std;

int main(){

    int i = 1;

    while(i <= 30)
    {
        if(i % 5 != 0)
        {
            cout << i << endl;
        }

        i++;

    }
    
    return 0;
}