/*
 * Simple program that takes a simbol from command prompt and prints it 
 * until simbol is not the end of the file. (Just press `Ctrl + C`)
 */

#include <stdio.h>

int main() {
    char c;
    c  = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
    return 0;
}
