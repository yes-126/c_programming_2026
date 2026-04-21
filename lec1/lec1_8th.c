#include <stdio.h>

int main() {
    int b = 3;
    int a;

    a = b;
    printf("a: %d, b: %d\n", a, b);

    a += 2;
    printf("a: %d\n", a); // a에 2를 더한 결과를 a에 저장
    a -= 1;
    printf("a: %d\n", a); // a에서 1을 뺀 결과를 a에 저장
    a *= 4;
    printf("a: %d\n", a); // a에 4를 곱한 결과를 a에 저장
    a /= 3;
    printf("a: %d\n", a); // 정수 나눗셈이므로 소수점 이하는 버려짐
    a %= 2;
    printf("a: %d\n", a); // a를 2로 나눈 나머지를 a에 저장

    return 0;
}