#include <stdio.h>

int main() {
    int a = 2;
    printf("a: %d\n", ~a); // ~는 비트 NOT 연산자, a의 모든 비트를 반전시킴. 예를 들어, a가 2(0000 0010)라면 ~a는 -3(1111 1101)이 됩니다.

    return 0;
}