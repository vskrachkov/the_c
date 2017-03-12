/*
 * Program counts number of passed simbols (digits, delimiters and other).
 */

#include <stdio.h>

int main() {
	int c, i, del, other;
	del = other = 0;
	// array for storing count of each digit which passed in command prompt.
	int digits[10];
	// initializing array.
	for (i = 0; i < 10; ++i)
		digits[i] = 0;
	while ( (c = getchar()) != EOF ) {
		if (c >= '0' && c <= '9')
			++digits[c - '0'];
		else if ( c == ' ' || c == '\n' || c == '\t')
			++del;
		else
			++other;
	}
	printf("\n\nDigits:\n");
	for (i = 0; i < 10; ++i)
		printf("%s%2d%-14s%d\n", "#", i, ": ", digits[i]);
	printf("%-15s%3d\n", "Delimiters:", del);
	printf("%-15s%3d\n", "Other:", other);
	return 0;
}
