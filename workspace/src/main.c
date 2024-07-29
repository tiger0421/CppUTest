#include <stdio.h>
#include "add.h"
#include "sub.h"

int main(void) {
    int a = 5, b = 3;

    printf("Addition of %d and %d is %d\n", a, b, add(a, b));
    printf("Subtraction of %d and %d is %d\n", a, b, sub(a, b));

    return 0;
}

