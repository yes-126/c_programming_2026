#include <stdio.h>

#define N 10 //#define은 변수를 설정하는 방법이라고 생각합시다.

int main() {
    int a[N];

    a[1] = 5;
    printf("%d\n", a[1]);
    ++a[1];
    printf("%d\n", a[1]);

    for (int i = 0; i < N; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    } // a[1]만 의미있는 값, 나머지는 쓰레기값이 채워져 있
    return 0;
}

//배열의 출력은 배열이 어떤 형인지에 따라 %d, %f, %c 등을 쓸 수 있음.
//문자열 char인 경우에는 %s로 한 번에 통째로 출력할 수 있음.