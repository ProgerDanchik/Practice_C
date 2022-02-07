#include <stdio.h>

/* replacing consecutive spaces with one space */

main() {
	int c, postc;

	postc = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			if (postc == 0) {
				putchar(c);
				postc = 1;
			}
		}
		else if (c != ' ') {
			putchar(c);
			postc = 0;
		}
	}
}
