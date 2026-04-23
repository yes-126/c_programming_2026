//크기 비교 함수
/*
* @brief Checks if 'a' is greater than 'b'.
*
* @param a - The first value to compare
* @param b - The second value to compare
* @return int - 1 if 'a'is greater than 'b', 0 otherwise*/

#include <stdio.h>

int isGreaterThan(int a, int b); //함수 선언

int main() {
    int a = 3;
    int b = 5;
    if (isGreaterThan(a, b)) {
        printf("%d is greater than %d\n", a, b);
    } else {
        printf("%d is smaller than or equal to %d\n", a, b);
    }

    return 0;
}

int isGreaterThan(int a, int b) { //함수 정의
    if (a > b) {
        return 1; // 'a'가 'b'보다 크면 1 반환
    } else {
        return 0; // 그렇지 않으면 0 반환
    }
}