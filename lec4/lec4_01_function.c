#include <stdio.h>

double get_average(double left, double right) {
    double result = (left + right);
    result /= 2;
    return result;
}

int main() {
    return 0;
}
//교안 기준 컴파일은 되나(오류 없이 실행은 되나) 아무것도 나오지 않음
/* (결과의 형식) (함수의 이름) (입력받는 변수들, parameter) {함수의 본문}
parameter를 함수 내부에서 사용, 결과의 형식은 서로 동일해야
다음 코딩에서 더 해볼게용..*/