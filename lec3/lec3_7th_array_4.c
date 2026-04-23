#include <stdio.h>

#define N 10

// 배열 크기를 알아내는 방법 더 정확히는(아래)
// sizeof 연산자는 그 데이터가 차지하는 용량을 측정함..!

int main() {
    int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("size of a array is %lu.\n", sizeof(a));
    printf("size of element of a array's first element is %lu.\n", sizeof(a[0]));
    printf("size of element of int is %lu.\n", sizeof(int));
 
    // int a_size = sizeof(a) / sizeof(a[0]); 혹시 모르니 (int)는 붙여줄 것
    int a_size = (int) sizeof(a) / sizeof(a[0]); //전체 바이트 크기 / 한 요소의 바이트 크기
    printf("length of a array is %d.\n", a_size);
 
    int a_size2 = (int) sizeof(a) / sizeof(int); //sizeof(int)는 4거든(고정값) int는 다 4바이트짜리, 이 사실을 이용하는 
    printf("length of a array is %d.\n", a_size2);
 
    return 0;
}