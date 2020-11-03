#include <iostream>
using namespace std;

int main () {
    
    int number;
    cout << "Check if it's a even number" << endl;
    cin >> number;

    if(number % 2 == 0) {
        cout << number << " is a even number." << endl;
    } else {
        cout << "Odd number." << endl;
    }
    
    return 0;

}
