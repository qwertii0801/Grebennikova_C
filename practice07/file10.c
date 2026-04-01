#include <stdio.h>

int sum_array(int arr[], int n) {
    int *p = arr;
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += *(p + i);
    }
    return sum;
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = 5;
    printf("sum_array = %d\n", sum_array(a, n));
    return 0;
}
