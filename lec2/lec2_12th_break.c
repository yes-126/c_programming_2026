#include <stdio.h>

int main() {
    int sum = 0;

    for(int i=1; i <=30; i++) {
        printf("%d\n", i);
        sum = sum+i;
        if (i > 4) {
            break;
        }
    }
    printf("sum: %d\n", sum);

    return 0;
}
// break; 문을 만나면, 그 부분에서 루프 실행 종료. break는 루프 말고도 switch문에서도 사용 가능.
// i가 5일 때 비로소 break가 실행되거든.. i가 4인 건 저 if 뒤의 조건이 참이 되는 게 아님