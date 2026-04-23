//소수 판별 함수
/*
* @brief Cheks if 'a' is prime number or not.
* @param a - The first value to compare.
* @return int - 1 if 'a' is prime number, 0 otherwise.
*/

#include <stdio.h>

int isPrime(int number); //함수 선언

//위아래의 number들은 서로 다른 변수. isPrime 안에 있는 number는 이 안에서만 쓰이고
//main 안에 있는 number와는 관계없음, 지역 변수의 개념!
/*isPrime 집에도 철수가 살고 있고 main 집에도 철수가 살고 있는 느낌
각 변수의 영향력은 자신이 속한 {} 안으로 제한된다!
*/

int main() {
    int number = 29;
    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }
    return 0;
}

int isPrime(int number) { //함수 구현
    if (number <= 1) {
        return 0; // 1 이하의 수는 소수가 아님
    }
    for (int i = 2; i <= number / 2; i++) { //절반보다 큰 수는 볼 필요도 없거
        if (number % i == 0) {
            return 0; // 나누어 떨어지는 수가 있으면 소수가 아님
        }
    }
    return 1; // 소수임
}