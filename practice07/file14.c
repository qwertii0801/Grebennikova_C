#include <stdio.h>

int count_even(int arr[], int n){
    for(int i = 0; i < n; i++) {
        if ( *(arr+i) % 2 == 0) {
            printf("%d\n", *(arr+i));

            
            
        }
    }

}
int main () {
    int arr[] = {1,2,3};
    count_even(arr,3);
}