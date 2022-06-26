#include <iostream>
#include <string>
using namespace std;



int main(){

    int n = 5;
    int soma = 0;

    for (int i = 1; i <= n; i++){

        for (int j = 1; j <= i; j++){

            cout << j;

            if ( (i == 1) || (j == i)){

                cout << "";
            } else {
                cout << "+";
            }
        }

        soma += i;

        cout << "=" << soma << endl;
    }

    return 0;
}