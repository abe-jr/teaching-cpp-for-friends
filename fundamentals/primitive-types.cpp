#include <iostream>
using namespace std;

int main() {

    // Bool 
    bool isAdmin = true; // true and false 1 and 0

    // Char for characters
    // char symbol = "#";
    // char symbol2("A");

    // datatype modifiers
    // singned using long short
    long age = 21;
    unsigned long height = 180;

    // float numbers
    float pi = 3.14; // 32 bits - single precision floating point type
    const double PI = 3.141592; // 64 bits - double precision floatind point type

    // datatype modifiers
    // singned using long short
    short int n1 = 1;
    long int n2 = 1;
    unsigned int n3 = 1;
    long long int n4 = 1;
    cout << n1 + n2 + n3 + n4 << endl;

    // size of types in bytes
    cout << sizeof(char) << " byte" << endl;
    cout << sizeof(wchar_t) << " bytes" << endl;
    cout << sizeof(char16_t) << " bytes" << endl;
    cout << sizeof(char32_t) << " bytes" << endl;
    cout << sizeof(int) << " bytes" << endl;
    cout << sizeof(long int) << " bytes" << endl;
    cout << sizeof(long long int) << " bytes" << endl;
    cout << sizeof(float) << " bytes" << endl;
    cout << sizeof(double) << " bytes" << endl;

    return 0;
}