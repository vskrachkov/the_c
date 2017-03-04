/*
 * Prints converted temperatures in revested form, from upper to low.
 */

#include <stdio.h>

int main () {
    int fahr;
    printf("Fahrenheit\tCelsius\n");
    for (fahr = 300; fahr >= 0; fahr -= 30) {
        printf("%10d\t%7.2f\n", fahr, 5 * (fahr - 32) / 9.0);
    }
    return 0;
}
