// break와 비슷하지만 루프 내에 남아서 계속 진행됨 다만, 현재 루프 회차만 건너뛰는 것.
// continue는 루프에서만 사용 가능함. continue가 있으면 현재 실행 중인 for만 continue하는 것~

#include <stdio.h>

int main() {
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 5; j++) {
            if (j == 3) {
                continue; // j가 3일 때, 아래 코드를 건너뛰고 다음 반복으로 넘어감
            }
            printf("%d %d\n", i, j);
        }
    }
    
    return 0;
}