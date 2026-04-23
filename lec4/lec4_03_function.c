#include <stdio.h>

double get_average(double left, double right) {
    double result = (left + right);
    result /= 2;
    return result;
}

int main() {
    int x = 3;
    double cc = 1.5;
    double avg_result = get_average(x, cc);
    printf("result: %f\n", avg_result);

    return 0;
}

//변수를 parameter로 넣어줄 수 있음
/*만약 함수의 선언보다 사용이 앞에 있으면 에러가 발생함(당연),
get_average라는 함수를 그래서 int main 시작 전에 먼저 선언해줌
에러가 안 나는 표기법은(물론 그래도 함수 먼저 선언하는 게 훨 낫긴 함)*/