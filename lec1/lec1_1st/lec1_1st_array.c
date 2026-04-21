#include <stdio.h>

int main() {
    char strc1[5] = "ab";
    printf("strc1 %%c: %c\n", strc1);
    printf("strc1 %%d: %d\n", strc1);
    printf("strc1 %%s: %s\n", strc1);
    printf("---------------\n");

    char strc2[5] = "abcde";
    printf("strc2 %%c: %c\n", strc2);
    printf("strc2 %%d: %d\n", strc2);
    printf("strc2 %%s: %s\n", strc2);
    printf("---------------\n");

    char strc3[5] = "abcdefgef";
    printf("strc3 %%c: %c\n", strc3);
    printf("strc3 %%d: %d\n", strc3);
    printf("strc3 %%s: %s\n", strc3);
    printf("---------------\n");


    return 0;
}