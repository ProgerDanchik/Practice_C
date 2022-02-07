#include <stdio.h>

#define LOWER 0 // Нижняя граница таблицы
#define UPPER 300 // Верхняя граница таблицы
#define STEP 20 // Размер шага

/*
    Печать таблицы температур по Фаренгейту и Цельсию
*/

int main() {
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}
