#include <stdio.h>

#define N 10

int main() {
    /* int a[N];
    for (int i = 0 ; i < N ; i++) {
        a[i] = i + 1;
    }
    일일이 지정 안 할거면 for문 사용해서 이렇게 지정*/
    
    int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //값을 전부 지정
    a[1] = 5; //a[1]의 값을 5로 바꿔줌
    for (int i = 0 ; i < N ; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
    
    return 0;
}