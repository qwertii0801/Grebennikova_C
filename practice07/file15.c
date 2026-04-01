#include <stdio.h>
int find(int arr[], int n, int x) {
    for(int i = 0; i < n; i++) {
        if (*(arr+i) == x){
            return i;
        }
    }

}
int main () {
    int arr[] = {1,2,3};
    printf("%d\n", find(arr,3,2));
}