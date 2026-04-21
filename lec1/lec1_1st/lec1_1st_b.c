#include <stdio.h>

int main() {
    int b = -3;

    printf("b %%d: %d\n", b); //%d, %i: 부호 있는 정수(signed integer), int
    printf("b %%i: %i\n", b);
    printf("b %%c: %c\n", b); //ASCII 코드에 음수는 정의되어 있지 않아 이상한 문자가 나옴
    printf("b %%f: %f\n", b); //앞 예시와 마찬가지로 int 데이터를 float 방식으로 해석하려다 실패함
    printf("b %%u: %u\n", b); //음수를 "부호 없는 정수"로 해석한 결과
    // %u: 이 데이터는 무조건 양수(unsigned)야 라고 믿고 읽는 안경, 그래서 겁나 큰 숫자..
    /* 프로그래밍에서 unsigned(부호 없는)라는 말은 말 그대로 부호(+, -)를 저장하는 칸을 없앴다는 뜻
    즉 자연스럽게 0과 양수만을 다루게 됨 */

    printf("--------\n");

    return 0;
}