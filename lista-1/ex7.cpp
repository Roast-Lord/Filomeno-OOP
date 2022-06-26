#include <iostream>
using namespace std;

int main(){

    int num = 5;

    for (int i = 1; i <= num;i++){

        for (int j = 0; j < (num - i); j++){

            cout << " ";
        };

        for (int k = 0; k < i; k++){

            cout << " " << i;
        };

        cout << endl;
    };

    return 0;
}