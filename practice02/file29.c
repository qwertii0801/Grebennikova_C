#include <stdio.h>
int main () {
    int n;
    int max = 0;
    printf("ВВедите число :");
    scanf("%d",&n);
    for (int i = 1; i<= n; i++){
        if ( i % 5 == 0){
            max = n;

        }
    }
    printf("%d\n", max);
    return 0;
}