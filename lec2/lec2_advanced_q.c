//예제, from~to의 범위에서 baesu의 최소 배수를 구하기, for if break를 사용해서.
#include <stdio.h>

int main() {
    int from = 8;
    int to = 16;
    int baesu = 7;

    int d;

    int result = 0;

    for (d = from; d <= to; d = d + 1) {
        if (d % baesu == 0) {
            result = d;
            break;
        }
    }
    if (result != 0) {
            printf("from %d to %d, the smallest %d baesu is %d\n", from, to, baesu, result);
        } else {
    printf("from %d to %d, no %d baesu exists.\n", from, to, baesu);
        }

    return 0;

}

// 내가 짠 코드는 메모장에 적어두겠음~
// 뒷부분은 result가 아직 여전하니?(=배수가 없더냐?)로 짠 거임! 교수님 작품,,