#include <stdio.h>

void inc_array(int arr[], int n){
    for (int i = 0; i < n; i++) {

    
    *( arr + i) = *(arr + i) + 1;
    }
}
int main () {
    int a[] = {1,2,3,4};
    inc_array(a, 4);

    for (int i = 0; i < 4; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}
