/*
 * Prints count of characters inputed by prompt.
 */

#include <stdio.h>

int main() {
    long nc;
    nc = 1;
    while (getchar() != EOF) {
		++nc;
    }
    printf("%ld\n", nc);
    return 0;
}
