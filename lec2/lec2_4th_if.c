#include <stdio.h>

int main() {
    int a;
    a = 3;
    if (-5 <= a && a < 4) {
        printf("a(%d) is ge -5 and lt 4.\n", a);
    }
 
    a = 3;
    if (-5 <= a++ && a < 4) {
        printf("a(%d) is ge -5 and lt 4. :1\n", a);
    } //일단 3으로 먼저 -5랑 비교하는데 비교 끝나자마자 a는 4가 되어서 뒤가 거짓이 됨
 
    a = 3;
    if (-5 <= a && a++ < 4) {
        printf("a(%d) is ge -5 and lt 4. :2\n", a);
    } //앞에 통과, 3으로 4랑 비교해(참) 근데 비교가 끝난 후 a가 4가 되기 때문에 a값이 4로 찍히며 출력
 
    a = 3;
    if (-5 <= ++a && a < 4) {
        printf("a(%d) is ge -5 and lt 4. :3\n", a);
    } //먼저 a를 4로 만들고 -5랑 비교, 통과, 현재 a가 4이므로 뒤는 거짓
 
    a = 3;
    if (-5 <= a && ++a < 4) {
        printf("a(%d) is ge -5 and lt 4. :4\n", a);
    } //앞에 통과, a를 먼저 4로 만들고 비교, 뒤는 거짓

    return 0;
} 