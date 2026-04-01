#include <stdio.h>

void remove_negatives(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        if (*arr < 0){
            *arr = 0;
        }
        arr++;
    }

    return;
}

int main() {
    int a[]= {1,-5,3,6,-7,8};
    int n = 6;
    remove_negatives(a, n);

    for (int  i = 0; i < n; i++){
        printf("%d\n", a[i]);
    }
    return 0;
}