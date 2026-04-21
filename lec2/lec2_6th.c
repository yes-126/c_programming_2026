#include <stdio.h>

int main() {
    int a = 2;
    if (a < 0) {
        printf("a is negative.\n");
    } else if (a < 10) {
        printf("a is less than 10.\n");
    } else if (a < 3) {
        printf("a is less than 3.\n");
    } else {
        printf("a is other.\n");
    }
    
    return 0;
}

//조건식이 참이 되는 순간 뒤에 구문 실행하고 끝! if문 종료
// 조건에 맞는 게 없다면 아무것도 실행되지 않을 수도 있음