#include <stdio.h>

int count_digits(int n) {
    if (n == 0) {
        return 1;
    }
    int x = n;
    if (x < 0) {
        x = -x;
    }
    int count = 0;
    while (x > 0) {
        count++;
        x = x / 10;
    }
    return count;
}

int main() {
    printf("count_digits(1234) = %d\n", count_digits(1234));
    return 0;
}