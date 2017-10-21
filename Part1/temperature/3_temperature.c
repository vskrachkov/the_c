/*
 * Temperature converter from Fahrenheit to Celisius (using `for` loop).
 */

#include <stdio.h>

int main() {
    int fahr;
    printf("Fahrenheit\nCelsius\n");
    for (fahr = 0; fahr <= 300; fahr += 30) {
        printf("%10d\t%7.2f\n", fahr, 5.0 * (fahr - 32) / 9.0);   
    }
    return 0;
}
