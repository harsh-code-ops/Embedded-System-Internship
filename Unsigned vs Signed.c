#include <stdio.h>

int main() {
    signed int a = -10;
    unsigned int b = -10;  // Will be converted to a large positive number due to underflow

    printf("Signed int a = %d\n", a);
    printf("Unsigned int b = %u\n", b);

    if ((unsigned int)a < b) {
        printf("a is less than b\n");
    } else {
        printf("a is not less than b\n");
    }

    return 0;
}

