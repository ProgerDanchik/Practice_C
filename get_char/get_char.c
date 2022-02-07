#include <stdio.h>

/* Копирование ввода на вывод; 2-я версия */ 

int main() {
	int c;

	while ((c = getchar()) != EOF) {
		putchar(c);
	}
}
