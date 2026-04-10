#include <stdio.h>

int main() {
    int abc = 1;
    int* other = &abc;
    int* other2 = other;

    printf("abc: %d\n", abc);
    printf("other: %d\n", *other);
    printf("other2: %d\n", *other2);
   
    abc++;
    printf("abc: %d\n", abc);
    printf("other: %d\n", *other);
    printf("other2: %d\n", *other2);
   
    (*other2)++;
    printf("abc: %d\n", abc);
    printf("other: %d\n", *other);
    printf("other2: %d\n", *other2);
}

// *other2++ 랑 (*other2)++ 랑 다른 결과
// 그냥 쓰면 뒤에 있는 ++가 먼저라, *other2++ 는 포인터(주소)를 다른 곳으로 옮기고
// (*other2)++ 는 other2가 가리키는 주소로 먼저 가서 그 값을 증가시킴