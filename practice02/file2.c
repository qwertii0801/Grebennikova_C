#include <stdio.h>
int main () {
    int n;
    printf("Введите n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        if (i % 2 !=0){
            printf("%d\n", i);
        }
    }
}