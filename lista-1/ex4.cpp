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

    string n;
    int sum = 0;

    do
    {
        cout << "Insira um número: " << endl;
        cin >> n;
    } while (isNumber(n) == false);

    for (int i = 1; i <= stoi(n); i++)
    {
        sum += i * i;
    };

    cout << sum << endl;

    return 0;
}