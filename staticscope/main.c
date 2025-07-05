// main.c

#include <stdio.h>

// Trying to access pi directly
extern float pi;

int main()
{
    printf("Pi from main.c: %f\n", pi);
    return 0;
}
