#include <stdio.h>
/*
* @brief Calculate sum of array.
*
* @param arr array
* @param arr_size size of the array.
* @return int sum of array.
*/

int sumOfArray1(int arr[], int arr_size);
//이게 정석적인, parameter을 배열로 받는 함수

/*
* @brief Calculate sum of array.
*
* @param arr array
* @return int sum of array.
*/

int sumOfArray2(int arr[]);

int main() {
    int arr[5] = { 1, 3, 9, 2, 7 };
    //int 배열(숫자)는 [5]라고 쓰면 정수 상자 5개를 준비해서 위의 5개 숫자가 딱 맞게 하나씩 들어감
    //반면에, 문자열 char은 맨 뒤에 \0의 자리도 필요해서 5글자여도 6칸짜리 배열이 필요한 경우
    
    printf("Sum of array using sumOfArray1 is: %d\n", sumOfArray1(arr, 5));
    printf("Sum of array using sumOfArray2 is: %d\n", sumOfArray2(arr));
    
    return 0;
}

int sumOfArray1(int arr[], int arr_size) {
    int sum = 0;
    for (int i = 0; i < arr_size; i++) {
        sum += arr[i];
    }
    return sum;
}

int sumOfArray2(int arr[]) {
    return 0;
}