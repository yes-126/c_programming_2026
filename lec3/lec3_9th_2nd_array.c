#include <stdio.h>

#define N 5
#define M 9

int main() {
    int arr[N][M];
    
    for (int row = 0; row < N; ++row) {
        //for문의 세 번째 식은 단독으로 쓰이는 문장과 같아서, row++나 ++row나 똑같이 작동한다.
        //조건 보고, {}코드 실행하고, 마지막에 쓰인 값 증가 << 이렇게..
        for (int col = 0; col < M; ++col) {
            arr[row][col] = row * M + col;
        }
    }
    printf("arr[0][0]: %d\n", arr[0][0]);
    printf("arr[0][1]: %d\n", arr[0][1]);
    printf("arr[0][8]: %d\n", arr[0][8]);
    printf("arr[1][0]: %d\n", arr[1][0]);
   
    printf("&arr[0][8]: %d\n", &arr[0][8]); //주소라서 그럼
    printf("&arr[1][0]: %d\n", &arr[1][0]);
   //주소값은 일반적인 정수보다 훨씬 큰 범위를 가질 수 있는데 왜 정수 상자에 담으려고 해? 잘릴 수도 있어! 이런 느낌
   //포인터 전용 지정자인 %p를 사용해야 함, (void*)로 형변환도 해줘서(정석적)

   return 0;
} 
