#include <iostream>
#include <string.h>
using namespace std;

float sum (float a,float b){

    return a + b;
};

float subtract(float a, float b){

    return a - b;
};

float multiply (float a, float b){

    return a * b;
};

float divide (float a, float b){

    return a / b;
};

struct numbers {
    float first;
    float second;
} num;

numbers get2Digits(const string &str)
{

    bool split;
    string a, b = "";
    for (char const &c : str)
    {
        if (isdigit(c) == 0){
            split = true;
        }
        else
        {
            if (split == false){
                a += c;
            }else{
                b += c;
            }
        }
    }
    num.first = stof(a);
    num.second = stof(b);

    return num;
};

int checkOperation(string input){
    for (int i = 0; i < input.length(); i++)
    {
        if (string(1, input[i]) == "+")
        {
            return 1;
        }
        else if (string(1, input[i]) == "-")
        {
            return 2;
        }
        else if (string(1, input[i]) == "*")
        {
            return 3;
        }
        else if (string(1, input[i]) == "/")
        {
            return 4;
        }
    };

    cout << "Operador inválido!" << endl;
    return 0;
};

int main (){

    string input;
    bool exit;
    int operation;
    string r = "";

    
    do
    {
        cout << "Insira uma operação entre dois números: " << endl;
        cin >> input;
        operation = checkOperation(input);
        get2Digits(input);

        switch (operation)
        {
        case 1:
            cout << sum(num.first, num.second) << endl;
            break;

        case 2:
            cout << subtract(num.first, num.second) << endl;
            break;
        
        case 3:
            cout << multiply(num.first, num.second) << endl;
            break;
        
        case 4:
            cout << divide(num.first, num.second) << endl;
            break;
        default:
            cout << "Operador não existente! " << endl;
        };

        cout << "Fazer outra operação? (y/n)" << endl;
        cin >> r;
        if (r == "n" || r == "N"){
            exit = true;
        } else if ( r == "y" || r == "Y"){
            exit = false;
        }else{

            cout << "Responda com (y/n)!" << endl;
        }

    } while (exit == false);
    
    return 0;
};