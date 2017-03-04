 /*
  * Program does the same as in the first program but realizes variable assignment
  * in different way, that needs less code. Note that variable `c` is an
  * `int` type,  it's also possible
  */

#include <stdio.h>

int main() {
    int c;
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
    return 0;
}
