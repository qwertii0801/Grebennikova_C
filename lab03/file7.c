#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
} Student;

int main() {
    int n;
    printf("Введите количество студентов: ");
    scanf("%d", &n);

    Student *students = (Student*)malloc(n * sizeof(Student));
    if (students == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Введите имя студента %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Введите возраст: ");
        scanf("%d", &students[i].age);
    }

    printf("\nСписок студентов:\n");
    for (int i = 0; i < n; i++) {
        printf("%d. Имя: %s, Возраст: %d\n", i + 1, students[i].name, students[i].age);
    }

    int oldest_index = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].age > students[oldest_index].age)
            oldest_index = i;
    }

    printf("\nСамый старший студент: %s (%d лет)\n", students[oldest_index].name, students[oldest_index].age);

    free(students);
    students = NULL;
    return 0;
}