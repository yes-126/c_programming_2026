#include <stdio.h>

int main() {
    int c = 128;
    printf("c %%d: %d\n", c);
    printf("c %%i: %i\n", c);
    printf("c %%c: %c\n", c);
    printf("c %%f: %f\n", c);
    printf("c %%e: %e\n", c);

    printf("--------\n");

    return 0;
    }