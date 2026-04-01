#include <stdio.h>

int count_even(int arr[], int n) {
    int *p = arr;
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (*(p + i) % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    printf("count_even = %d\n", count_even(a, n));
    return 0;
}