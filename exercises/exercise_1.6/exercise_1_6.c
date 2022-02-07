#include <stdio.h>

/* Вывод значения 0 или 1 */ 

int main() {
	int c;

	c = (getchar() != EOF);

	if (c == 0) {
		printf("Равно 0");
	}
	if (c == 1) {
		printf("Равно 1");
	}
}
