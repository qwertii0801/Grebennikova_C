#include <stdio.h>

int sum_digits(int n){
    if (n == 0) {
        return 0;
    }
     int x = n;
    if (x < 0) {
        x = -x;
    }
    int sum = 0;
    while (x > 0) {
        x += x % 10;
        x /= 10;
    }
    return sum;

}
int main() {
    printf("sum_digits(1234) = %d\n", sum_digits(1234));
    return 0;
}