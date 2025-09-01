#include <iostream>
using namespace std;



int main () {
    int f = 1;
    int n;
    int i = 1;

    cout << "Enter N : ";
    cin >>  n;

    while(i <= n) {
        f *= i;
        cout << f << endl;
        i++;
    };

    cout << f << endl;
    return 0;
}