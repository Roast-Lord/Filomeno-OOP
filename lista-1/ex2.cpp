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

int main(){
    int const totalVogals = 10;
    string vogals[totalVogals] = {"a", "e", "i", "o", "u", "A", "E", "I", "O", "U"};
    string input;

    cout << "Insira uma letra do alfabeto: " << endl;
    do
    {   
        cin >> input;

        if (input.length() > 1){
            cout << "Insira apenas um caractere! " << endl;
        }

        if (isNumber(input) == true){
            cout << "Insira Apenas letras! " << endl;
        }

    } while ((!(isNumber(input)) && !(input.length() > 1)) == false);
    
    for (int i = 0; i < totalVogals; i++){

        if (vogals[i] == input){

            cout << "A letra inserida é uma vogal! " << endl;
            return 0;
        }
    }

    cout << "A letra inserida não é uma vogal! " << endl;

    return 0;
}