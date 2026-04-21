#include <stdio.h>

int main() {
    int num1;
    float f1;
    char c1;

    printf("정수 입력 : ");
    scanf("%d", &num1);

    printf("실수 입력 : ");
    scanf("%f", &f1);

    printf("문자 입력 : ");
    scanf(" %c", &c1);

    printf("입력한 값은 각각 %d, %f, %c입니다.\n", num1, f1, c1);
    
    return 0;
}
/* 교안에는 [%d], [%f], [%c]입니다. 라고 쓰여있었는데 이것도 저 [] 일일이 쓴 상태로 잘 출력되고,
[%d %f %c]라고 입력해도 []안에 다 담겨서 출력되고, []없이
%d, %f, %c라고 입력해도 사이에 , 디테일까지 다 챙겨서 출력됨*/