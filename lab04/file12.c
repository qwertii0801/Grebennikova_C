#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
} Person;

int main() {
    Person p;
    printf("Введите имя: ");
    fgets(p.name, sizeof(p.name), stdin);
    p.name[strcspn(p.name, "\n")] = '\0';
    printf("Введите возраст: ");
    scanf("%d", &p.age);
    getchar();

    FILE *fp = fopen("database.bin", "ab");
    if (fp == NULL) {
        printf("Ошибка открытия\n");
        return 1;
    }
    fwrite(&p, sizeof(Person), 1, fp);
    fclose(fp);

    fp = fopen("database.bin", "rb");
    if (fp == NULL) {
        printf("Ошибка открытия\n");
        return 1;
    }
    Person read_p;
    while (fread(&read_p, sizeof(Person), 1, fp) == 1) {
        printf("Имя: %s, Возраст: %d\n", read_p.name, read_p.age);
    }
    fclose(fp);
    return 0;
}