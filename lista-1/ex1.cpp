#include <iostream>
#include <strings.h>
using namespace std;

int main (){

    string input;

    cout << "Insira um caractere: " << endl;

    do
    {
        cin >> input;

        if (input.length() > 1){
            cout << "Insira apenas UM caractere." << endl;
        };

    } while (input.length() > 1);

    cout << "Seu caractere em ASCII é: "<< int(input[0]) << endl;

    return 0;
}