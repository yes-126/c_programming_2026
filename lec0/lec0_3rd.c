#include <stdio.h>

int main() {
    int a = 1; //int: 정수
    printf("a: %d\n", a);

    a = a + 1; //변수는 변경 가능
    printf("a: %d\n", a);

    float b = 0.2; //float: 소수점 이하 6자리
    printf("b: %f\n", b);

    double c = 0.2; //double: 소수점 이하 15자리
    printf("c: %f\n", c);

    char d = 'a'; //char: 문자, 문자는 ''로
    printf("d: %c\n", d);

    char ds[5] = "abc"; //문자열은 ""로, 이건 배열임
    //배열 크기 5, 어떻게 배열된 거냐면 a,b,c,\0(끝을 알림), 빈 공간 하나 즉 문자열 "abc"를 넣으려면 최소 크기 4의 배열이 필요함
    printf("ds: %s\n", ds);
    /* %s(string): 문자열로 출력, 문자열은 char 배열로 저장됨, 그래서 char 배열을 %s로 출력하면 문자열이 나옴
    콕 집어 배열의 3번째 항목을 출력해달라고 할거면 %c로 출력하면 됨, printf("%c", ds[2]); 이렇게 하면 c가 나옴
    %c(character): ds[2]에 들어있는 것은 문자열 전체가 아니라 '문자 하나'이므로, 형식을 %s에서 %c로 바꿔줘야함*/

    return 0;
}