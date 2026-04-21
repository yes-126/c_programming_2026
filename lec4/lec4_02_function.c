#include <stdio.h>

double get_average(double left, double right) {
    return (left + right) / 2;
}

int main() {
    double avg_result = get_average(3.5, 2.2);
    printf("result: %f\n", avg_result);

    return 0;
}