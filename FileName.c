#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "RUS");
    int n;

    printf("Введите число от 1 до 99: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 99) {
        printf("Ошибка: введите число от 1 до 99\n");
        return 1;
    }

    const char* forms[] = { "копеек", "копейка", "копейки" };

    int last_two = n % 100;
    int last_one = n % 10;

    int idx = (last_two > 10 && last_two < 15) * 0
        + (last_two <= 10 || last_two >= 15) *
        ((last_one == 1) * 1 + (last_one >= 2 && last_one <= 4) * 2);

    printf("%d %s\n", n, forms[idx]);

    return 0;
}