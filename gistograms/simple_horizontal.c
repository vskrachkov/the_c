/*
 * Program takes word and prints gistogram of it length.
 */

#include <stdio.h>

void print_gistogram(int val) {
	printf("\n%-3d", val);
	while (val != 0) {
		printf("-");
		--val;
	}
	printf("\n");
}


int main() {
	int len = 20;
	int counter = 0;
	char c;
	char word[20];
	for (len = 0 ; len < 20; ++len) {
		word[len] = ' ';
	}
	for (len = 20 ; len > 0; --len){
		c = getchar();
		if (c == EOF || c == '\n')
			break;
		++counter;
		word[20 - len] = c;
	}
	for (len = 0 ; len < 20; ++len) {
		printf("%c", word[len]);
	}
	print_gistogram(counter);
	return 0;
}
