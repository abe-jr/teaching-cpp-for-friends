#include <iostream>
using namespace std;

int main() {

    // type inferences
    auto a = 1;
    auto b = 1.2;
    auto c = false;

    // a = "text";

    cout << typeid(a).name() << endl
         << typeid(b).name() << endl
         << typeid(c).name() << endl;

    return 0;
}