#include <stdio.h>

int main() {
    char strc[5] = "abcd";
    printf("strc %%c: %c\n", strc);
    printf("strc %%d: %d\n", strc);
    printf("strc %%s: %s\n", strc);

/*
%c는 딱 1바이트 정수를 가져와서 문자로 해석, 하지만 전달한 strc는 데이터 자체가 아니라 "주소값"
%d: 실행할 때마다 바뀔 수 있는 커다란 숫자..strc가 가리키는 메모리 주소값을 10진수 정수로 출력한거래
%s: 내가 준 주소부터 시작해서 \0(NULL)이 나올 때까지 다 읽어서 문자로 보여달라는 뜻, strc가 시작 주소를 알려줬으니 'a'부터 시작해 'd'를 지나 'NULL'을 만날 때까지 정상적으로 출력

만약 첫 글자 a만 출력하고 싶다? printf("%c", strc[0]); 이렇게 하면 됨!
*/

    return 0;
}