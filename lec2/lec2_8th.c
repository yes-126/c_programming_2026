#include <stdio.h>

int main() {
    int var_floor = 3; //층 수를 입력합니다.
    int var_ho = 4; //호 수를 제공합니다.

    if (var_floor % 2 == 0) {
        if (var_ho % 2 != 0) {
            printf("Use ev1.\n");
        } else {
            printf("Use ev2.\n");
        }
    } else {
        if (var_ho % 2 != 0) {
            printf("Use ev3.\n");
        } else {
            printf("Use ev4.\n");
        }
    }

    // 층 수가 홀수이고, 호 수가 홀수이면, ev1을 사용합니다.
    // 층 수가 홀수이고, 호 수가 짝수이면, ev2를 사용합니다.
    // 층 수가 짝수이고, 호 수가 홀수이면, ev3을 사용합니다.
    // 층 수가 짝수이고, 호 수가 짝수이면, ev4를 사용합니다.
    // 뭐가 꼬였다 ppt랑 다르넹

    return 0;
}