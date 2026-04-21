#include <stdio.h>

int main() {
    int num1, num2;

    printf("첫 번째 정수: ");
    scanf("%d", &num1);
    printf("두 번째 정수: ");
    scanf("%d", &num2);

    printf("입력한 정수는 각각 [%d]와 [%d]입니다.\n", num1, num2);
    
    return 0;
}

/*만약 22.5를 입력하면 num1에는 정수 부분인 22만 쏙 들어감
%d가 정수형을 읽는 애라
%d가 문자를 받긴 받아도 아스키 코드로 '숫자'로 해석해서 받는데 scanf 함수가 그런거임
ex. char grade = 'A';
printf("%d", grade); 하면 65가 출력됨 */