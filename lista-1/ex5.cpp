#include <iostream>
#include <string>
using namespace std;


bool isNumber(const string& str)
{
    for (char const &c : str) {
        if (isdigit(c) == 0) return false;
    }
    return true;
}

int main (){

    string input;
    int maior = 0;

    cout << "Insira um número: " << endl;

    do
    {
        cin >> input;

        if (isNumber(input) == false){
            cout << "Insira apenas NÚMEROS:" << endl;
        };

    } while (isNumber(input) == false);

    for (int i = 0; i < input.length(); i++){

        if ((int(input[i]) - 48) > maior){

            maior = int(input[i]) - 48;

        };
    };

    cout << "O maior algarismo significativo é: " << maior << endl;
    return 0;
}
