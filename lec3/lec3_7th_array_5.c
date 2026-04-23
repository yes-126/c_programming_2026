#include <stdio.h>

int main() {
    char string[10] = "10elements";
    
    // printf("%s\n", string); 하면 10elements가 출력됨. 왜냐하면 문자열은 null character로 끝나기 때문

    for (int i = 0; i < 10; i++) {
        printf("%c", string[i]);
    } // 우와 이렇게 해도 계속 루프 돌면서 결국 10elements가 출력됨.
    printf("\n");


    return 0;
}

// 교안에 있는 버전이랑 조금 다름