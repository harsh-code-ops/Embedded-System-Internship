#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct Data {
    unsigned int small : 3;  // only 3 bits: can store 0 to 7
};

int main() {
    struct Data d;
    int input;

    srand(time(NULL)); // set random seed

    for (int i = 0; i < 5; i++) {
        input = rand() % 20; // random number from 0 to 19
        d.small = input;

        printf("Input value: %d\n", input);
        printf("Stored value: %d\n", d.small);

        if (d.small != input) {
            printf("Overflow happened!\n");
        } else {
            printf("Stored correctly.\n");
        }

        printf("\n");
    }

    return 0;
}
