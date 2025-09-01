#include <iostream>
using namespace std;



int main () {
    int a, b;

    cout << "Enter value a: " << endl;
    cin >> a;
    cout << "Enter value b: " << endl;
    cin >> b;
    double c = a + b; // type casting (int)b
    cout << "Sum: " << c << endl;
    return 0;
}