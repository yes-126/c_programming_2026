#include <stdio.h>

int main() {
    int a = 2;
    printf("+a: %d\n", +a);
    printf("-a: %d\n", -a);

    int b = 3;
    printf("a + b: %d\n", a + b);
    printf("a - b: %d\n", a - b);
    printf("a * b: %d\n", a * b);
    printf("a / b: %d\n", a / b); // 0으로 나옴, %d 자체가 정수로 출력하고 a,b가 둘 다 정수형인 정수 나눗셈이기 때문

    float c = 2.1;
    float d = 10.0;
    int e = 10;
    printf("c / d: %f\n", c / d);
    printf("a / d: %f\n", a / d);
    printf("c / e: %f\n", c / e);
    printf("a / e: %d\n", a / e); // 22

    return 0;
}

//둘 중 하나라도 float으로 정의되어 있고 %f를 통해 출력한다면 제대로 소수점이 나옴