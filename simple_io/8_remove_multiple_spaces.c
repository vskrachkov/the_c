/*
 * Replaces multiple spaces by one.
 */

#include <stdio.h>

int main() {
	char c, prev;
	while ( (c = getchar()) != EOF) {
		if ((prev == ' ') && (prev == c)) {
			continue;
		}
		prev = c;
		printf("%c", c);
	}
	return 0;
}

