#include <iostream>
using namespace std;

int main () {

    int x;
    cout << "Enter a number: ";
    cin >> x;

    x += 10;
    cout << x << endl; // x = x +10;

    x -= 10; // x = x - 10;
    cout << x << endl;

    x *= 10; // x = x * 10;
    cout << x << endl;

    x /= 10; // x = x / 10;
    cout << x << endl;

    x %= 10; // x = x % 10;
    cout << x << endl;


    cout << 0 << endl;

return 0;
}