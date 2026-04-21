#include <stdio.h>

int main() {
    int a = 3;
    ++a; // a를 1 증가시킴
    printf("a: %d\n", a); // a의 값은 4
    printf("a: %d\n", ++a); // a의 값을 먼저 증가시키고 출력, 결과는 5
    printf("a: %d\n", a); // a의 값은 여전히 5

    a++; // a를 1 증가시킴
    printf("a: %d\n", a); // a의 값은 6
    printf("a: %d\n", a++); // a의 값을 먼저 출력하고 증가시키므로 결과는 6, 이후 a의 값은 7
    printf("a: %d\n", a); // a의 값은 7

    return 0;
}

// ++a는 전위 증가 연산자로, a의 값을 먼저 증가시키고 그 값을 사용합니다.
// a++는 후위 증가 연산자로, a의 값을 먼저 사용하고 그 후에 a의 값을 증가시킵니다.