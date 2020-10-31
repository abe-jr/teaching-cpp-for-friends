#include <iostream>
using namespace std;

int main () {
    // binary and infix
    int x;
    int y; 

    cout << "Type a number: ";
    cin >> x;

    cout << "Type a second number: ";
    cin >> y;

    cout << "Result:" << endl;

    cout << x + y + 10 << endl;
    cout << x - y << endl;
    cout << x * y << endl;
    cout << x / y << endl;
    cout << x % y << endl;
    cout << x + y * 7 << endl;
    
return 0;
}