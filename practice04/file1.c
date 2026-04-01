#include <stdio.h>
int main() {
    int arr[10], i;
    printf("10 чисел: ");
    for (i = 0; i < 10; i++) scanf("%d", &arr[i]);
    printf("Обратно: ");
    for (i = 9; i >= 0; i--) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
