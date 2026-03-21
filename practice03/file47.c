#include <stdio.h>
int main() {
    int n, all_even = 1, temp;
    printf("N: ");
    scanf("%d", &n);
    temp = n < 0 ? -n : n;
    while (temp > 0 && all_even) {
        if ((temp % 10) % 2 != 0) all_even = 0;
        temp /= 10;
    }
    printf("%s\n", all_even ? "ДА" : "НЕТ");
    return 0;
}