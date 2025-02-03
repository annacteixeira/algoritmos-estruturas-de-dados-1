#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 10, y = 10;
    int z = 2;

    x = x + z;
    printf("x = %d\n", x);

    y += z;
    printf("y = %d\n", y); // y = y + z

    y -= z;
    printf("y = %d\n", y); // y = y - z

    x *= z; // x = x * z
    printf("x = %d\n", x);

    x /= z; // x = x / z
    printf("x = %d\n", x);

    x %= z; // x = x % z
    printf("x = %d\n", x);

    return 0;
}