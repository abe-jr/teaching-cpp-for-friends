#include <cstdio>
using namespace std;

int main () {
    int x = 2;
    int y = 1;

    x++; // postfix
    ++y; // prefix
    printf("%d %d", x, y);

    x--; // postfix
    --y; // prefix
    printf("%d %d", x, y);
    
return 0;
}