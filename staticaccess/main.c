// main.c

#include <stdio.h>

// Declare the functions (not the variable)
int getCount();
void setCount(int);

int main() {
    printf("Initial count: %d\n", getCount());

    setCount(100);  // change value using setter

    printf("Updated count: %d\n", getCount());

    return 0;
}
