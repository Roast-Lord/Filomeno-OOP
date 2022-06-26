#include <iostream>
#include <string>
#include <regex>
using namespace std;


int interval ( int x, int y ){

    if( x > y ){

        for (int i = y; i <= x; i++){

            if ((i%2) == 0  ){
                cout << i << endl;
            }
        };
    } else {
        for (int i = x; i <= y; i++ ){

            if ((i%2) == 0  ){
                cout << i << endl;
            }
        };
    };

    return 0;
};


int main()
{

    int num1;
    int num2;

    cout << "Insira um número ";
    cin >> num1;
    cout << "Insira outro numero ";
    cin >> num2;

    interval(num1, num2);

    return 0;
}