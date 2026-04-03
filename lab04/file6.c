#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    FILE *fp = fopen("data.bin", "wb");
    if (fp == NULL) {
        printf("Ошибка открытия\n");
        return 1;
    }
    fwrite(arr, sizeof(int), 5, fp);
    fclose(fp);

    int new_arr[5];
    fp = fopen("data.bin", "rb");
    if (fp == NULL) {
        printf("Ошибка открытия\n");
        return 1;
    }
    fread(new_arr, sizeof(int), 5, fp);
    fclose(fp);

    for (int i = 0; i < 5; i++) {
        printf("%d ", new_arr[i]);
    }
    return 0;
}