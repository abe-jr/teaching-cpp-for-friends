#include <iostream>
using namespace std;

int main() {

    string title = "Mr. ";
    string name = "John ";
    string end(10, '!');

    cout << name.size() << endl;
    cout << name.back() << endl;
    cout << name[2] << endl;
    cout << end << endl;


    // string concatenation
    cout << title + name << endl;
    cout << title << endl; 
    cout << end << endl;

    name += " Doe"; // name = name + " Doe";
    name.append(end);
    cout << name << end;

    return 0;
}