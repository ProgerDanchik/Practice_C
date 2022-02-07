#include <stdio.h>

/* A program for counting spaces, tabs and newlines */


main() {
	int c, nspace, ntab, nline;

	nspace = ntab = nline = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			++nspace;
		}
		else if (c == '\t') {
			++ntab;
		}
		else if (c == '\n') {
			++nline;
		}
	}

	printf("Spaces - %d, tabs - %d, lines - %d\n", nspace, ntab, nline);
}
