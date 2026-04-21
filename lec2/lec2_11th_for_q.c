#include <stdio.h>

int main() {
    int sum = 0;

    for(int i = 1; i <= 20; i++) {
        if (i % 3 == 0) {
            // sum += i;
            sum = sum + i;
        }
        else if (i % 7 == 0) {
            sum = sum + i;
        }
    }

    printf("sum: %d\n", sum);

    return 0;
}

// 1에서 20까지 숫자 중 3의 배수와 7의 배수 숫자를 모두 합하면 얼마일까요?