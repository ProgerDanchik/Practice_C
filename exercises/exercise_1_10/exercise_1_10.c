#include <stdio.h>

/* special character substitution */

main() {
	int c, postc;

	while ((c = getchar()) != EOF) {
		postc = 0;

		if (c == '\t') {
			printf("\\t");
			postc = 1;
		}
		else if (c == '\\') {
			printf("\\\\");
			postc = 1;
		}
		else if (c == '\b') {
			printf("\\b");
			postc = 1;
		}

		if (postc == 0) {
			putchar(c);
		}
	}
}
