/*
 * Program that counts number of lines, spaces and words.
 */

#include <stdio.h>

#define IN 1
#define OUT 0


int is_new_word(int prev) {
	if (prev == IN)
		return 1;
	return 0;
}


int main() {
	int c, sp, tb, nl, w, prev;
	sp = tb = nl = w = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			++nl;
			w += is_new_word(prev);
			prev = OUT;
		} else if (c == '\t') {
			++tb;
			w += is_new_word(prev);
			prev = OUT;
		} else if (c == ' ') {
			++sp;
			w += is_new_word(prev);
			prev = OUT;
		} else {
			prev = IN;
		}
	}
	printf("\n\n"
	       "Results:\n"
		   "--------\n"
		   "Lines: %d\n"
		   "Spaces: %d\n"
		   "Tabs: %d\n"
		   "Words: %d\n",
		   nl, sp, tb, w);
	return 0;
}
