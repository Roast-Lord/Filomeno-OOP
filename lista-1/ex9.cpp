#include <iostream>
using namespace std;


int main (){

    int input;
    float temp;

    cout << "Digite 1 para converter fahrenheith para Celsius \n";
    cout << "Digite 2 para converter Celsius para Fahrenheit \n";

    do
    {
        cin >> input;

        if (input != 1 && input != 2){
            cout << "Digite um número entre 1 e 2! \n";
        }

    } while (input != 1 && input != 2);
    
    if (input == 1){

        cout << "Digite a temperatura em Fahrenheit: ";
        cin >> temp;
        cout << endl;
        cout << "Em Celsius é: " << ((temp - 32) * 5 / 9) << endl;
    }else{

        cout << "Digite a temperatura em Celsius: ";
        cin >> temp;
        cout << endl;
        cout << "Em Fahrenheit é: " << ((temp * 9 / 5) + 32) << endl;
    }

    return 0;
}