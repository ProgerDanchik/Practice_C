#include <stdio.h>

/* 
	program that prints the contents of its input, placing one
	words on each line 
*/

main() {
	int c;

	while ((c = getchar()) != EOF) {
		if (c == '\t' || c == ' ') {
			printf("\n");
		}
		else {
			putchar(c);
		}
	}
}
