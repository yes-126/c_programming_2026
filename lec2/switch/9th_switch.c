#include <stdio.h>

int main()
{
    int var_score = 85;
    
    switch (var_score)
    {
    case 90:
        printf("A grade\n");
        break;
    case 80:
        printf("B grade\n");
        break;
    case 70:
        printf("C grade\n");
        break;
    default:
        printf("F grade\n");
        break;
    }
 return 0;
}
//switch는 계단식 if 대신에 사용할 수 있는 구문, break는 꼭 붙여야한다. break가 없으면 다음 case로 넘어가서 실행된다.
//(switch는 정수형, 문자형, 열거형만 사용할 수 있다) case마다 break를 붙여야 한다.
// switch는 default를 붙이는 것이 좋다.

// 85는 case에 없어서 default로 넘어가서 F grade가 출력된다.