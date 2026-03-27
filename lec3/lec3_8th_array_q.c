#include <stdio.h>

#define MAX_SIZE 100 //최대 입력 가능한 숫자의 개수
#define RANGE 50 //숫자의 범위 (0 ~ 49)

int main() {
    int n, i, number;
    int frequency[RANGE] = {0}; //숫자의 빈도수를 저장할 배열 초기화
    int arr[MAX_SIZE]; //사용자로부터 입력받을 숫자를 저장할 배열

    printf("Enter the number of elements (max %d):", MAX_SIZE);
    scanf("%d", &n);

    //사용자로부터 n개의 숫자 입력받기
    for(i = 0; i < n; i++) {
        printf("Input %d number: ", i + 1);
        scanf("%d", &number);
        arr[i] = number; // Store the number in the array
        if(number >= 0 && number < RANGE) {
            frequency[number]++; // Increment the frequency of the number
        }
    }

    //빈도수 출력
    printf("Number Frequency\n");
    for(i = 0; i < RANGE; i++) {
        if(frequency[i] > 0) {
            printf("%d: %d\n", i, frequency[i]);
        }
    }
    
    return 0;
}