// Program for printing horizontal diagram.

#include <stdio.h>

#define MAX_WORD_LEN 100
#define MAX_WORDS_COUNT 5

// IN means that simbol inside the word.
// OUT has the oposite meaning.
#define IN 1
#define OUT 0

char word[MAX_WORD_LEN];

int get_word() {
	// Returns OUT if find the end of the word.
	int i = 0;

	while ( (c = getchar()) != EOF ) {
		++i;
		if ( (c != '\n') or (c != ' ') or (c != '\t') ) {
			word[i] = c;
		} else {
			return OUT;
		}
	}
}

int main() {
	for (int i; i < MAX_LINES_COUNT; ++i) {
		get_word();
	}
	for (int i; i < MAX_LINES_COUNT; )
	return 0;
}
