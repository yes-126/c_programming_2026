#include <stdio.h>

int main() {
    int a = 2;
    float a2 = 2.0;
    int b = 3;
    float c = 3.0;

    printf("a %% b: %d\n", a % b); // %는 나머지 연산자, 오직 정수(int, char 등)에서만 사용 가능하고 float이나 double같은 실수에서는 사용할 수 없음
  //  printf("a %%% c: %f\n", a % c);
    //printf("a2 %%% b: %f\n", a2 % b);

    return 0;
}
//와.. %% 이렇ㅎ게 2번 써야 오류 없이 %가 출력되겠죠