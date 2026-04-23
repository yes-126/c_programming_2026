#include <stdio.h>

double get_average(double left, double right);

int main() {
    int x = 3;
    double cc = 1.5;
    double avg_result = get_average(x, cc);
    printf("result: %f\n", avg_result);

    return 0;
}

double get_average(double left, double right) {
    double result = (left + right);
    result /= 2;
    return result;
}

/*이렇게 일단 함수 이름만이라도 먼저 선언해두면 에러가 나지 않는 듯!
선언을 먼저 하는 경우는 ㄱㅊ, 근데 이제 또 선언만 하고 뒤에서 구현을 안 하면
에러가 발생하겠죠?*/