#include <stdio.h>
int main () {
int N;
int count = 0;
printf("Введите число: ");
scanf("%d",&N);

for (int i = 1; i<= N; i++) {
    if (N % i == 0) {
        count += 1;
    
    }
}
printf("%d\n", count);
return 0;
}