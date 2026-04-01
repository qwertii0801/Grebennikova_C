#include <stdio.h>

void calc(int a, int b, int *sum, int *mul) {
     *sum = a + b;
     *mul = a * b;
}

int main() {
int a = 6;
int b = 7;
int result_sum;
int result_mul;
calc(a , b, &result_sum, &result_mul);
printf(" %d %d\n", result_sum, result_mul);
return 0;


}