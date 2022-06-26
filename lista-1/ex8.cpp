#include <iostream>
using namespace std;



int main (){

    int col = 10;
    int line = 20;
    int arr[20][10];
    int input;
    int k = 1;

    cout << "Insira um número: ";
    cin >> input;
    cout << endl;

    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < col;j++){

            arr[i][j] = input * (k);
            k++;
            cout << arr[i][j] << " ";
        }

        cout << endl;
        if (i == 2){
            break;
        }
    }

    return 0;
}