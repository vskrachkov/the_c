/* Prints temperature table in Fahrenheit and 
 * Celsius for 0, 20, ..., 300.
 * Formula of translating: C = (5/9) * (F-32)
 */

#include <stdio.h>

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahrenheit\tCelsius\n");
    while (fahr <= upper) {
        celsius = 5.0 * (fahr - 32) / 9.0;
        printf("%10.2f\t%7.2f\n", fahr, celsius);
        fahr += step;
    }

    return 0;
}
