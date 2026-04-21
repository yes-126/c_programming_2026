#include <stdio.h> 

int main() { 
    int var_score = 85; 
    
    switch (var_score / 10) //int 타입끼리 연산을 하면 그 결과값도 int 타입이 됨..소수점 이하를 그냥 잘라버림
    //근데 그것도 그건데 switch quantity not an integer, switch()에 들어가는 값이 정수가 아니면 에러 뜸
    { 
    case 10: case 9: 
        printf("A grade\n"); 
        break; 
    case 8: 
        printf("B grade\n"); 
        break; 
    case 7: 
        printf("C grade\n"); 
        break;  
    default: 
        printf("F grade\n"); 
        break; 
    } 
    return 0;
}