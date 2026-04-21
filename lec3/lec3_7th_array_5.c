#include <stdio.h>

int main() {
    char string[10] = "10elements";
    
    // printf("%s\n", string);

    for (int i = 0; i < 10; i++) {
        printf("%c", string[i]);
    }
    printf("\n");


    return 0;
}

// 교안에 있는 버전이랑 조금 다름