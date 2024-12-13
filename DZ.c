#include <stdio.h>

int main() {
    int number;

    // Запрос значения у пользователя
    printf("Введите целое число: ");
    scanf("%d", &number);

    // Проверка знака числа
    if (number > 0) {
        printf("Знак числа: положительное\n");
    } else if (number < 0) {
        printf("Знак числа: отрицательное\n");
    } else {
        printf("Знак числа: 0\n");
    }

    return 0;
}
