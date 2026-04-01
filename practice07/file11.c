#include <stdio.h>

int max_array(int arr[], int n) {
    if (n <= 0) return 0;
    int *p = arr;
    int max = *p;
    for (int i = 1; i < n; ++i) {
        if (*(p + i) > max) {
            max = *(p + i);
        }
    }
    return max;
}

int main() {
    int a[] = {3, 7, 2, 9, 1};
    int n = 5;
    printf("max_array = %d\n", max_array(a, n));
    return 0;
}