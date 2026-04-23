//x에서 0까지 카운트다운 함수

#include <stdio.h>

/* 설명서 넣어두는 느낌~
* @brief countdown <<함수의 요약 설명
*
* @param x countdown starting point <<함수가 입력받는 매개변수에 대한 설명
*/

void countdown(int x); //함수 선언

int main() {
    countdown(10);

    printf("---------\n");
    countdown(4);

    return 0;
}

void countdown(int x) { //함수 구현
    for (int i = x; i >= 0; i--) {
        printf("%d ", i);
    }
    printf("\n");
}
/*void함수는 return이 없어도 됨, int나 float같은 타입이 붙은 함수는 약속된
타입의 값을 가지고 돌아가야 하기 때문에 return 뭐; 라고 명시적으로 써줘야 함*/