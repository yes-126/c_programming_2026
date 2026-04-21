#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.14;
    char c = 'd'; //문자형 상수는 작은 따옴표 /char가 내부적으로 숫자로 저장된다는 원리를 보여줌

    // 문자 비교
    if ('a'<'b') {
        printf("b(%c-%d) is greater than a(%c-%d).\n", 'b', 'b', 'a', 'a');
    } // %c로 출력하면 문자가 나오고 %d로 출력하면 아스키 코드값이 나옴

    //대문자로 전환
    printf("before c: %c\n", c);
    if ('a' <= c && c <= 'z') { //소문자 범위에 있는지 확인
        c = c - 'a' + 'A';
    } // 아 근데 아스키코드 안 내신다고 하셨는데.. -'a'+'A' 확인
    printf("after c: %c\n", c);

    return 0;
}