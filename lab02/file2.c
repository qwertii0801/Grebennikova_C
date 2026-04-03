#include <stdio.h>

struct Student
{
    char name[100];
    int age;
    float average;
};

int main() {
    struct Student studens[5] = {
        {"Яна Гребенникова", 17, 8.5},
        {"Дон Дарья", 16, 10.0},
        {"Виктория Баландина", 17, 9.8},
        {"Марат", 16, 6.9},
        {"Данила Грачев", 17, 6.7},
    };

    int max_index = 0;

    for (int i = 0; i < 5; i++) {
        printf("%s %d %.1f\n", studens[i].name, studens[i].age, studens[i].average);
        if (studens[max_index].average < studens[i].average) {
            max_index = i;
        }
    }

    printf("Максимальный балл: %s %.1f\n", studens[max_index].name, studens[max_index].average);

    return 0;

}