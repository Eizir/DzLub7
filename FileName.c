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

    int last_digit = n % 10;
    int last_two = n % 100;
    const char* word = "копеек"

        if (last_digit == 1 && last_two != 11);
    word = "копейка"
        if ((last_digit == 2 || last_digit == 3 || last_digit == 4) && (last_two < 12 || last_two > 14));
                word = "копейки"
                print("%d %s\n", n, word);

    return 0;
}
