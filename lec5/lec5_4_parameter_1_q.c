#include <stdio.h>

/*
@brief 숫자를 정수와 소수 부분으로 나누어서 할당해주는 함수
@param x 입력 변수 (값 전달)
@param out_int_part 정수 파트 (주소 전달)
@param out_frac_part 소수 파트 (주소 전달)
*/

void decompose(double x, long *out_int_part, double *out_frac_part) {
    //1. x를 long으로 형변환하여 정수 부분 추출
    *out_int_part = (long)x;

    //2. 원래 값에서 정수 부분을 빼서 소수 부분 추출
    *out_frac_part = x - *out_int_part;
}

int main() {
    double pi = 3.141592;
    long int_part;
    double frac_part;

    //함수 호출 시 변수의 '주소'를 넘겨줍니다.
    decompose(pi, &int_part, &frac_part);

    printf("pi int part: %ld\n", int_part);
    printf("pi frac part: %f\n", frac_part);

    return 0;
}