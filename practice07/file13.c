#include <stdio.h>

int max_array(int arr[], int n) {
    int a = 0;

    for(int i = 0; i < n; i++){
        if (a < *(arr+i)) {
            a = *(arr+i);

        }
    }
    return a;

    
}
int main () {
    int arr[] = {1,2,3};
    printf("%d\n", max_array(arr, 3));

}