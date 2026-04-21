#include <stdio.h>

int main() {
    int a = 3;
    if (a==3) {
        printf("wow!!\n");
        printf("a is 3!!\n");
    }

    if (a==4) {
        printf("what is this?\n");
    }

    if (a = 0) {
        printf("what is this 2?\n"); //여기서는 =을 써서 a에 0이 할당되는 것이나 ==로 비교를 했을 때나 조건식이 출력되지 않는다. a에 0이 할당되면 조건식이 거짓이 되어 "what is this 2?"가 출력되지 않고, a가 0과 같은지 비교하면 역시 거짓이 되어 "what is this 2?"가 출력되지 않는다. 
    }

    if (a == -1) {
        printf("what is this 3?\n"); // a = -1과 a == -1은 다르다. a = -1은 a에 -1을 대입하는 것이다. 따라서 if문 안의 조건식이 참이 되어 "what is this 3?"이 출력된다. ==를 사용하여 a가 -1인지 비교해야 한다.
    }

    if ((-5 <= a) && (a < 4)) { // a가 -5이상이고 4 미만인 경우에 구문을 실행하려고! && 잘 쓰기
        printf("Print 1 run!!\n");
        printf("Print 1 run!!\n");
    }

    return 0;
}