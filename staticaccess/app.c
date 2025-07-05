// app.c

#include <stdio.h>

// Static global variable
static int count = 42;

// Getter function (visible to other files)
int getCount() {
    return count;
}

// Setter function (optional)
void setCount(int newValue) {
    count = newValue;
}
