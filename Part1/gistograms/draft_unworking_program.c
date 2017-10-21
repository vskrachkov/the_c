/*
 * Program takes words and prints gistogram of its length.
 */

#include <stdio.h>

#define WORD_MAX_LEN 100
#define MAX_LINES_COUNT 20

// IN means that previous simbol belongs to the word.
// and OUT means the oppposite to IN.
#define IN 1
#define OUT 0


int lines[MAX_LINES_COUNT];
char word[WORD_MAX_LEN];

void print_gist(val, char ch) {
	/*
	 * Params:
	 *   :val: -- lenth of the gistogram.
	 *   :ch: -- character of which gistogram will be consists.
	 */
	while ( val > 0 ) {
		printf("%s", ch);
	}
}

int is_words_end(ch) {
	/*
	 * Takes a char and returns `1` if the taken char is in the word
	 * and `0` if it is not.
	 */
	int c, i;
    i = 0;

	while ((c = getchar()) != EOF) {
		++i;
		if (c == '\n') {
			;
		} else if (c == '\t') {
			;
		} else if (c == ' ') {
			;
		} else {
			return 0;
		}
		return 1;
}

int getword() {
	/*
	 * Takes the word from command prompt.
	 * Returns length of the taken word.
	 */
}

int main() {
	int prev;
	char c;
	prev = OUT;

	while ( (c = getchar()) =! EOF ) {
		if ( c != '\n' )
			pass
	}
	return 0;
}
