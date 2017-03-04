/*
 * Counts number of delimiters.
 */
 
# include <stdio.h>

int main() {
	int nd, c;
	nd = 0;
	while ( (c = getchar()) != EOF) {
		if (c == '\n') {
			++nd;
		} else if (c == '\t') {
			++nd;
		} else if (c == ' ') {
			++nd;
		}
	}
	printf("\n\tDelimiters count: %d\n", nd);

	return 0;
}
