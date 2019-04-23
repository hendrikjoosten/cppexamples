/*

Int ("%d"): 32 Bit integer
Long ("%ld"): 64 bit integer
Char ("%c"): Character type
Float ("%f"): 32 bit real value
Double ("%lf"): 64 bit real value

*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.

    int integer;
    long longer;
    char charer;
    float floater;
    double doubler;

    cin >> integer >> longer >> charer >> floater >> doubler;

    printf("%d\n",integer);
    printf("%ld\n",longer);
    printf("%c\n",charer);
    printf("%f\n",floater);
    printf("%lf\n",doubler);

    return 0;
}

