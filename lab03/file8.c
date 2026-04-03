#include <stdio.h>
#include <stdlib.h>

void addElement(int **arr, int *size) {
    int value;
    printf("Введите значение для добавления: ");
    scanf("%d", &value);

    (*size)++;
    int *tmp = (int*)realloc(*arr, *size * sizeof(int));
    if (tmp == NULL) {
        printf("Ошибка выделения памяти!\n");
        return;
    }
    *arr = tmp;
    (*arr)[*size - 1] = value;
    printf("Элемент %d добавлен!\n", value);
}

void deleteElement(int **arr, int *size) {
    if (*size == 0) {
        printf("Список пуст! Нечего удалять.\n");
        return;
    }

    int index;
    printf("Введите индекс для удаления (0-%d): ", *size - 1);
    scanf("%d", &index);

    if (index < 0 || index >= *size) {
        printf("Неверный индекс!\n");
        return;
    }

    for (int i = index; i < *size - 1; i++)
        (*arr)[i] = (*arr)[i + 1];

    (*size)--;
    int *tmp = (int*)realloc(*arr, *size * sizeof(int));
    if (tmp == NULL && *size > 0) {
        printf("Ошибка изменения размера!\n");
        return;
    }
    *arr = tmp;
    printf("Элемент удален!\n");
}

void printList(int *arr, int size) {
    if (size == 0) {
        printf("Список пуст!\n");
    } else {
        printf("Список элементов: ");
        for (int i = 0; i < size; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
}

void changeSize(int **arr, int *size) {
    int new_size;
    printf("Введите новый размер: ");
    scanf("%d", &new_size);

    if (new_size < 0) {
        printf("Неверный размер!\n");
        return;
    }

    int *tmp = (int*)realloc(*arr, new_size * sizeof(int));
    if (tmp == NULL && new_size > 0) {
        printf("Ошибка изменения размера!\n");
        return;
    }
    *arr = tmp;

    if (new_size > *size) {
        printf("Введите %d новых элементов:\n", new_size - *size);
        for (int i = *size; i < new_size; i++)
            scanf("%d", &(*arr)[i]);
    }

    *size = new_size;
    printf("Размер изменен на %d\n", *size);
}

int main() {
    int *arr = NULL;
    int size = 0;
    int choice;

    void (*actions[5])(int**, int*) = {
        NULL,
        addElement,
        deleteElement,
        NULL,
        changeSize
    };

    while (1) {
        printf("\n========== МЕНЮ ==========\n");
        printf("1. Добавить элемент\n");
        printf("2. Удалить элемент\n");
        printf("3. Вывести список\n");
        printf("4. Изменить размер массива\n");
        printf("5. Выход\n");
        printf("==========================\n");
        printf("Выберите действие: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("До свидания!\n");
            break;
        }

        if (choice == 3) {
            printList(arr, size);
        } else if (choice >= 1 && choice <= 4 && actions[choice] != NULL) {
            actions[choice](&arr, &size);
        } else {
            printf("Неверный выбор! Попробуйте снова.\n");
        }
    }

    if (arr != NULL) {
        free(arr);
        arr = NULL;
    }
    return 0;
}